#include "Bot.hpp"
#include "Server.hpp"

Bot::Bot(): _name("IRCSavvy"), _blue("\033[34m"), _green("\033[32m"), _reset("\033[0m"), _yellow("\033[33m")
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

    std::string s = _blue + "I, my name is IRCSavvy and i'm your friendly neighborhood irc bot.\n" + _reset;
    s += "You can call me with " + _green + "/msg IRCSavvy [number choice]!" + _reset + " Here is what i can do for your:\n";
    s += _blue + "[1]" + _reset + " Server Information. I can tell you all i know about this server!\n";
    s += _blue + "[2]" + _reset + " Random trivia. Do you want some joke or maybe an inspiring quote ?\n";
    s += _blue + "[3] + [Euros]" + _reset + " Euro converter. I love money, do you ? See how much dollars you can get for your euros.\n";
    s += _blue + "[4] + [NumberofRoll] + [NumberOfFace]" + _reset + " Dice Roll. Always usefull for games or crucial life decision-making.";

    return s;
}

std::string Bot::convertEuro(float euro, std::string s_euros) const
{
    float dollar = euro * 1.06;
    float yen = euro * 159.07;
    float pound_sterling = euro * 0.87;
    float franc_swiss = euro * 0.95;
    float dollar_canadian = euro * 1.46;

    std::string s_dollar, s_yen, s_pound, s_franc, s_canadian;
    std::stringstream ss;

    ss << dollar;
    s_dollar = ss.str();
    ss.str("");
    ss << yen;
    s_yen = ss.str();
    ss.str("");
    ss << pound_sterling;
    s_pound = ss.str();
    ss.str("");
    ss << franc_swiss;
    s_franc = ss.str();
    ss.str("");
    ss << dollar_canadian;
    s_canadian = ss.str();

    std::string s = _blue + "Here is your " + s_euros + " Euros, converted in the most popular currency in the world\n" + _reset;
    s += _yellow + "US Dollars: " + _reset + s_dollar + "\n";
    s += _yellow + "Japenese Yens: " + _reset + s_yen + "\n";
    s += _yellow + "Pound Sterlings: " + _reset + s_pound + "\n";
    s += _yellow + "Swiss Francs: " + _reset + s_franc + "\n";
    s += _yellow + "Canadian Dollars: " + _reset + s_canadian;

    return s;
}