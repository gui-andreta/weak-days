#include <stdio.h>

void main() {

    int vcodigo;

    printf("Digite um numero de 1 a 7 e o programa te dira qual o dia da semana: ");
    scanf("%i", &vcodigo);

    if (vcodigo < 1 || vcodigo > 7)
    {
        /* code */
        printf("O numero informado nao corresponde a nenhum dia da semana!");
    }
    else if (vcodigo == 1)
    {
        /* code */
        printf("O dia da semana correspondente e -> DOMINGO");
    }
    else if (vcodigo == 2)
    {
        /* code */
        printf("O dia da semana correspondente e -> SEGUNDA-FEIRA");
    }
    else if (vcodigo == 3)
    {
        /* code */
        printf("O dia da semana correspondente e -> TERCA-FEIRA");
    }
    else if (vcodigo == 4)
    {
        /* code */
        printf("O dia da semana correspondente e -> QUARTA-FEIRA");
    }
    else if (vcodigo == 5)
    {
        /* code */
        printf("O dia da semana correspondente e -> QUINTA-FEIRA");
    }
    else if (vcodigo == 6)
    {
        /* code */
        printf("O dia da semana correspondente e -> SEXTA-FEIRA");
    }
    else if (vcodigo == 7)
    {
        /* code */
        printf("O dia da semana correspondente e -> SABADO");
    }


}
