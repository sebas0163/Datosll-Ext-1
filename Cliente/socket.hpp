/**
  @file socket.hpp
  @author Sloan Kelly
  @date 02/03/20
  @version 1.0
  @brief Plantilla de la clase socket modificada y adaptada por sebastian
  */
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
/**
 * @brief The Socket class clase encargada de manejar el socket para establecer la comunicacion con el servidor
 */
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
