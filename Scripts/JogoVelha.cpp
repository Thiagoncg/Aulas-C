#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{

    {
        int l, c, coluna, linha, jogador, ganhou, jogadas, opcao;
        char jogo[3][3];

        do
        {
            jogador = 1;
            ganhou = 0;
            jogadas = 0;

            for (l = 0; l < 3; l++)
            {
                for (c = 0; c < 3; c++)
                {
                    jogo[l][c] = ' ';
                }
            }

            do
            {
                cout << ("\n\n\t 0 1 2 \n\n");
                for (l = 0; l < 3; l++)
                {
                    for (c = 0; c < 3; c++)
                    {
                        if (c == 0)
                            cout << ("\t");
                        printf(" %c ", jogo[l][c]);
                        if (c < 2)
                            printf("|");
                        if (c == 2)
                            printf(" %d ", l);
                    }
                    if (l < 2)
                        printf("\n\t-----------");
                    printf("\n");
                }
                do
                {
                    cout << ("\n JOGADOR 1 = 0 \nJOGADOR 2 = X\n");
                    printf("\n JOGADOR %d Digite a linha: ", jogador);
                    cin >> linha;
                    printf("\n JOGADOR %d Digite a coluna que dejesa jogar: ", jogador);
                    cin >> coluna;
                } while (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

                if (jogador == 1)
                {
                    jogo[linha][coluna] = '0';
                    jogador++;
                }
                else
                {
                    jogo[linha][coluna] = 'X';
                    jogador = 1;
                }
                jogadas++;

                if (jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] == '0' ||
                    jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] == '0' ||
                    jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] == '0')
                {
                    cout << ("\nParabens! O jogador 1 venceu \n");
                    ganhou = 1;
                }

                if (jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
                    jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
                    jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X')
                {
                    cout << ("\nParabens! O jogador 2 venceu !\n");
                    ganhou = 1;
                }
                if (jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
                    jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' ||
                    jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0')
                {
                    cout << ("\n Parabens! o jogador 1 venceu! \n");
                    ganhou = 1;
                }
                if (jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
                    jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
                    jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X')
                {
                    cout << ("\n Parabens! o jogador 2 venceu! \n");
                    ganhou = 1;
                }
                if (jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0')
                {
                    cout << ("\n Parabens! o jogador 1 venceu \n");
                    ganhou = 1;
                }
                if (jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X')
                {
                    cout << ("\n Parabens! o jogador 2 venceu! \n");
                    ganhou = 1;
                }
                if (jogo[0][2] == '0' && jogo[1][1] == '0' && jogo[2][0] == '0')
                {
                    cout << ("\n Parabens! o jogador 1 venceu! \n");
                    ganhou = 1;
                }
                if (jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X')
                {
                    cout << ("\n Parabens! o jogador 2 venceu \n");
                    ganhou = 1;
                }
            } while (ganhou == 0 && jogadas < 9);

            cout << ("\n\n\t 0 1 2 \n\n");
            for (l = 0; l < 3; l++)
            {
                for (c = 0; c < 3; c++)
                {
                    if (c == 0)
                        cout << ("\t");
                    printf(" %c ", jogo[l][c]);
                    if (c < 2)
                        cout << ("|");
                    if (c == 2)
                        printf(" %d ", l);
                }
                if (l < 2)
                    cout << ("\n\t-----------");
                cout << ("\n");
            }

            if (ganhou == 0)
                cout << ("\nO jogo finalizou sem ganhador!\n");

            cout << ("\nDigite 1 para jogar novamente: \n");
            cin >> opcao;
        } while (opcao == 1);

        return 0;
    }
}