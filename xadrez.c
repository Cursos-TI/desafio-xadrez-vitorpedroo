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

    ///Movimento do Cavalo.
    
    int movCavaloBaixo = 2;
    int movCavaloEsquerda = 1;
    
    printf("\nMovimento do Cavalo (em 'L': 2 casas para baixo, 1 para a esquerda):\n");

    for(int baixo = 0; baixo < movCavaloBaixo; baixo++){
        printf("Baixo\n");
        
        int esquerda = 0;
        while(esquerda < movCavaloEsquerda && baixo == movCavaloBaixo - 1){///somente na última iteração do for
            printf("Esquerda\n");
            esquerda++;
        }
    
    
    }




    
 






    return 0;
}