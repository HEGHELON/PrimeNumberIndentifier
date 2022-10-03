#include <stdio.h>
 

int main()
{
    char arr[200];
    printf("Enter a string\n");

    int wordCount = 0 , charCount = 0, i;
    scanf("%199[^\n]s", arr);

    for ( i = 0; (arr[i] != '\0') ; i++)
    { 
        ++charCount;
        if( arr[i] != ' ' && arr[ i + 1] == ' ')
        {
            ++wordCount;
        }
    } 
    printf("\a The numbers of words is %d and characters is %d \n", wordCount + 1, charCount);
    return 0;
}