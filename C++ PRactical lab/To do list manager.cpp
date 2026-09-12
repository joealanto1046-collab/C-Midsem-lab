#include <iostream>
#include <string>
using namespace std;

struct Task {
    int id;
    string description;
    bool completed;
};

int main() {

    Task tasks[15];

    int count = 0;
    int nextID = 1;
    int choice;
    int id;
    string description;

    do {

        cout << "\n===== To-Do List =====\n";
        cout << "1. Add Task\n";
        cout << "2. Mark Task as Completed\n";
        cout << "3. View Pending Tasks\n";
        cout << "4. View Completed Tasks\n";
        cout << "5. Delete a Task\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:

            if (count == 15) {
                cout << "Task list is full.\n";
                break;
            }

            cout << "Enter task description: ";
            cin.ignore();
            getline(cin, description);

            tasks[count].id = nextID;
            tasks[count].description = description;
            tasks[count].completed = false;

            cout << "Task added with ID "
                 << nextID << endl;

            count++;
            nextID++;

            break;


        case 2:

            cout << "Enter task ID: ";
            cin >> id;

            for (int i = 0; i < count; i++) {

                if (tasks[i].id == id) {

                    if (tasks[i].completed == true) {
                        cout << "Task is already completed\n";
                    }
                    else {
                        tasks[i].completed = true;
                         cout << "Task marked as completed.\n";
                    }

                    break;
                }

                if (i == count - 1) {
                    cout << "Task not found\n";
                }
            }

            break;

        case 3:

            for (int i = 0; i < count; i++) {

                if (tasks[i].completed == false) {

                    cout << "[" << tasks[i].id << "] "
                         << tasks[i].description << endl;
                }
            }

            break;

        case 4:

            for (int i = 0; i < count; i++) {

                if (tasks[i].completed == true) {

                    cout << "[" << tasks[i].id << "] "
                         << tasks[i].description << endl;
                }
            }

            break;


        case 5:

            cout << "Enter task ID: ";
            cin >> id;

            for (int i = 0; i < count; i++) {

                if (tasks[i].id == id) {

                    for (int j = i; j < count - 1; j++) {
                        tasks[j] = tasks[j + 1];
                    }

                    count--;

                    cout << "Task deleted successfully.\n";

                    break;
                }

                if (i == count - 1) {
                    cout << "Task not found\n";
                }
            }

            break;

        case 6:

            cout << "Exiting...\n";
            break;


        default:

            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}

