#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
intfd;
mkfifo("/tmp/myfifo",0666);
fd=open("/tmp/myfifo",O_WRONLY);
write(fd,"hi from writer",14);
close(fd);
unlink("/tmp/myfifo");
close(fd);
unlink("/tmp/myfifo");
return 0;
}