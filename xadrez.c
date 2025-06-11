#include <stdio.h>

int main () {
    int opcao;
    int numero, movimentopeca;

    printf("Movimentacao de pecas de Xadrez!!\n");
    printf("Escolha uma peca que para mover.\n");
    printf("1. Torre\n");
    printf("2. Rainha\n");
    printf("3. Bispo\n");
    printf("4. Cavalo\n");
    printf("Selecione uma peca de acordo com o numero: \n");
    scanf("%d", &opcao);                //Menu de escolha de peça para mover

    if(opcao ==1){

        printf("Escolha para qual direcao a peca ira se mover: \n");
        printf("1. Direta\n");
        printf("2. Cima\n");
        printf("3. Baixo\n");
        printf("4. Esquerda\n");
        printf("Selecione para onde mover a peca: \n");
        scanf("%d", &numero);           //Seleção de qual movimento será feito com a torre

    switch (numero) {
        case 1:
            printf("Voce escolheu mover a torre para a Direta\n");
                while (numero == 1 && movimentopeca < 5) {
                    printf("Direita\n");
                    movimentopeca++;
                }
            break;
        case 2:
            printf("Voce escolheu mover a torre para Cima\n");
                while (numero == 2 && movimentopeca < 5) {
                    printf("Cima\n");
                    movimentopeca++;
                }

            break;
        case 3:
            printf("Voce escolheu mover a torre para baixo\n");
                while (numero == 3 && movimentopeca < 5) {
                    printf("baixo\n");
                    movimentopeca++;
                }
            break;

        case 4:
            printf("Voce escolheu mover a torre para esquerda\n");
                while (numero == 4 && movimentopeca < 5) {
                    printf("esquerda\n");
                    movimentopeca++;
                }
            break;
        default:
            printf("Opcao invalida\n");
            break;
      }
    }
    else if (opcao ==2) {
        printf("Movendo a Rainha para esquerda...\n");
        for (movimentopeca = 1; movimentopeca <= 8; movimentopeca++)    //movimento da rainha
        {    printf("Esquerda\n");
        }
    }
    else if (opcao ==3) {
        printf("Movendo a Bispo...\n");
        do {
            printf("Direita, Cima\n");
            movimentopeca++;
        }while (movimentopeca < 5);
    }
    else if (opcao ==4) {
        printf("Movendo o cavalo...\n");
        for (movimentopeca= 1; movimentopeca <= 1; movimentopeca++) {        //movimento de 1 casa com cavalo
            printf("Direita\n");
            for (int cavalo =1; cavalo <= 2; cavalo++) {            //adicionado uma variavel para o movimento de 2 casas com cavalo
                printf("Cima\n");
            }
        }
    }
    else {
        printf("Opcao invalida\n");
    }
    return 0;
}