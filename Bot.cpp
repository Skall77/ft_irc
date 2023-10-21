#include "Bot.hpp"


Bot::Bot(): _name("IRCSavvy")
{
}

Bot::Bot(const Bot &copy)
{
    *this = copy;
}

Bot& Bot::operator=(const Bot &obj)
{
    _name = obj._name;
    return (*this);
}

Bot::~Bot()
{
}

std::string Bot::getName() const { return _name; }

std::string Bot::Introduction() const
{
    std::string s = "I, my name is IRCSavvy and i'm your friendly neighborhood irc bot. What can i do for you ?\n";
    s += "You can call me with /msg IRCSavvy [number choice]! Here is what i can do for your:\n";
    s += "[1] Server Information. I can tell you all i know about this server!\n";
    s += "[2] Random trivia. Do you want some joke or maybe an inspiring quote ?\n";
    s += "[3] Euro converter. I love money, do you ? See how much dollars you can get for your euros.\n";
    s += "[4] + [NumberOfFace] Dice Roll. Always usefull for games or crucial life decision-making.";

    return s;
}

std::string Bot::getInfo(Server &server) const
{
    std::string s = "You are currently using the server " + server.getName() + " and there is " + std::to_string(server.getConnectionNumbers()) + " users online.\n";
    std::map<int, User *>::iterator user = server.getUsers().begin();
    s += "Here are the current users login on the server: ";
    while (user != server.getUsers().end()) {
        s += user->second->getNickName() + ", ";
        user++;
    }
    s.erase(s.length() - 2);
    s  += "\n";
    std::map<std::string, Channel *>::iterator channel = server.getChannels().begin();
    if (channel != server.getChannels().end()) {
    s += " And here are the current channels opened on the server: ";
    while (channel != server.getChannels().end()) {
        s += channel->second->getName() + ", ";
        channel++;
    }
    s.erase(s.length() - 2);
    s  += "\n";
    }
    return s;
}
