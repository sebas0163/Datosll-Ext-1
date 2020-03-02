#ifndef SOCKET_H
#define SOCKET_H
#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>

using namespace std;
class Socket
{
public:
    Socket();
    int sockt;
    int conectar(int, sockaddr_in);
    string transmitir(string);
    int crear();
    void cerrarsocket();
};

#endif // SOCKET_H
