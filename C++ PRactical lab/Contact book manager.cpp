#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    Contact c[20];
    int count = 0;
    int choice;
    string name, phone;

    do {
        cout << "\n===== Contact Book =====\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count == 20) {
                cout << "Contact book is full.\n";
                break;
            }

            cout << "Enter name: ";
            cin >> name;

            cout << "Enter phone number: ";
            cin >> phone;

            c[count].name = name;
            c[count].phone = phone;

            count++;

            cout << "Contact added successfully.\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No contacts found.\n";
            } else {
                cout << "\n===== Contacts =====\n";

                for (int i = 0; i < count; i++) {
                    cout << c[i].name << " - "
                         << c[i].phone << endl;
                }
            }
            break;

        case 3:
            cout << "Enter name to search: ";
            cin >> name;

            for (int i = 0; i < count; i++) {
                if (c[i].name == name) {
                    cout << "Contact found!\n";
                    cout << c[i].name << " - "
                         << c[i].phone << endl;
                    break;
                }

                if (i == count - 1) {
                    cout << "Contact not found.\n";
                }
            }
            break;

        case 4:
            cout << "Enter name to delete: ";
            cin >> name;

            for (int i = 0; i < count; i++) {
                if (c[i].name == name) {

                    for (int j = i; j < count - 1; j++) {
                        c[j] = c[j + 1];
                    }

                    count--;

                    cout << "Contact deleted successfully.\n";
                    break;
                }

                if (i == count - 1) {
                    cout << "Contact not found.\n";
                }
            }
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
