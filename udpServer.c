#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

#define MAX_BUF 500

char msg[]="Hello Sachendra kaise ho\n";
char recmsg[MAX_BUF];
int main(int argc,char** argv)
{
	int serverSocket=0;
	struct sockaddr_in udpServer={0},udpClient1={0},udpClient2={0};
	int returnStatus=0;
	int lenClient,lenServer;
	int port;
	if(argc!=3)
	{
		fprintf(stderr,"Please Provide <adddress> and <port number> for communication\n");
		exit(255);
	}
	serverSocket=socket(AF_INET,SOCK_DGRAM,0);
	if(serverSocket<0)
	{
		perror("Socket :");
		exit(1);
	}
	port=atoi(argv[2]);
	lenClient=sizeof(udpClient);
	udpServer.sin_family=AF_INET;
	udpServer.sin_addr.s_addr=inet_addr(argv[1]);
	udpServer.sin_port=htons(port);
	returnStatus=bind(serverSocket,(struct sockaddr *)&udpServer,sizeof(udpServer));
	if(returnStatus!=0)
	{
		perror("Bind :");
		exit(1);
	}
	while(1)
	{
		returnStatus=recvfrom(serverSocket,recmsg,MAX_BUF,0,(struct sockaddr*)&udpClient,&lenClient);
		if(returnStatus==-1)
		{
			fprintf(stderr,"Uanble to recieve message\n");
			exit(255);
		}
		returnStatus=sendto(serverSocket,msg,strlen(msg)+1,0,(struct sockaddr*)&udpClient,sizeof(udpClient));
		if(returnStatus==-1)
		{
			fprintf(stderr,"Unable to send message to client\n");
			exit(1);
		}
		printf("%d bytes send to the client\n",returnStatus);
	}
	close(serverSocket);
	return 0;
}
