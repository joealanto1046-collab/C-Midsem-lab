#include <iostream>
#include <string>

class Character {
private:
    std::string name;
    int health;
    std::string mode;
public:
    Character(std::string charName, int charHealth, std::string charmode) {
        name = charName;
        health = charHealth;
        mode = charmode;
    }
void displayDetails() {
        std::cout << "Character Name: " << name
                  << ", Health: " << health
                  << ", Attack mode: " << mode
                  << std::endl;
    }
};
int main() {
    Character character1("Pekka", 100, "ground");
    Character character2("Electro dragon", 80, "air");

    character1.displayDetails();
    character2.displayDetails();

    return 0;
}
