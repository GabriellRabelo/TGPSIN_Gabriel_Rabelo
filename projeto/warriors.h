#ifndef WARRIORS_H_INCLUDED
#define WARRIORS_H_INCLUDED

warriors()
{
    char lerfile[1000];

    int op2,op3;

    FILE*war;

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

    printf(R"EOF(                     _____       _     _                  _        _                                 _
                    / ____|     | |   | |                | |      | |                               (_)
                   | |  __  ___ | | __| | ___ _ __    ___| |_ __ _| |_ ___  __      ____ _ _ __ _ __ _  ___  _ __ ___
                   | | |_ |/ _ \| |/ _` |/ _ \ '_ \  / __| __/ _` | __/ _ \ \ \ /\ / / _` | '__| '__| |/ _ \| '__/ __|
                   | |__| | (_) | | (_| |  __/ | | | \__ \ || (_| | ||  __/  \ V  V / (_| | |  | |  | | (_) | |  \__ \
                    \_____|\___/|_|\__,_|\___|_| |_| |___/\__\__,_|\__\___|   \_/\_/ \__,_|_|  |_|  |_|\___/|_|  |___/)EOF");

    printf("\n");
    printf("\n");

    war=fopen("gsw.txt","r");

    while((fscanf(war,"%s",&lerfile))!=EOF)
    {
        printf("%s ",lerfile);
    }
    printf("\n");
    printf("\n");

    printf(R"EOF(Ano de fundação: 1946
  Arena: Chase Center
  Presidente: Rick Welts
  Cores do time: Azul marinho , Ouro , Preto e Branco
  Campeonatos: 7 (1947, 1956, 1975, 2015, 2017, 2018 e 2022)
  Titulos de divisão: 8 (1975, 1976, 2015, 2016, 2017, 2018 e 2019 e 2022))EOF");


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
                                        |         |state VS |         |         |state VS |         |         |
                                        |         |Spurs    |         |         |Lakers   |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |7        |8        |9        |10       |11       |12       |13       |
                                        |2:00 am  |         |         |4:00 am  |         |         |3:00 am  |
                                        |state VS |         |         |state VS |         |         |state VS |
                                        |Warriors |         |         |Celtics  |         |         |Clippers |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |14       |15       |16       |17       |18       |19       |20       |
                                        |         |         |2:00 am  |         |         |2:00 am  |         |
                                        |         |         |state VS |         |         |state VS |         |
                                        |         |         |Bulls    |         |         |Hawks    |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |21       |22       |23       |24       |25       |26       |27       |
                                        |         |2:00 am  |         |         |4:00 am  |         |         |
                                        |         |state VS |         |         |state VS |         |         |
                                        |         |Pelicans |         |         |76ERS    |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |28       |29       |30       |31       |         |         |         |
                                        |1:00 am  |         |         |2:00 am  |         |         |         |
                                        |state VS |         |         |state VS |         |         |         |
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
                                      printf("\t1-Stephen Curry");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tStephen Curry foi o primeiro dos grandes jogadores da dinastia construída pelo Golden State Warriors a se juntar à franquia.\n");
                                      printf("\tDepois de sofrer com muitas lesões em suas primeiras temporadas na NBA, o camisa 30 se consolidou como uma das principais estrelas da liga.");
                                      printf("\n\tprincipalmente pela sua gigantesca capacidade de acertar bolas de 3 de praticamente qualquer lugar da quadra. Ele já é o jogador com mais cestas de 3 na história dos playoffs.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t2-Wilt Chamberlain");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tEm 1959, o então Philadelphia Warriors draftou Wilt Chamberlain, que não demorou para demonstrar que seria um dos maiores jogadores da história da NBA.\n");
                                      printf("\tEm 2 de março de 1962, em um jogo disputado em Hershey, na Pensilvânia, Chamberlain marcou 100 pontos contra o New York Knicks.\n");
                                      printf("\tPorém, Wilt Chamberlain não chegou a ser campão da NBA pelos Warriors. Na temporada 1964-1965, a franquia o trocou com o Philadelphia 76ers por Connie Dierking, Lee Shaffer, Paul Neumann e US$ 150.000.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t3-Rick Barry");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tSelecionado oito vezes para o All-star Game e cinco vezes para o time ideal da temporada da NBA, Rick Barry foi campeão com o Golden State Warriors na temporada 1974/75 e ainda teve sua camisa número 24 aposentada pela franquia.\n");
                                      printf("\tEm 1975, Rick Barry foi o MVP das finais e, em 1987, foi incluído no Naismith Memorial Basketball Hall of Fame.\n");
                                      printf("\tO ala encerrou sua carreira no grupo de atletas que atingiram pelo menos 18 mil pontos, 5 mil rebotes e 4 mil assistências.\n");

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

#endif // WARRIORS_H_INCLUDED
