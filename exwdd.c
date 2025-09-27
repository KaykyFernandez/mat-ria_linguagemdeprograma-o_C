#include <stdio.h>

int main()
{
    float Valor;
    int cont_positv;

    cont_positv = 0;
    do
    {
      scanf("%f", &Valor);
        if (Valor > 0)
        {
            cont_positv++;
        }
    } while (Valor != 0);
    
    printf("%d valores positivo\n", cont_positv);

    return 0;
}
