#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	unsigned int r;
	unsigned int g;
	unsigned int b;
}pixel;
int main(int argc,char** argv)
{
	FILE *f=fopen("test.bin","w+");
	if(f==NULL)
	{
		fprintf(stderr,"Unable to open file\n");
		exit(255);
	}
	pixel pixel_array[50];
	int i;
	int return_value;
	for(i=0;i<50;++i)
	{
		pixel_array[i].r=0;
		pixel_array[i].g=i;
		pixel_array[i].b=0;
	}
	pixel read_pixel[50];
	return_value=fwrite(pixel_array,sizeof(pixel),50,f);
	printf("%d objects writen sucessufly\n",return_value);
	rewind(f);
	return_value=fread(read_pixel,sizeof(pixel),50,f);
	printf("%d object read sucessful \n",return_value);
	for(i=0;i<50;++i)
	{
		printf("%u %u %u\n",read_pixel[i].r,read_pixel[i].g,read_pixel[i].b);
	}
	printf("\n");
	fclose(f);
	return 0;
}
