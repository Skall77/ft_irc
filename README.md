## ft_irc
Server IRC project for 42 in **C++98**, Best used with the client *IRSSI* or *nc*

# usage
```bash
make
./ircserv port password
```

# commands
- PASS
- NICK
- USER
- PING
- PRIVMSG
- NOTICE
- JOIN
- KICK
- MODE
   - +-k
   - +-i
   - +-t
   - +-l
   - +-o
- TOPIC
- INVITE
- OPER
    - OPER is hardcoded right now, it's not really elegant, the best way to do it without framework or external library would probably be to use an .env file. Anyway the only Operator in the server is "Harry" with the password "Alohomora"
- PART
- QUIT
- GET
- SEND
    - Since GET and SEND are not recognise by *IRSSI* you have to /quote GET and /quote SEND to use them. (Those commands allow a client to send a file to the server and for another client to get it)

