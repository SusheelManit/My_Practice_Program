#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netdb.h>
#include <error.h>
#include <string.h>

#define BUFFER 1000

int main(int argc,char** argv)
{
	int sockfd,returnValue,port;
	char msg[BUFFER];
	if(argc!=3)
	{
		fprintf(stderr,"Please supply server address of port no");
		exit(1);
	}
	sockfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	if(sockfd==-1)
	{
		perror("unable to create socket\n");
		exit(1);
	}
	struct sockaddr_in server;
	memset(&server,0,sizeof(server));
	server.sin_family=AF_INET;
	inet_addr(argv[1],&server.sin_addr.s_addr);
	server.sin_port=htons(argv[2]);
	returnValue=connect(sockfd,(struct sockaddr *)&server,sizeof(server));
	if(returnValue)
	fprintf(stderr,"Connect suceesfully\n");
	close(sockfd);
	return 0;
}
