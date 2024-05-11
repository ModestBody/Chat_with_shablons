#include "Chat.h"
#include <iostream>

void Chat::RegisterUser(const std::string& username, const std::string& password, const std::string& name) {
    users_[username] = User(username, password, name);
}

bool Chat::LoginUser(const std::string& username, const std::string& password) {
    auto it = users_.find(username);
    if (it != users_.end() && it->second.VerifyPassword(password)) {
        std::cout << "Welcome, " << it->second.GetName() << "!\n";
        return true;
    }
    else {
        std::cout << "Invalid username or password.\n";
        return false;
    }
}

void Chat::BroadcastMessage(const std::string& sender, const std::string& message) {
    if (users_.find(sender) != users_.end()) {
        messages_.push_back({ sender, message });
    }
    else {
        std::cout << "Sender is not registered in the system.\n";
    }
}

void Chat::DisplayChat() {
    for (const auto& message : messages_) {
        std::cout << message.first << ": " << message.second << std::endl;
    }
}
