#include <stdio.h>

int main()
{
    int i = 0;
    while(i<= 10)
    {
        int k = i;
        while(k>=0)
        {
            printf("%d ",k);
            k--;
        }
        printf("\n");
        i++;
    }
}