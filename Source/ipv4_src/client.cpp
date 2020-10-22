// Programmer: Diogo Rodrigues Roessler
// Version product : a1.0
// Descriptor: videochat ipv4
// 3rdPartys: Windows Include API, OpenCV
// Technologic used: WinSock, ipv4, p2p, and others for now
// Created: init - 20/10/2020 end - ? not yet
//

// Function
//	C API - Client
// Returns:
//	SOCKET, connect, sendRecv

//  Standard C++ - ISO
//

#include <winsock.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <Windows.h>

#include "../../Inc/ipv4_inc/client.h"

#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Mswsock.lib")
#pragma comment(lib, "AdvApi32.lib")

int CClient::__receive_init_socket()
{
	WSAStartup(MAKEWORD(2,2), &__wsaData);

	__sock_in.sin_family = AF_INET;
	__sock_in.sin_port = htons(8080);

	inet_pton(AF_INET, "127.0.0.1", &__sock_in.sin_addr);

	__socket = socket(AF_INET, SOCK_STREAM, 0);

	bool __is_connect = false;

	__std_thread __connector( [ this ] () {
		
	});

	return 0;
}