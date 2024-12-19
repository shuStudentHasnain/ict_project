#include <iostream>
#include <string>
using namespace std;

struct Task {
    string time;
    string task;
};

struct Day {
    string name;
    Task tasks[10]; // Maximum of 10 tasks per day
    int taskCount = 0;
};

void displayMenu() {
    cout << "\n--- Interactive Timetable ---\n";
    cout << "1. Add a task\n";
    cout << "2. View timetable\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
}

void addTask(Day timetable[], int& dayCount) {
    string dayName, time, task;
    cout << "Enter the day: ";
    cin >> dayName;

    int dayIndex = -1;
    for (int i = 0; i < dayCount; i++) {
        if (timetable[i].name == dayName) {
            dayIndex = i;
            break;
        }
    }

    if (dayIndex == -1) {
        dayIndex = dayCount++;
        timetable[dayIndex].name = dayName;
    }

    if (timetable[dayIndex].taskCount >= 10) {
        cout << "Maximum tasks for " << dayName << " reached.\n";
        return;
    }

    cout << "Enter the time (e.g., 10:00AM): ";
    cin >> time;
    cin.ignore(); // To handle newline after the previous input

    cout << "Enter the task: ";
    getline(cin, task);

    int taskIndex = timetable[dayIndex].taskCount++;
    timetable[dayIndex].tasks[taskIndex].time = time;
    timetable[dayIndex].tasks[taskIndex].task = task;

    cout << "Task added successfully.\n";
}

void viewTimetable(Day timetable[], int dayCount) {
    if (dayCount == 0) {
        cout << "No tasks scheduled yet.\n";
        return;
    }

    cout << "\n--- Your Timetable ---\n";
    for (int i = 0; i < dayCount; i++) {
        cout << timetable[i].name << ":\n";
        for (int j = 0; j < timetable[i].taskCount; j++) {
            cout << "  " << timetable[i].tasks[j].time << " - " << timetable[i].tasks[j].task << "\n";
        }
    }
}

int main() {
    Day timetable[7]; // Maximum of 7 days
    int dayCount = 0;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(timetable, dayCount);
                break;
            case 2:
                viewTimetable(timetable, dayCount);
                break;
            case 3:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}