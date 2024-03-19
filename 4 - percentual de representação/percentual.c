#include <stdio.h>
#include <stdlib.h>

float calculoPercentual(float soma, float estado)
{
    float percentual;

    percentual = (estado / soma) * 100;

    return percentual;
}

int main()
{
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;
    float total;

    total = sp + rj + mg + es + outros;
    printf("%f", total);

    printf("O percentual de participacao de SP foi de %.2f%% \n", calculoPercentual(total, sp));
    printf("O percentual de participacao de RJ foi de %.2f%% \n", calculoPercentual(total, rj));
    printf("O percentual de participacao de MG foi de %.2f%% \n", calculoPercentual(total, mg));
    printf("O percentual de participacao de ES foi de %.2f%% \n", calculoPercentual(total, es));
    printf("O percentual de participacao dos Outros estados foi de %.2f%% \n", calculoPercentual(total, outros));

    system("pause");
    return 0;
}
