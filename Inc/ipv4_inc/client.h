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

#define BUFFERLEN		512
#define DEFAULT_PORT	"27015"	// Defined for Microsoft
								// DEFAULT PORT

// Variables

int _Result;



// Routines

int _Receive_init_socket();