#include <stdio.h>

/* copy input to output */
int main()
{
    double nc = 0;
    while( getchar() != EOF){
            printf("%s\n", "nc");
            ++nc;
            if(getchar() == '\n'){
                break;
            }
    }
    printf("%.0f\n", nc);
    return 0;
}