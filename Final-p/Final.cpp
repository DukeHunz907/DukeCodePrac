#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 100;

string tasks[MAX_TASKS];
bool completed[MAX_TASKS];
int taskCount = 0;

void addTask() {
    if (taskCount < MAX_TASKS) {
        cout << "Enter task: ";
        cin.ignore();
        getline(cin, tasks[taskCount]);
        completed[taskCount] = false;
        cout << "Task added successfully!\n";
        taskCount++;
    } else {
        cout << "Task list is full. Cannot add more tasks.\n";
    }
}

void displayTasks() {
    if (taskCount == 0) {
        cout << "To-Do List is empty.\n";
    } else {
        cout << "To-Do List:\n";
        for (int i = 0; i < taskCount; i++) {
            cout << i + 1 << ". ";
            if (completed[i]) {
                cout << "[Completed] ";
            }
            cout << tasks[i] << endl;
        }
    }
}

void markTaskAsCompleted() {
    int taskNumber;
    cout << "Enter the task number to mark as completed: ";
    cin >> taskNumber;

    if (taskNumber >= 1 && taskNumber <= taskCount) {
        completed[taskNumber - 1] = true;
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number. Please try again.\n";
    }
}

void removeTask() {
    int taskNumber;
    cout << "Enter the task number to remove: ";
    cin >> taskNumber;

    if (taskNumber >= 1 && taskNumber <= taskCount) {
        for (int i = taskNumber - 1; i < taskCount - 1; i++) {
            tasks[i] = tasks[i + 1];
            completed[i] = completed[i + 1];
        }
        taskCount--;
        cout << "Task removed successfully!\n";
    } else {
        cout << "Invalid task number. Please try again.\n";
    }
}

int main() {
    cout << "Welcome to Basic To-Do List Manager!\n";

    while (true) {
        cout << "\n1. Add Task\n2. Display Tasks\n3. Remove Task\n4. Mark Task as Completed\n5. Exit\n";
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                displayTasks();
                break;
            case 3:
                removeTask();
                break;
            case 4:
                markTaskAsCompleted();
                break;
            case 5:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
