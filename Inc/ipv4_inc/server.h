// Programmer: Diogo Rodrigues Roessler
// Version product : a1.0
// Descriptor: videochat ipv4
// 3rdPartys: Windows Include API, OpenCV
// Technologic used: WinSock, ipv4, p2p, and others for now
// Created: init - 20/10/2020 end - ? not yet
//

// Function
//	C API - Server
// Returns:
//	SOCKET, Setseckopt, bind, listen, accept, send/recv -> client/Server

//  Standard C++ - ISO
//

#include <winsock.h>
#include <WinSock2.h>
#include <stdio.h>
#include <stdlib.h>
#include <WS2tcpip.h>
#include <Windows.h>