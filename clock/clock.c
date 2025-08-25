//Clock

#include <stdio.h>
#include <time.h>
#include <unistd.h>

time_t now;
int main(void)
{
    while(1)
    {
        time(&now);
        printf("%s\r", ctime(&now));
        fflush(stdout);
        sleep(1);
     }
    
    
}