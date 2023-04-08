#include "user.h"

User::User(std::string username, std::string password) {
    this->username = username;
    this->password = password;
    this->balance = 0;
}

void User::registerUser(std::string username, std::string password) {
    // Implementation for registering a new user
}

bool User::login(std::string username, std::string password) {
    // Implementation for logging in a user
}

double User::getBalance() {
    return balance;
}

void User::setBalance(double newBalance) {
    balance = newBalance;
}
