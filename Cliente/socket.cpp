/**
  @file socket.cpp
  @author Sloan Kelly
  @brief Definicion de las funciones del socket cliente, modificado y adaptado por Sebastian Moya
  @version 1.1
  @date 03/03/20
  */
#include "socket.hpp"
/**
 * @brief Socket::Socket clase contructora del socket, que inicializa los atributos sin retornar un estado.
 */
Socket::Socket()
{
    sockt = socket(AF_INET, SOCK_STREAM, 0);
    if (sockt == -1)
    {

    }

    //	Creacion del hint
    int port = 54000;
    string ipAddress = "127.0.0.1";
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);
    conectar(sockt,hint);
}
/**
 * @brief Socket::crear clase encargada de la creacion del socket con la devolucion de un estado.
 * @return estado que demuestra si la creacion fue exitosa
 */
int Socket::crear(){
    if (sockt == -1)
    {
      return -1;
    }

    //	Creacion de la estructura del hint
    int port = 54000;
    string ipAddress = "127.0.0.1";
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);
    conectar(sockt,hint);
    return sockt;
}
/**
 * @brief Socket::conectar funcion encargada de establecer la conexion con el sevidor
 * @param _sockt recibe al cliente
 * @param hint hint de creado
 * @return  estado de la conexion
 */
int Socket::conectar(int _sockt, sockaddr_in hint){
    int connectRes = connect(_sockt, (sockaddr*)&hint, sizeof(hint));
    if (connectRes == -1)
    {
        return 1;
    }
    return 0;
}
/**
 * @brief Socket::transmitir funcion de enviar y recibir los mensaje del servidor
 * @param dato_enviar los vertices de donde se parte y donde se desea llegar en el grafo
 * @return la ruta de mas corta entre dos vertices.
 */
string Socket::transmitir(string dato_enviar){
    int enviado = send(sockt,dato_enviar.c_str(),sizeof (dato_enviar)+1,0);
    //en caso de no poder enviar el mensaje
    if(enviado==-1){
        cout<<"No se pudo enviar los datos"<<endl;
    }
    char buffer[4096];
    memset(buffer,0,4096);
    int bytesReceived = recv(sockt, buffer, 4096, 0);

    //En caso de que el mensaje no llegue
    if (bytesReceived == -1)
    {
        cout << "Se ha perdido el mensaje"<<endl;
    }
    return string(buffer);
}
/**
 * @brief Socket::cerrarsocket funcion encargada de eliminar el socket.
 */
void Socket::cerrarsocket(){
    close(sockt);
}
