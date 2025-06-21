#include <stdio.h>
int main()
{
 int torre = 1; //declaracao da variavel torre

 while (torre <= 5) //movimento da torre para 5 casas a direita

 
 {
    printf("casa %d a direita\n", torre);
  torre++;
 }

for (int bispo = 1; bispo <= 5; bispo++)//movimento do bispo para 5 casas encima direita
{
    printf("casa %d direita encima\n", bispo);
}
int rainha = 1; // declaração da variavel rainha
do// laco de repeticao para mover a rainha 8 casas a esquerda
{
    printf("casa %d a esquerda\n", rainha);
    rainha++;
} while (rainha <= 8);
 
    return 0;
}
