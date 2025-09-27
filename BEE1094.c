/*1036 - 118857 - Luiz Paulo Santana Dias  
1074 - 118968 - Franciane Marques Vieira 
2311 - 119221 -Debora Ayumi Tanowe Morel Aguiar 
1094 - 118030 - Kayky Fernandes Garcia
2414 - 118954 - Luis Otávio Bonometti Santana */

#include <stdio.h>
#include <ctype.h>

int main(){
    int  num, numerototal, quantia, numerorato, numerosapo, numerocoelho, i;
    char letra;
    float cuei, naolavape, ratatoui;

    scanf("%d",&quantia);
    numerorato = 0;
    numerocoelho = 0;
    numerosapo = 0;
    numerototal = 0;

    while (1)
    {
        for ( i = 0; i < quantia; i++)
        {
            scanf("%d %c",&num,&letra);
            letra = toupper(letra);

            if (letra == 'C')
            {   
                numerocoelho += num;

            }else if (letra == 'S'){
                
                numerosapo += num;
            }else if (letra == 'R'){

                numerorato += num;
            }
            
            
        }break;
        
    }
    numerototal = 0;
    cuei = 0;
    naolavape = 0;
    ratatoui = 0;
    numerototal = numerocoelho + numerorato + numerosapo;
    printf("Total: %d cobaias\n",numerototal);
    printf("Total de coelhos: %d\n",numerocoelho);
    printf("Total de ratos: %d\n",numerorato);
    printf("Total de sapos: %d\n",numerosapo);
 
    cuei = ((float) numerocoelho / numerototal) * 100 ;
    ratatoui = ((float)numerorato / numerototal) * 100 ;
    naolavape = ((float)numerosapo / numerototal) * 100;

    printf("Percentual de coelhos: %.2f %%\n",cuei);
    printf("Percentual de ratos: %.2f %%\n",ratatoui);
    printf("Percentual de sapos: %.2f %%\n",naolavape);
    
    return 0;
}
