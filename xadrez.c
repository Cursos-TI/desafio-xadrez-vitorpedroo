#include <stdio.h>

int main(){

    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;

    ///Movimento da Torre ultilizando for.
    printf("Movimento da Torre (5 casa para a direita):\n");
    for(int i = 1; i <= movTorre; i++){
        printf("Direita\n");
    }

    ///Movimento do Bispo ultilizando while.
    printf("Movimento do Bispo (5 casas na diagonal):\n");
    int i = 1;
    while(i <= movBispo){
        printf("Cima, Direita\n");
        i++;
    }

    ///Movimento da Rainha ultilizando do-while.
    printf("Movimento da Rainha (8 casas na diagonal):\n");
    int j = 1;
    do{
        printf("Esquerda\n");
        j++;
    }while (j <= movRainha);

    
 






    return 0;
}