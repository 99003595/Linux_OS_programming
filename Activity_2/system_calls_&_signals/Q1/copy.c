#include "copy.h"

bool copyfile()
{
	int pd,pd1,nbytes, flag;
	fd=open("p1.txt",O_RDONLY);
	fd1=open("p2.txt",O_WRONLY|O_CREAT, 0666);
	if(pd<0 || pd1<0)
	{
		perror("open");
		exit(1);
	}
	int maxlen=128;
	char buf[maxlen];
	nbytes=read(pd,buf,maxlen);
	if(nbytes<0)
	{
		perror("read");
		exit(2);
	}
	flag = write(pd1,buf,nbytes);
	close(pd);
	close(pd1);
	if(flag)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
		

