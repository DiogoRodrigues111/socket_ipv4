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

//  Standard C - ANSI
//

#include <winsock.h>
#include <WinSock2.h>
#include <stdio.h>
#include <stdlib.h>
#include <WS2tcpip.h>
#include <Windows.h>

#include "../../Inc/ipv4_inc/client.h"

#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Mswsock.lib")
#pragma comment(lib, "AdvApi32.lib")

int _Receive_init_socket()
{
	return 0;
}