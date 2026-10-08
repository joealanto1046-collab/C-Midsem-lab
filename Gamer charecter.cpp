#include <iostream>
using namespace std;

class Character
{
public:
    string name;
    int health;
    Character(string n, int h)
    {
        name = n;
        health = h;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
    }
};

int main()
{
    Character c1("Warrior", 100);
    Character c2("Wizard", 80);

    c1.display();
    c2.display();

    return 0;
}
