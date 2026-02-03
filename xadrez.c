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
        
        default:
            printf("Opção Inválida.\n");
    }

    return 0;
}