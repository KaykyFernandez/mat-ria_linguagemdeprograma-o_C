#include <stdio.h>

int main()
{

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);
    if ((num % 3 == 0) && (num % 5 == 0)){
        printf("FizzBuzz");
    }else if (num % 3 == 0){
        printf("Fizz\n");
    }else if (num % 5 == 0){
        printf("Buzz\n");
    }else{
        printf("%d\n", num);
    }
}