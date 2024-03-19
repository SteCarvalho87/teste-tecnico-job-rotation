#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

    char palavra[80];
    int i, j, tamanho;
    char troca;

    printf ("Digite uma palavra qualquer:\n");
    fgets(palavra, sizeof(palavra),stdin);
    tamanho = strlen(palavra);

    for(i=0, j=tamanho-1; i < tamanho/2; i++, j--)
    {
        troca = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = troca;
    }
    printf ("\n A palavra invertida fica assim: %s\n", palavra);

    system("pause");
    return 0;
}
