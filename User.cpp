#include "User.h"

User::User(const std::string& login, const std::string& password, const std::string& name)
    : login_(login), password_(password), name_(name) {}

bool User::VerifyPassword(const std::string& password) const {
    return password_ == password;
}

std::string User::GetName() const {
    return name_;
}
