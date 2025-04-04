#pragma once

struct sockaddr;

class NetworkInterface
{
public:
	static int CreateSocket(int af, int type, int protocol);
	static int Connect(int socket, sockaddr* socketAddress, int length);
	static int Bind(int socket, sockaddr* socketAddress, int length);
	static int Close(int socket);
	static int Accept(int socketFd, struct sockaddr* address, int* length);
	static int Send(int socketFd, const char* buffer, size_t size, int flags);
	static int SendTo(int socketFd, const char* buffer, size_t size, int flags, sockaddr* sourceAddress, int addressLength);
	static int Receive(int socketFd, char* buffer, size_t size, int flags);
	static int Listen(int socketFd, int backlog);
	static int ReceiveFrom(int socketFd, char* buffer, size_t size, int flags, sockaddr* sourceAddress, int* addressLength);
};