# Interactive Timetable

This project is a simple C++ program that allows users to create and manage a weekly timetable interactively. Users can add tasks to specific days and view the entire timetable.

## Features
- Add tasks to any day of the week.
- View the tasks scheduled for each day.
- Limit of 10 tasks per day to prevent overflow.
- Easy-to-use interactive menu system.

## How It Works
1. **Add a Task**: Specify the day, time, and description of the task to add it to the timetable.
2. **View Timetable**: Displays all the tasks for each day that have been added.
3. **Exit**: Terminates the program.

## File Structure
- `main.cpp`: Contains the source code for the program.

## Usage
1. Compile the program using a C++ compiler (e.g., `g++`).
   ```bash
   g++ -o timetable main.cpp
   ```
2. Run the executable.
   ```bash
   ./timetable
   ```
3. Follow the interactive menu to add tasks or view your timetable.

## Example
### Adding a Task
Input:
```
Enter the day: Monday
Enter the time (e.g., 10:00AM): 9:00AM
Enter the task: Morning meeting
```
Output:
```
Task added successfully.
```

### Viewing the Timetable
Output:
```
--- Your Timetable ---
Monday:
  9:00AM - Morning meeting
```

## Limitations
- Maximum of 7 days can be used (e.g., one for each day of the week).
- Each day can store a maximum of 10 tasks.

## Improvements to Consider
- Dynamic allocation for days and tasks to remove static limits.
- Input validation for better error handling.
- Save and load functionality for persistent storage of tasks.
- A more user-friendly interface.

## License
This project is open-source and available under the MIT License.

