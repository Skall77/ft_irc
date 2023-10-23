#ifndef BOT_HPP
#define BOT_HPP

#include "Server.hpp"


class Server;

class Bot {
    private:
        std::string _name;
        std::string _blue;
        std::string _green;
        std::string _reset;
        std::string _yellow;

    public:
        Bot();
        Bot(const Bot &copy);
        Bot& operator=(const Bot &obj);
        ~Bot();
        //getter
        std::string getName() const;
        //method
        std::string Introduction() const;
        std::string convertEuro(float euro, std::string s_euros) const;

};

#endif