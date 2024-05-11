#ifndef CHAT_H
#define CHAT_H

#include "User.h"
#include <map>
#include <vector>
#include <string>

class Chat {
public:
    void RegisterUser(const std::string& username, const std::string& password, const std::string& name);
    bool LoginUser(const std::string& username, const std::string& password);
    void BroadcastMessage(const std::string& sender, const std::string& message);
    void DisplayChat();

private:
    std::map<std::string, User> users_;
    std::vector<std::pair<std::string, std::string>> messages_;
};

#endif // CHAT_H

