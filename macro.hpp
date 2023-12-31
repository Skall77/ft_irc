#ifndef MACRO_HPP
#define MACRO_HPP

#define ERR_PASSWDMISMATCH(user)				(":localhost 464 " + user + " :Password incorrect.\r\n")
#define ERR_NEEDMOREPARAMS(user, cmd)			(":localhost 461 " + user + " " + cmd + " :Not enough parameters.\r\n")
#define ERR_ALREADYREGISTRED(user)				(":localhost 462 " + user + " :Unauthorized command (already registered).\r\n")
#define ERR_NONICKNAMEGIVEN(user)				(":localhost 431 " + user + " :No nickname given.\r\n")
#define ERR_ERRONEUSNICKNAME(user, nickname)	(":localhost 432 " + user + " " + nickname + " :Erroneus nickname.\r\n")
#define ERR_NICKNAMEINUSE(user, nickname)		(":localhost 433 " + user + " " + nickname +  ":Nickname is already in use.\r\n")
#define RPL_WELCOME(nick, user, host)			(":localhost 001 " + nick + " :Welcome to the Internet Relay Network "+ nick + "!" + user + "@" + host + "\r\n")
#define RPL_YOURHOST(user, serv, ver)			(":localhost 002 " + user + " :Your host is " + serv +  ", running version " + ver + "\r\n")
#define RPL_CREATED(user, date)					(":localhost 003 " + user + " :This server was created " + date +  "\r\n")
#define RPL_MYINFO(user, serv, ver, u_m, c_m)   (":localhost 004 " + user + " :" + serv + " " + ver + " " + u_m + " " + c_m + "\r\n") 
#define RPL_MOTDSTART(user, serv)				(":localhost 375 " + user + " :-" + serv +  " Message of the day - \r\n")
#define ERR_NOMOTD(user)						(":localhost 422 " + user + " :MOTD File is missing \r\n")
#define RPL_MOTD(user, line)					(":localhost 372 " + user + " :-" + line +  "\r\n")
#define RPL_ENDOFMOTD(user)						(":localhost 376 " + user + " End of MOTD command\r\n")
#define ERR_UNKNOWNCOMMAND(user, command)		(":localhost 421 " + user + " " + command + " :Unknown command \r\n")
#define ERR_BADCHANNELKEY(user, channel)		(":localhost 475 " + user + " " + channel + " :Cannot join channel (+k) \r\n")
#define	ERR_CHANNELISFULL(user, channel)		(":localhost 471 " + user + " " + channel + " :Cannot join channel (+l) \r\n")
#define RPL_TOPIC(user, channel, topic)			(":localhost 332 " + user + " #" + channel + " :" + topic + "\r\n")
#define	RPL_NAMREPLY(user, channel, nick_list)	(":localhost 353 " + user + " = #" + channel + " :" + nick_list + "\r\n")
#define RPL_ENDOFNAMES(user, channel)			(":localhost 366 " + user + " #" + channel + " :End of NAMES list\r\n")
#define	ERR_NOTEXTTOSEND(user)					(":localhost 412 " + user + " :No text to send\r\n")
#define ERR_NORECIPIENT(user, command)			(":localhost 411 " + user + " :No recipient given " + command + "\r\n")
#define ERR_NOSUCHNICK(user, recipient)			(":localhost 401 " + user + " " +  recipient + " :No such nick/channel\r\n")
#define ERR_NOSUCHCHANNEL(user, channel)		(":localhost 403 " + user + " #" +  channel + " :No such channel\r\n")
#define ERR_NOTONCHANNEL(user, channel)			(":localhost 442 " + user + " #" +  channel + " :You're not on that channel\r\n")
#define ERR_USERNOTINCHANNEL(user, chan, kick)  (":localhost 441 " + user + " " +  kick + " #" + chan + " :They aren't on that channel\r\n")
#define ERR_CHANOPRIVSNEEDED(user, channel)		(":localhost 482 " + user + " #" +  channel + " :You're not channel operator\r\n")
#define RPL_INVITING(user, channel, nick)		(":localhost 341 " + user + " " + nick + " #" +  channel + "\r\n")
#define ERR_USERONCHANNEL(user, nick, channel)	(":localhost 443 " + user + " " + nick + " #" + channel +  " :is already on channel\r\n")
#define RPL_TOPIC(user, channel, topic)			(":localhost 332 " + user + " #" + channel +  " :" + topic + "\r\n")
#define RPL_NOTOPIC(user, channel)				(":localhost 331 " + user + " #" + channel +  " :no topic is set\r\n")
#define RPL_CHANNELMODEIS(user, channel, mode)  (":localhost 324 " + user + " #" + channel +  " " + mode + "\r\n")
#define RPL_MODE(channel, mode)					(":localhost MODE #" + channel + " " + mode + "\r\n")
#define RPL_MODE_PARAM(channel, mode, param)	(":localhost MODE #" + channel + " " + mode + " " + param + "\r\n")
#define RPL_MODE_USER(user, mode)				(":localhost MODE " + user + " " + mode + "\r\n")
#define ERR_INVALIDMODEPARAM(u, ch, mode, key)  (":localhost 696 " + u + " #" + ch +  " " + mode + " " + key + " :Only alphanum key\r\n")
#define ERR_INVITEONLYCHAN(user, channel)		(":localhost 473 " + user + " #" + channel +  " :Cannot join channel (+i)\r\n")
#define ERR_USERSDONTMATCH(user)				(":localhost 502 " + user + " :Cannot change mode for other users\r\n")
#define RPL_UMODEIS(user, mode)					(":localhost 221 " + user +  " " + mode + "\r\n")
#define ERR_UMODEUNKNOWNFLAG(user)				(":localhost 501 " + user + " :Unknown MODE flag\r\n")
#define ERR_NOOPERHOST(user)					(":localhost 491 " + user + " :No O-lines for your host\r\n")
#define RPL_YOUREOPER(user)						(":localhost 381 " + user + " :You are now an IRC operator\r\n")
#define ERR_FILEERROR(user, file_op, file)      (":localhost 424 " + user + " :File error doing " + file_op + " on " + file + "\r\n")

#endif