#include <stdio.h>

// Programa Jogo de Xadrez Simples

// Função que move Torre
void moverTorre (int casas) {
    if(casas>0) {
        printf("Direita\n");
        moverTorre(casas-1);   
    }
}

// Função que move Bispo
void moverBispo (int casas) {

    if (casas == 0) {
        return;
        }

    for(int i=1; i<=1; i++) { 
        printf("Cima ");
        for(int j=1; j<=1; j++){
            printf("Direita\n");
        }        

    moverBispo(casas-1);   
    }
}

// Função que move Bispo
void moverRainha (int casas) {
    if(casas>0) {
        printf("Esquerda\n");
        moverRainha(casas-1);   
    }
}

// Função que move Bispo
void moverCavalo(int casas) {

    int passoVertical = 2;
    int passoHorizontal = 1;

    
    for (int fase = 1; fase <= 2; fase++) {

        
        if (fase == 1) {

            for (int i = 1; i <= passoVertical; i++) {
                printf("Cima\n");
            }

            continue; 
        }

        
        if (fase == 2) {

            for (int j = 1; j <= passoHorizontal; j++) {
                printf("Direita\n");
            }

            break; 
        }
    }
}


int main() {
    //Variáveis
    int escolha, i;
    
    //Menu do jogo
    printf("Bem vindo ao Jogo de Xadrex.\n\n");
    printf("Escolha a peça que deseja mexer:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");

    printf("Escolha: ");
    scanf("%d", &escolha);

    
    // Lógica do jogo
    switch (escolha) {
        case 1:
            printf("Você escolheu a Torre, ela andará cinco casas para direira:\n");
            moverTorre(5);
        break;

        case 2:
            i =1;
            printf("Você escolheu o Bispo, ele andará cinco casas para diagonal direira:\n");
            moverBispo(5);
            break;

        case 3:
            printf("Você escolheu a Rainha, ela andará oito casas para esqueda:\n");                  
            moverRainha(8);
            break;

        case 4:
            printf("Você escolheu o Cavalo, ele andará duas casas para cima e uma para direita:\n");  
            moverCavalo(1);
         break;
        
        default:
            printf("Opção Inválida.\n");
    }

    return 0;
}