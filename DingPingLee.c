#include <stdio.h>

int main(){
    for (int i = 0; i < 100; i++)
    {
       if (i%3 == 0){
        printf("Ding,\n");
       }else if (i%5 == 0){
         printf("Ping,\n");
       }else{ 
        printf("%d,\n",i);
       }
    }

    printf("Lee\n");
    return 0;
}

