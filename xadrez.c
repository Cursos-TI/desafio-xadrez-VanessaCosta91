#include <stdio.h>

// Programa Jogo de Xadrez Simples

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
            for (i=1; i<=5; i++) {
                printf("Direita\n");
            }
        break;

        case 2:
            i =1;
            printf("Você escolheu o Bispo, ele andará cinco casas para diagonal direira:\n");
            while (i<=5) {
                printf("Cima Direita\n");
                i++;
            }
            break;

        case 3:
            i = 1;
            printf("Você escolheu a Rainha, ela andará oito casas para esqueda:\n");                  
            do {                
                printf("Esquerda\n");
                i++;
            } while(i<=8);
            break;

        case 4:
            i=1;
            printf("Você escolheu o Cavalo, ele andará duas casas para baixo e uma para esquerda:\n");  
            while (i<=1){
                for (int j=1; j<=2; j++) {
                    printf("Baixo\n");
                }

                printf("Esqueda\n");
                i++;
            }
            break;
        
        default:
            printf("Opção Inválida.\n");
    }

    return 0;
}