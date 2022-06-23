#ifndef LAKERS_H_INCLUDED
#define LAKERS_H_INCLUDED

lake()
{
    char lerfile[1000];

    int op2,op3;

    FILE*lak;

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

    printf(R"EOF(                     _                                           _              _____ _ _
                    | |                   /\                    | |            / ____| (_)
                    | |     ___  ___     /  \   _ __   __ _  ___| | ___  ___  | |    | |_ _ __  _ __   ___ _ __ ___
                    | |    / _ \/ __|   / /\ \ | '_ \ / _` |/ _ \ |/ _ \/ __| | |    | | | '_ \| '_ \ / _ \ '__/ __|
                    | |___| (_) \__ \  / ____ \| | | | (_| |  __/ |  __/\__ \ | |____| | | |_) | |_) |  __/ |  \__ \
                    |______\___/|___/ /_/    \_\_| |_|\__, |\___|_|\___||___/  \_____|_|_| .__/| .__/ \___|_|  |___/
                                                       __/ |                             | |   | |
                                                      |___/                              |_|   |_|                  )EOF");

    printf("\n");
    printf("\n");

    lak=fopen("lal.txt","r");

    while((fscanf(lak,"%s",&lerfile))!=EOF)
    {
        printf("%s ",lerfile);
    }
    printf("\n");
    printf("\n");

    printf(R"EOF(Ano de fundação: 1947
  Arena: Crypto.com Arena (mais conhecida pelo seu nome antigo : Staples Center)
  Presidente: Buss Family Trust
  Cores do time: Dourado , Roxo e Branco
  Campeonatos:  17 (1949, 1950, 1952, 1953, 1954, 1972, 1980, 1982, 1985, 1987, 1988, 2000, 2001, 2002, 2009, 2010 e 2020)
  Titulos de Divisão: 24 (1971, 1972, 1973, 1974, 1977, 1980, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 2000,
                        2001, 2004, 2008, 2009, 2010, 2011, 2012 e 2020))EOF");


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
                                        |         |lakers VS|         |         |lakers VS|         |         |
                                        |         |Clippers |         |         |bulls    |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |7        |8        |9        |10       |11       |12       |13       |
                                        |2:00 am  |         |         |4:00 am  |         |         |3:00 am  |
                                        |nets VS  |         |         |state VS |         |         |bucks VS |
                                        |lakers   |         |         |lakers   |         |         |lakers   |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |14       |15       |16       |17       |18       |19       |20       |
                                        |         |         |2:00 am  |         |         |2:00 am  |         |
                                        |         |         |state VS |         |         |nets  VS |         |
                                        |         |         |lakers   |         |         |lakers   |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |21       |22       |23       |24       |25       |26       |27       |
                                        |         |2:00 am  |         |         |4:00 am  |         |         |
                                        |         |lakers VS|         |         |76ers VS |         |         |
                                        |         |clippers |         |         |lakers   |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |28       |29       |30       |31       |         |         |         |
                                        |1:00 am  |         |         |2:00 am  |         |         |         |
                                        |76ers VS |         |         |bucks VS |         |         |         |
                                        |lakers   |         |         |lakers   |         |         |         |
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
                                      printf("\t1-Kobe bryant");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tEm 1996, vindo direto do high school, Kobe foi selecionado na 13ª escolha do draft pelo Charlotte Hornets. \n");
                                      printf("\tEm uma trajetória de 20 temporadas como jogador do Los Angeles Lakers, Kobe Bryant conquistou 5 títulos (2000, 2001, 2002, 2009 e 2010). \n");
                                      printf("\tEle foi homenageado pelos Lakers com a aposentadoria tanto do número 8 quanto do 24. Kobe é o único jogador da história da NBA a ter dois números aposentados pela mesma franquia.\n");


                                      printf("\n");
                                      printf("\n");
                                      printf("\t2-Magic Johnson");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tEm um time tão vitorioso quanto o Los Angeles Lakers é difícil apontar um jogador que se identifique mais com a equipe.\n");
                                      printf("\tEarvin “Magic” Johnson foi selecionado pelos Los Angeles Lakers na primeira escolha do draft de 1979. O armador, portador do síndrome HIV, jogou até 1991. A revelação sobre o vírus é retratada no documentário The Announcement.\n");
                                      printf("");

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

#endif // LAKERS_H_INCLUDED
