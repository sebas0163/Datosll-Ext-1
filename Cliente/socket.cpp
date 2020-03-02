#include "socket.hpp"

Socket::Socket()
{
    sockt = socket(AF_INET, SOCK_STREAM, 0);
    if (sockt == -1)
    {

    }

    //	Create a hint structure for the server we're connecting with
    int port = 54000;
    string ipAddress = "127.0.0.1";
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);
    conectar(sockt,hint);
}
int Socket::crear(){
    if (sockt == -1)
    {
      return -1;
    }

    //	Create a hint structure for the server we're connecting with
    int port = 54000;
    string ipAddress = "127.0.0.1";
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);
    conectar(sockt,hint);
    return sockt;
}
int Socket::conectar(int _sockt, sockaddr_in hint){
    int connectRes = connect(_sockt, (sockaddr*)&hint, sizeof(hint));
    if (connectRes == -1)
    {
        return 1;
    }
    return 0;
}
string Socket::transmitir(string dato_enviar){
    int enviado = send(sockt,dato_enviar.c_str(),sizeof (dato_enviar)+1,0);
    if(enviado==-1){
        cout<<"No se pudo enviar los datos"<<endl;
    }
    char buffer[4096];
    memset(buffer,0,4096);
    int bytesReceived = recv(sockt, buffer, 4096, 0);
    if (bytesReceived == -1)
    {
        cout << "Se ha perdido el mensaje"<<endl;
    }
    return string(buffer);
}
void Socket::cerrarsocket(){
    close(sockt);
}
