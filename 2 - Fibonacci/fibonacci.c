#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função recursiva que calcula a sequência fibonacci enquanto busca o valor informado
int buscaFibonacci (int x)
{
    int f1 = 0;
    int f2 = 1;
    int f3;

    if ((x == f1) || (x == f2))
    {
        return 1;
    }    
    else
    {
        while (x >= f3)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        if (x == f3)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num, resposta;

    printf("Digite um número inteiro:\n");
    scanf ("%d", &num);

    //chamando a função apos a leitura do numero
    resposta=buscaFibonacci(num);

    //testando se pertence a sequencia
    if (resposta == 1)
        printf ("\n O número %d pertence à sequência Fibonacci", num);
    else
        printf ("\n O número %d não pertence à sequência Fibonacci", num);
        
    return 0;
}
