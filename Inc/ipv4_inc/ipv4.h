// Programmer: Diogo Rodrigues Roessler
// Version product : a1.0
// Descriptor: videochat ipv4
// 3rdPartys: Windows Include API, OpenCV
// Technologic used: ipv4, p2p, and others for now
// Created: init - 20/10/2020 end - ? not yet
//

// Header ipv4:
//  Data data structure's

#include <iostream>

// socket include
#include <iphlpapi.h>
#include <WS2tcpip.h>
#include <winsock.h>
#include <WinSock2.h>

#define DEFAULT_MAX_BUFFER  512

// Default variable
//

WSADATA wsaData;
SOCKET socket;
int iResult;
char buflen[DEFAULT_MAX_BUFFER];

// User routines
//