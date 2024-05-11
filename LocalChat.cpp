#include <iostream>
#include "Chat.h"
#include <string>

int main() {
    Chat chat;
    std::string username, password, message;

    chat.RegisterUser("Bogdan", "1234", "Bogdan");
    chat.RegisterUser("Maksim", "4321", "Maksim");

    std::cout << "Enter the user name: ";
    std::cin >> username;
    std::cout << "Enter the password: ";
    std::cin >> password;

    if (chat.LoginUser(username, password)) {
        std::cout << "Enter your sentence: ";
        std::cin.ignore();
        std::getline(std::cin, message);
        chat.BroadcastMessage(username, message);
    }
    else {
        std::cout << "Invalid password.\n";
    }

    return 0;
}
