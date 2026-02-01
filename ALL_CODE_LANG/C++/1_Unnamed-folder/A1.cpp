#include <iostream>
#include <string>

void showIntro() {
    std::cout << "Welcome to the Adventure Game!" << std::endl;
    std::cout << "You find yourself in a dark forest. There are paths to the north, south, east, and west." << std::endl;
    std::cout << "Type 'north', 'south', 'east', or 'west' to choose a direction." << std::endl;
}

void forest() {
    std::string choice;
    std::cout << "You are in a dark forest. There are paths to the north, south, east, and west." << std::endl;
    std::cin >> choice;

    if (choice == "north") {
        std::cout << "You walk north and find a mysterious cave." << std::endl;
        std::cout << "Do you want to enter the cave? (yes/no)" << std::endl;
        std::cin >> choice;
        if (choice == "yes") {
            std::cout << "You enter the cave and find a treasure chest full of gold!" << std::endl;
        } else {
            std::cout << "You decide not to enter the cave and return to the forest." << std::endl;
            forest();
        }
    } else if (choice == "south") {
        std::cout << "You walk south and encounter a friendly traveler." << std::endl;
        std::cout << "The traveler gives you a map of the forest." << std::endl;
    } else if (choice == "east") {
        std::cout << "You walk east and find a river." << std::endl;
        std::cout << "Do you want to swim across the river? (yes/no)" << std::endl;
        std::cin >> choice;
        if (choice == "yes") {
            std::cout << "You swim across the river and find a hidden village." << std::endl;
        } else {
            std::cout << "You decide not to swim across the river and return to the forest." << std::endl;
            forest();
        }
    } else if (choice == "west") {
        std::cout << "You walk west and encounter a wild bear." << std::endl;
        std::cout << "Do you want to run away or fight the bear? (run/fight)" << std::endl;
        std::cin >> choice;
        if (choice == "run") {
            std::cout << "You run away and safely return to the forest." << std::endl;
            forest();
        } else {
            std::cout << "You try to fight the bear but it overpowers you. Game over." << std::endl;
        }
    } else {
        std::cout << "Invalid choice. Try again." << std::endl;
        forest();
    }
}

int main() {
    showIntro();
    forest();
    return 0;
}
