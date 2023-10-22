#include "Server.hpp"

void Server::runBot(int const fd, std::string arguments)
{
	std::vector<std::string> options;
    std::istringstream iss(arguments);
    std::string option;
    while (iss >> option)
        options.push_back(option);
    
    if (options.size() == 0)
        _users[fd]->setSendBuff(_bot->Introduction() + "\r\n");
    options[0].erase(0, 1);
    if (options[0] == "1" || options[0] == "[1]") {
        _users[fd]->setSendBuff(getInfo() + "\r\n");
    }
    else
        _users[fd]->setSendBuff(_bot->Introduction() + "\r\n");
}

std::string Server::getInfo()
{
	std::stringstream connection_number;
    connection_number << getConnectionNumbers();

    std::string s = "You are currently using the server " + getName() + " and there is " + connection_number.str() + " users online.\n";
    std::map<int, User *>::iterator user = getUsers().begin();
    s += "Here are the current users login on the server: ";
    while (user != getUsers().end()) {
        s += user->second->getNickName() + ", ";
        user++;
    }
    s.erase(s.length() - 2);
    s  += "\n";
    std::map<std::string, Channel *>::iterator channel = getChannels().begin();
    if (channel != getChannels().end()) {
    s += " And here are the current channels opened on the server: ";
        while (channel != getChannels().end()) {
            s += channel->second->getName() + ", ";
            channel++;
    }
    s.erase(s.length() - 2);
    s  += "\n";
    }
    return s;
}