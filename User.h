#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User() = default;
    User(const std::string& login, const std::string& password, const std::string& name);

    bool VerifyPassword(const std::string& password) const;
    std::string GetName() const;

private:
    std::string login_;
    std::string password_;
    std::string name_;
};

#endif // USER_H


