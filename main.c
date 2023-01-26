#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char respostaUsuario[1000];
    char inicio[10];
    int ret;
    int i;
    int pontos = 0;
    char perguntas[11][2000] = {"Quantos dedos temos?", "Quantas letras o alfabeto tem?", "ABC", "123", "a"};
    char respostas[11][2000] = {"5", "26", "D", "4"};


    strcpy(inicio, "s");

    printf("Digite s para comecar\n");
    scanf("%s", &respostaUsuario);

    ret = strncmp(inicio, respostaUsuario, 7);

    if (ret > 0){
        printf("O jogo terminou! sua pontuação foi de %d !", pontos);
    }else if(ret < 0){
        printf("O jogo terminou! sua pontuação foi de %d !", pontos);
    }else{
            for(i = 0; i <= 3; i++){
                sleep(1);
                printf("%s\n", perguntas[i]);
                scanf("%s", respostaUsuario);
                ret = strncmp(respostas[i], respostaUsuario, 7);
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
            printf("Fim de jogo");

        }



    return 0;

}
