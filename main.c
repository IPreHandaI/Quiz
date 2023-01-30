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
    int chances = 0;
    int acertos = 0;
    int erros = 0;
    char pFacil[11][2000] = {"Quantos dedos temos em cada mao?", "Quantas letras tem o alfabeto?", "Depois do C vem o: ?", "Depois do 3 vem o: ?"};
    char rFacil[11][2000] = {"5", "26", "D", "4"};
    char pMedio[11][2000] = {"Quantas horas tem um ano?", "Qual povo descobriu a America?", "Em que ano o ser humano foi a lua?", "Que pais tem o formato de uma bota?"};
    char rMedio[11][2000] = {"8760", "Espanhois", "1969", "Italia"};
    char pDificil[11][2000] = {"Quem foi a unica pessoa na historia a receber o Premio Nobel em areas cientificas diferentes?", " Qual a obra de arte mais cara ja arrematada em um leilao", "Quantas bandeiras o Brasil ja teve contando com a atual?", "Qual foi a celebre invencao feita por Robert Kahn e Vint Cerf?"};
    char rDificil[11][2000] = {"Marie-Curie", "Salvator-Mundi", "13", "Internet"};

    strcpy(inicio, "s");

    printf("Digite s para comecar\n");
    scanf("%s", &respostaUsuario);

    ret = strncmp(inicio, respostaUsuario, 7);

    if (ret > 0){
        printf("O jogo terminou! sua pontuação foi de %d !", acertos);
    }else if(ret < 0){
        printf("O jogo terminou! sua pontuação foi de %d !", acertos);
    }else{
        printf("Este e um jogo de perguntas e respostas, existem 3 niveis:\n ");
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
                for(i = 0; i <= 4; i++){
                    sleep(1);
                    printf("%s\n", pFacil[i]);
                    scanf("%s", respostaUsuario);
                    ret = strncmp(rFacil[i], respostaUsuario, 7);
                    if(ret < 0){
                        printf("Voce errou!\n");
                        sleep(1);
                        chances++;
                        erros++;
                    }else if(ret > 0){
                        printf("Voce errou!\n");
                        sleep(1);
                        chances++;
                        erros++;
                    }else{
                        printf("Acertou!\n");
                        acertos++;
                    }
                        if(chances == 3){
                        printf("Ja usou todas as suas chances!\n");
                        sleep(1);
                        break;
                    }
                }
                printf("Acertos: %d\n", acertos);
                sleep(1);
                printf("Erros: %d\n", erros);
                sleep(1);
                printf("Fim de jogo!");
                break;

            case 2:
                for(i = 0; i <= 4; i++){
                    sleep(1);
                    printf("%s\n", pFacil[i]);
                    scanf("%s", respostaUsuario);
                    ret = strncmp(rFacil[i], respostaUsuario, 7);
                    if(ret < 0){
                        printf("Voce errou!\n");
                        sleep(1);
                        chances++;
                        erros++;
                    }else if(ret > 0){
                        printf("Voce errou!\n");
                        sleep(1);
                        chances++;
                        erros++;
                    }else{
                        printf("Acertou!\n");
                        acertos++;
                    }
                        if(chances == 3){
                        printf("Ja usou todas as suas chances!\n");
                        sleep(1);
                        break;
                    }
                }
                printf("Acertos: %d\n", acertos);
                sleep(1);
                printf("Erros: %d\n", erros);
                sleep(1);
                printf("Fim de jogo!");
                break;

            case 3 :
                for(i = 0; i <= 4; i++){
                    sleep(1);
                    printf("%s\n", pFacil[i]);
                    scanf("%s", respostaUsuario);
                    ret = strncmp(rFacil[i], respostaUsuario, 7);
                    if(ret < 0){
                        printf("Voce errou!\n");
                        sleep(1);
                        chances++;
                        erros++;
                    }else if(ret > 0){
                        printf("Voce errou!\n");
                        sleep(1);
                        chances++;
                        erros++;
                    }else{
                        printf("Acertou!\n");
                        acertos++;
                    }
                        if(chances == 3){
                        printf("Ja usou todas as suas chances!\n");
                        sleep(1);
                        break;
                    }
                }
                printf("Acertos: %d\n", acertos);
                sleep(1);
                printf("Erros: %d\n", erros);
                sleep(1);
                printf("Fim de jogo!");
                break;
            }
        }



    return 0;

}
