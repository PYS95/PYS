#include <stdio.h>

int main(void)
{
    int i=0;
    int j=0;
    while(i<5)
    {
        while(j<i)
        {
            printf("0");
            j++;
        }
        printf("*\n");
        i++;
        j=0;

    }
    
    return 0;
}
박영선 바보
