
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
intfd;
charbuf[100];
fd=open("/tmp/myfifo",O_RDONLY);
read(fd,buf,100);
printf("Writer:%s\n",buf);
close(fd);
return 0;
}