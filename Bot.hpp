#ifndef BOT_HPP
#define BOT_HPP

#include "Server.hpp"

class Server;

class Bot {
    private:
        std::string _name;

    public:
        Bot();
        Bot(const Bot &copy);
        Bot& operator=(const Bot &obj);
        ~Bot();
        //getter
        std::string getName() const;
        //method
        std::string Introduction() const;

};

#endif