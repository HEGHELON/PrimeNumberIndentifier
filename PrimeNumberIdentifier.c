#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime(int input);

int main()
{
    //take input from user
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    getchar();

    //Give users more options to check prime or subprimes or prime counters
    printf("Press 1 for prime identifier\nPress 2 to print all subprime numbers\nPress 3 for Sub prime counter\n");
    int userOption;
    scanf("%d", &userOption);
    getchar();
   // if(userOption)



}

//prime function
bool prime(int input)
{
    for(int i = sqrt(input); i > 1; i--){
        if (input % i == 0){
            return false;
        }
    }
    return true;
}

/*
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool  prime(int input);
int main()
{
    printf("Please enter your number here: ");
    int number ;
    scanf("%d", &number);

//   if(prime(number)){
//     printf("%d is a prime number\n", number);
//   }else{
//     printf("%d is a not prime number\n", number);
//   };
    int primeCount = 0;
  for(int i = number; i > 1; i--){
     if(prime(i)){
        primeCount++;

    printf("%d is a prime number\n", i);
  }
  }
  printf("There are %d prime numbers\n", primeCount );
  
   return 0;
      //printf("%d, is not a prime number,\n", input);
    
}

bool prime(int input){
    
    for ( int i = sqrt(input); i > 1 ; i--){
        if(input % i == 0){
            return false;
        }  
         
    }
        return true;
   
}
 git config --global user.email "humphreyeghelonohor@yahoo.com"
  git config --global user.name "Humphrey Eghelonohor"
*/