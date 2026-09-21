#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

void start_server(int port){
  int server_socket = socket(AF_INET, SOCK_STREAM, 0);
  sockaddr_in server_address;
  server_address.sin_family = AF_INET;
  server_address.sin_port = htons(port);

  server_address.sin_addr.s_addr =  INADDR_ANY; // localhost
  bind(server_socket, (struct sockaddr*)&server_address, sizeof(server_address));
  std::cout << "[!] Server is listening on PORT: " << port << '\n';
  listen(server_socket, 5);

  char buffer[1024] = {0};
  int client_socket = accept(server_socket, nullptr, nullptr);

  recv(client_socket, buffer, sizeof(buffer), 0);
  std::cout << "Message from client: \n" << buffer << '\n';
  close(server_socket);
}

int main(){
  const size_t PORT = 8080;
  start_server(PORT);
}
