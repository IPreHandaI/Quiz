#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[40];
    char respostaUsuario[1000];
    char inicio[10];
    int nivel;
    int ret;
    int i;
    int pontos = 0;
    char pFacil[11][2000] = {"Quantos dedos temos em cada mao?", "Quantas letras tem o alfabeto", "Depois do C vem o: ?", "Depois do 3 vem o: ?"};
    char rFacil[11][2000] = {"5", "26", "D", "4"};
    char pMedio[11][2000] = {"M", "M", "M", "M"};
    char rMedio[11][2000] = {"5", "26", "D", "4"};
    char pDificil[11][2000] = {"D", "D", "D", "D"};
    char rDificil[11][2000] = {"5", "26", "D", "4"};

    strcpy(inicio, "s");

    printf("Digite s para comecar\n");
    scanf("%s", &respostaUsuario);

    ret = strncmp(inicio, respostaUsuario, 7);

    if (ret > 0){
        printf("O jogo terminou! sua pontuação foi de %d !", pontos);
    }else if(ret < 0){
        printf("O jogo terminou! sua pontuação foi de %d !", pontos);
    }else{
        printf("Este e um jogo de perguntas e respostas, existe 3 niveis:\n ");
        sleep(2);
        printf("1- Nivel Facil\n ");
        sleep(1);
        printf("2- Nivel Medio\n ");
        sleep(1);
        printf("3- Nivel Dificil\n");
        sleep(1);
        printf("Qual que voce deseja escolher?\n");
        scanf("%d", &nivel);
            switch(nivel){
            case 1:
                for(i = 0; i <= 3; i++){
                    sleep(1);
                    printf("%s\n", pFacil[i]);
                    scanf("%s", respostaUsuario);
                    ret = strncmp(rFacil[i], respostaUsuario, 7);
                    if(ret < 0){
                        printf("Voce errou! Sua pontuacao foi de %d", pontos);
                        break;
                    }else if(ret > 0){
                        printf("Voce errou! Sua pontuacao foi de %d", pontos);
                        break;
                    }else{
                        printf("Acertou!\n");
                        pontos++;
                    }
                }
                printf("Fim de jogo!");
                break;

            case 2:
                for(i = 0; i <= 3; i++){
                    sleep(1);
                    printf("%s\n", pMedio[i]);
                    scanf("%s", respostaUsuario);
                    ret = strncmp(rMedio[i], respostaUsuario, 7);
                    if(ret < 0){
                        printf("Voce errou! Sua pontuacao foi de %d", pontos);
                        break;
                    }else if(ret > 0){
                        printf("Voce errou! Sua pontuacao foi de %d", pontos);
                        break;
                    }else{
                        printf("Acertou!\n");
                        pontos++;
                    }
                }
                break;

            case 3 :
                for(i = 0; i <= 3; i++){
                    sleep(1);
                    printf("%s\n", pDificil[i]);
                    scanf("%s", respostaUsuario);
                    ret = strncmp(rDificil[i], respostaUsuario, 7);
                    if(ret < 0){
                        printf("Voce errou! Sua pontuacao foi de %d", pontos);
                        break;
                    }else if(ret > 0){
                        printf("Voce errou! Sua pontuacao foi de %d", pontos);
                        break;
                    }else{
                        printf("Acertou!\n");
                        pontos++;
                    }
                }
                break;
            }
        }



    return 0;

}
