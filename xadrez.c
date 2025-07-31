#include <stdio.h>

/// Função recursiva para mover torre
void movTorre(int casas){
    if (casas == 0)return;
    printf("Direita\n");
    movTorre(casas - 1);
}

/// função recursiva para mover bispo
void movBispo(int casas){
    if (casas == 0)return;
    printf("Cima, Direita\n");
    movBispo(casas - 1);
}

/// Função recursiva para mover rainha
void movRainha(int casas){
    if (casas == 0)return;
    printf("Esquerda\n");
    movRainha(casas - 1);
}

/// Função bispo com loops aninhados
void movBispoAni(int cima, int direita){
    printf("\nMovimento do Bispo\n");
    for(int i = 0; i < cima; i++){
        for(int j = 0; j < direita; j++){
            if (i == j){
                printf("Cima, Direita\n");
            }
        }

    }
}

/// Movimento cavalo com loops complexos
void movCavalo(){
    printf("\nMovimento do Cavalo\n");

    int movCima = 2;
    int movDireita = 1;

    int cima = 0;
    int direita = 0;

    for (int c = 0; c <= movCima; c++){
        for (int d = 0; d <= movDireita; d++){
            if (cima < movCima){
                printf("Cima\n");
                cima++;
                continue;   
            }
            if (cima == movCima && direita < movDireita){
                printf("Direita\n");
                direita++;
            }
            if (direita >= movDireita) break;
        }
        if (cima == movCima && direita == movDireita) break;
    }
   
}



int main(){

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("\nMovimento da torre:\n");
    movTorre(casasTorre);

    printf("\nMovimento do bispo:\n");
    movBispo(casasBispo);

    printf("\nMovimento da rainha:\n");
    movRainha(casasRainha);

    movCavalo();
    movBispoAni(5, 5);
    

        return 0;
}