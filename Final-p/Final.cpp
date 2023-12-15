#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 100;
string tasks[MAX_TASKS];



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
