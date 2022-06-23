#ifndef RAPTORS_H_INCLUDED
#define RAPTORS_H_INCLUDED

rap()
{
    char lerfile[1000];

    int op2,op3;

    FILE*raptors;

    gotoxy(42,14);
    printf("Carregando informações sobre o time ");
    sleep(1);
    printf(" .");
    sleep(1);
    printf(" .");
    sleep(1);
    printf(" .\n");
    sleep(1);

    system("cls");

    printf(R"EOF(                   _______                    _          _____             _
                  |__   __|                  | |        |  __ \           | |
                     | | ___  _ __ ___  _ __ | |_ ___   | |__) |__ _ _ __ | |_ ___  _ __ ___
                     | |/ _ \| '__/ _ \| '_ \| __/ _ \  |  _  // _` | '_ \| __/ _ \| '__/ __|
                     | | (_) | | | (_) | | | | || (_) | | | \ \ (_| | |_) | || (_) | |  \__ \
                     |_|\___/|_|  \___/|_| |_|\__\___/  |_|  \_\__,_| .__/ \__\___/|_|  |___/
                                                                    | |
                                                                    |_|                      )EOF");

    printf("\n");
    printf("\n");

    raptors=fopen("p76ers.txt","r");

    while((fscanf(raptors,"%s",&lerfile))!=EOF)
    {
        printf("%s ",lerfile);
    }
    printf("\n");
    printf("\n");

    printf(R"EOF(  Ano de fundação: 1995
  Arena: Scotiabank Arena
  Presidente: Masai Ujiri
  Cores do time: Vermelho , Preto , Prata e Dourado
  Campeonatos: 1 (2019)
  Titulos de Divisão: 7 (2007, 2014, 2015, 2016, 2018, 2019,2020))EOF");


  printf("\n");

  do
    {

                             printf("\n");
                             printf("\n");
                             textcolor(RED);
                             printf(R"EOF(                                          o que quer saber sobre o time?
                                          1-tabela de jogos
                                          2-jogadores historicos
                                          3-voltar
                                          ---> )EOF");
                            textcolor(WHITE);

                             scanf("%i",&op2);

                             if(op2==1)
                             {
                                 system("cls");
                                 textcolor(WHITE);
                                 printf(R"EOF(                                            Su        Mo        Tu        We        Th        Fr        Sa
                                        -----------------------------------------------------------------------
                                        |         |1        |2        |3        |4        |5        |6        |
                                        |         |2:00 am  |         |         |3:00 am  |         |         |
                                        |         |toront VS|         |         |toront VS|         |         |
                                        |         |Spurs    |         |         |Lakers   |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |7        |8        |9        |10       |11       |12       |13       |
                                        |2:00 am  |         |         |4:00 am  |         |         |3:00 am  |
                                        |toront VS|         |         |toront VS|         |         |toront VS|
                                        |Warriors |         |         |Celtics  |         |         |Clippers |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |14       |15       |16       |17       |18       |19       |20       |
                                        |         |         |2:00 am  |         |         |2:00 am  |         |
                                        |         |         |toront VS|         |         |toront VS|         |
                                        |         |         |Bulls    |         |         |Hawks    |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |21       |22       |23       |24       |25       |26       |27       |
                                        |         |2:00 am  |         |         |4:00 am  |         |         |
                                        |         |toront VS|         |         |toront VS|         |         |
                                        |         |Pelicans |         |         |76ERS    |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |28       |29       |30       |31       |         |         |         |
                                        |1:00 am  |         |         |2:00 am  |         |         |         |
                                        |toront VS|         |         |toront VS|         |         |         |
                                        |Nuggets  |         |         |Mavericks|         |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------)EOF");

                                        do
                                        {
                                            printf("\n");
                                            printf("\n");
                                            printf("\n");
                                            printf(R"EOF(                                        1-voltar
                                        2-sair para o menu
                                        ---> )EOF");
                                            scanf("%i",&op3);

                                            if(op3==1)
                                            {
                                                system("cls");
                                                break;
                                            }
                                            else
                                            {
                                                system("cls");
                                                cod();
                                            }

                                        }while(op3!=2);

                                }
                                else if(op2==2)
                                {
                                    system("cls");
                                    printf("\n");
                                    printf("\n");
                                    textcolor(RED);
                                    printf(R"EOF(                               _                       _
                              | |                     | |
                              | | ___   __ _  __ _  __| | ___  _ __ ___  ___
                          _   | |/ _ \ / _` |/ _` |/ _` |/ _ \| '__/ _ \/ __|
                         | |__| | (_) | (_| | (_| | (_| | (_) | | |  __/\__ \
                          \____/ \___/ \__, |\__,_|\__,_|\___/|_|  \___||___/
                                        __/ |
                                       |___/                                 )EOF");
                                       textcolor(WHITE);
                                       printf("\n");

                                       textcolor(BLUE);
                                       printf(R"EOF(                              _     _     _             _
                             | |   (_)   | |           (_)
                             | |__  _ ___| |_ ___  _ __ _  ___ ___  ___
                             | '_ \| / __| __/ _ \| '__| |/ __/ _ \/ __|
                             | | | | \__ \ || (_) | |  | | (_| (_) \__ \
                             |_| |_|_|___/\__\___/|_|  |_|\___\___/|___/)EOF");
                                      textcolor(WHITE);

                                      printf("\n");
                                      printf("\n");
                                      printf("\t1-Vince Carter");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tVince Carter foi selecionado na 5ª escolha geral do draft de 1998 pelo Golden State Warriors e, logo em seguida, trocado com o Toronto Raptors.\n");
                                      printf("\tNa sua temporada de estreia na NBA, Vince Carter foi escolhido o calouro do ano. Já em 2000.");
                                      printf("\n\tele conquistou o torneio de enterradas do All-Star Weekend com uma das sequências de enterradas mais memoráveis de todos os tempos.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t2-Chris Bosh");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tEm 2003, o Toronto Raptors recrutou o pivô Chris Bosh com a quarta escolha da primeira rodada do draft da NBA.\n");
                                      printf("\tCom Bosh, a franquia voltou a disputar uma vaga nos playoffs. Porém, em 2010, ele optou por seguir para o Miami Heat \n");
                                      printf("\tEm 2019, Chris Bosh anunciou o fim de sua carreira, e o Miami Heat aposentou sua camisa com o número 1.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t3-Demar Derozan");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tDeMar Derozan foi selecionado pelo Toronto Raptors na 9ª escolha do draft de 2009.\n");
                                      printf("\tAo lado de Kyle Lowry, o ala-armador foi o principal jogador da franquia em sua primeira final de conferência, em 2016, quando foi derrotada pelo Cleveland Cavaliers de LeBron James. \n");
                                      printf("\tDepois da temporada 2017/2018, DeMar DeRozan foi trocado com o San Antonio Spurs por Kawhi Leonard.\n");

                                      do
                                        {
                                            printf("\n");
                                            printf("\n");
                                            printf("\n");
                                            printf(R"EOF(                                        1-voltar
                                        2-sair para o menu
                                        ---> )EOF");
                                            scanf("%i",&op3);

                                            if(op3==1)
                                            {
                                                system("cls");
                                                break;
                                            }
                                            else
                                            {
                                                system("cls");
                                                cod();break;
                                            }

                                        }while(op3!=2);
                                }
                                else if(op2==3)
                                {
                                    system("cls");
                                    times();
                                }
    }while(op3 !=2 && op2!= 3);
}


#endif // RAPTORS_H_INCLUDED
