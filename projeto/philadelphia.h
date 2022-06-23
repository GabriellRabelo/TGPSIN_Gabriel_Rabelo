#ifndef PHILADELPHIA_H_INCLUDED
#define PHILADELPHIA_H_INCLUDED

phila()
{
    char lerfile[1000];

    int op2,op3;

    FILE*philadelphia;

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

   printf(R"EOF(                  _____  _     _ _           _      _       _     _         ______ __
                 |  __ \| |   (_) |         | |    | |     | |   (_)       |____  / /
                 | |__) | |__  _| | __ _  __| | ___| |_ __ | |__  _  __ _      / / /_   ___ _ __ ___
                 |  ___/| '_ \| | |/ _` |/ _` |/ _ \ | '_ \| '_ \| |/ _` |    / / '_ \ / _ \ '__/ __|
                 | |    | | | | | | (_| | (_| |  __/ | |_) | | | | | (_| |   / /| (_) |  __/ |  \__ \
                 |_|    |_| |_|_|_|\__,_|\__,_|\___|_| .__/|_| |_|_|\__,_|  /_/  \___/ \___|_|  |___/
                                                     | |
                                                     |_|                                             )EOF");


    printf("\n");
    printf("\n");

    philadelphia=fopen("p76ers.txt","r");

    while((fscanf(philadelphia,"%s",&lerfile))!=EOF)
    {
        printf("%s ",lerfile);
    }
    printf("\n");
    printf("\n");

    printf(R"EOF(  Ano de fundação: 1939
  Arena: Wells Fargo Center
  Presidente: Josh Harris
  Cores do time: Vermelho , Azul e Branco
  Campeonatos: 3 (1955 , 1967 e 1983)
  Titulos de divisão: 6 (1977 , 1978 , 1983 , 1990 , 2001 e 2021))EOF");


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
                                        |         |76ers VS |         |         |76ers VS |         |         |
                                        |         |Spurs    |         |         |Lakers   |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |7        |8        |9        |10       |11       |12       |13       |
                                        |2:00 am  |         |         |4:00 am  |         |         |3:00 am  |
                                        |76ers VS |         |         |76ers  VS|         |         |76ers  VS|
                                        |Warriors |         |         |Celtics  |         |         |Clippers |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |14       |15       |16       |17       |18       |19       |20       |
                                        |         |         |2:00 am  |         |         |2:00 am  |         |
                                        |         |         |76ers  VS|         |         |76ers  VS|         |
                                        |         |         |Bulls    |         |         |Hawks    |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |21       |22       |23       |24       |25       |26       |27       |
                                        |         |2:00 am  |         |         |4:00 am  |         |         |
                                        |         |76ers  VS|         |         |Knicks VS|         |         |
                                        |         |Pelicans |         |         |76ERS    |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |28       |29       |30       |31       |         |         |         |
                                        |1:00 am  |         |         |2:00 am  |         |         |         |
                                        |76ers  VS|         |         |76ers  VS|         |         |         |
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
                                      printf("\t1-Julius Erving");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tApelidado de Dr J., Julius Erving foi ala do Philadelphia 7ers entre 1976 e 1987.\n");
                                      printf("\tNesse período, foi campeão da NBA em 1983 e MVP da liga em 1981. O pivô é o recordista de tocos da história da franquia. ");
                                      printf("\n\tPelos 76ers, Julius Erving manteve médias de 22,0 pontos, 6,7 rebotes, 1,8 roubo de bola e 1,5 tocos.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t2-Wilt Chamberlain");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tUm dos maiores jogadores de todos os tempos, Wilt Chamberlain jogou pelo Philadelphia 76ers entre 1965 e 1968. Nesse período, foi campeão da NBA em 1967.\n");
                                      printf("\tm toda a sua trajetória na NBA, Wilt Chamberlain foi o MVP por quatro vezes. Em 13 temporadas participou do All-Star Game e, em sete, esteve no quinteto ideal da liga.\n");
                                      printf("\tO pivô também foi o maior pontuador da NBA em sete temporadas e o jogador com mais rebotes 11 vezes.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t3-Allen Iverson");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tAllen Iverson foi o grande jogador do Philadelphia 76ers no início deste século. Foi ele quem liderou a equipe até as finais da NBA de 2001.\n");
                                      printf("\tIverson é o segundo maior pontuador da história dos 76ers. Em 11 edições, participou do All-Star Game e foi eleito o melhor jogador do Jogo das Estrelas em 2001 e 2005. \n");
                                      printf("\tm 1999, 2001, 2002 e 2005, Allen Iverson foi o cestinha da NBA. Entre 2001 e 2003, foi também o jogador com mais roubadas de bola da NBA.\n");

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
                                else if(op2==3)
                                {
                                    system("cls");
                                    times();
                                }
    }while(op3 !=2 && op2!= 3);
}

#endif // PHILADELPHIA_H_INCLUDED
