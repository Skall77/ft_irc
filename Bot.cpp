#include "Bot.hpp"
#include "Server.hpp"

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