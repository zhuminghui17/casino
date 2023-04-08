#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string username;
    std::string password;
    double balance;
public:
    User(std::string username, std::string password);
    void registerUser(std::string username, std::string password);
    bool login(std::string username, std::string password);
    double getBalance();
    void setBalance(double newBalance);
};

#endif
