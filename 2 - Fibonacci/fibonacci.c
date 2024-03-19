#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função que calcula a sequência fibonacci enquanto busca o valor informado
int buscaFibonacci (int numero)
{
    int f1 = 0;
    int f2 = 1;
    int f3 = 0;

    if ((numero == f1) || (numero == f2))
    {
        return 1;
    }
    else
    {
        do
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;

            if (numero == f3)
            {
                return 1;
            }
        }
        while(numero > f3);
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL, " ");

    int num, resposta;

    printf("Digite um numero inteiro:\n");
    scanf ("%d", &num);

    //chamando a função apos a leitura do numero
    resposta = buscaFibonacci(num);

    //testando se pertence a sequencia
    switch(resposta)
    {
        case 0:
            printf ("\n O numero %d nao pertence a sequencia Fibonacci.\n", num);
            break;
        case 1:
            printf ("\n O numero %d pertence a sequencia Fibonacci.\n", num);
            break;
        default:
            printf("erro");
            break;
    }
    system("pause");
    return 0;
}
