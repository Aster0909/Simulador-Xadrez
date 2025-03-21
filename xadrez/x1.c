#include <stdio.h>

int main() {

    // Função mover a Torre (cinco casas para direita)
    void moverTorre();
    {
        printf("Movimento da Torre: \n");
        for (int i = 0; i < 5; i++)
        {
            printf("Direita\n");
        }
    }
    printf("\n");

    // Função mover Bispo (cinco casas para cima e a direita)
    void moverBispo();
    {
        printf("Movimento do Bispo: \n");
        int contador = 1;
        while (contador <= 5)
        {
            printf("Cima Direita\n");
            contador++;
        }
    }
    printf("\n");

    // Função mover a Rainha (8 casas para esquerda)
    void moverRainha();
    {
        printf("Movimento da Rainha:\n");
        int contador_rainha = 1;
        do
        {
            printf("Esquerda\n");
            contador_rainha++;
        } while (contador_rainha <= 8);
    }
    printf("\n");

    // Função mover o cavalo  (duas casas para cima e uma para direita)
    void moverCavalo();
    {
        printf("Movimento do cavalo:\n");
        for (int i = 1; i <= 2; i++)
        {
            printf("Cima\n");
            int j = 1;
            while (j <= 1)
            {
                if (i == 2)
                {
                    printf("Direita\n");
                }
                j++;
            }
        }
    }

    // Função jogador escolher peça
    void escolherPeca(int peca)
    {
        switch ("peca")
        {
        case 1:
            moverTorre();
            break;
        case 2:
            moverBispo();
            break;
        case 3:
            moverRainha();
            break;
        case 4:
            moverCavalo();
            break;
        default:
            printf("Opção inválida!\n");
        }
    }

    int main()
    {
        int escolha;
        printf("Escolha a peça para movimentar:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        scanf("%d", &escolha);
        escolherPeca(escolha);
    }

    return 0;
}