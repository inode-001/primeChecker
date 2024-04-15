#include <math.h>
#include <stdio.h>

int main(){
    int number;
    printf("Enter number to check if its a prime number : ");
    
    scanf("%d",&number);
    
    if (number == 2 || number % 2 == 0){
          printf("if ===>Number is not a prime number\n");

    }else if (number < 2){
        printf("else if ===> Number is not a prime number\n");

    }else{
      
        for(int i=2;i<=sqrt(number);i++){
            if(number % i == 0){
                printf("else1 ==> Number is not a prime  number\n");
                break;

            }

        }
        printf("Number is a primeNumber\n");
    }

}