#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#define MAX_BUF 500
char senmsg[]="www.google.com";
char recmsg[MAX_BUF];

int main(int argc,char** argv)
{
	int clientSocket;
	int returnStatus;
	struct sockaddr_in server={0};
	int len=0;
	if(argc!=3)
	{
		fprintf(stderr,"Please provide <address of server> for communication\n");
		exit(255);
	}
	clientSocket=socket(AF_INET,SOCK_DGRAM,0);
	if(clientSocket<0)
	{
		perror("Socket :");
		exit(255);
	}
	len=sizeof(server);
	server.sin_family=AF_INET;
	server.sin_addr.s_addr=inet_addr(argv[1]);
	server.sin_port=htons(atoi(argv[2]));
	returnStatus=sendto(clientSocket,senmsg,strlen(senmsg)+1,0,(struct sockaddr*)&server,sizeof(server));
	if(returnStatus==-1)
	{
		fprintf(stderr,"Unable to send message\n");
		close(clientSocket);
		exit(255);
	}
	printf("send to and waiting\n");
	returnStatus=recvfrom(clientSocket,recmsg,MAX_BUF,0,(struct sockaddr*)&server,&len);
	if(returnStatus==-1)
	{
		fprintf(stderr,"Uanble to recieve meassage\n");
		close(clientSocket);
		exit(255);
	}
	printf("Hello I'm recieve\n");
	printf("%s",recmsg);
	close(clientSocket);
	return 0;
}
