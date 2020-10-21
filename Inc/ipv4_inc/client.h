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

#include <thread>

#define BUFFERLEN		512
#define DEFAULT_PORT	"27015"	// Defined for Microsoft
								// DEFAULT PORT

// Variables

int __result;
struct sockaddr_in __sock_in;
WSADATA __wsaData;
SOCKET __socket;

using __std_thread = std::thread;

// Routines

class CClient {
public : int __receive_init_socket();

};
