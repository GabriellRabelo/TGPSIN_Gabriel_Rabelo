#ifndef CLIPPERS_H_INCLUDED
#define CLIPPERS_H_INCLUDED

clippers()
{
    char lerfile[1000];

    int op2,op3;

    FILE*clip;

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

    clip=fopen("lac.txt","r");

    while((fscanf(clip,"%s",&lerfile))!=EOF)
    {
        printf("%s ",lerfile);
    }
    printf("\n");
    printf("\n");

    printf(R"EOF(Ano de fundação: 1970
  Arena: Crypto.com arena (Mais conhecida pelo nome antigo: Staples Center)
  Presidente: Steve Ballmer
  Campeonatos: 0
  Titulos de conferencia: 0 )EOF");


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
                                        |         |state VS |         |         |lakers VS|         |         |
                                        |         |Clippers |         |         |Clippers |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |7        |8        |9        |10       |11       |12       |13       |
                                        |2:00 am  |         |         |4:00 am  |         |         |3:00 am  |
                                        |nets VS  |         |         |state VS |         |         |bucks VS |
                                        |clippers |         |         |Clippers |         |         |Clippers |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |14       |15       |16       |17       |18       |19       |20       |
                                        |         |         |2:00 am  |         |         |2:00 am  |         |
                                        |         |         |state VS |         |         |nets  VS |         |
                                        |         |         |Bulls    |         |         |Clippers |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |21       |22       |23       |24       |25       |26       |27       |
                                        |         |2:00 am  |         |         |4:00 am  |         |         |
                                        |         |bulls VS |         |         |76ers VS |         |         |
                                        |         |clippers |         |         |clippers |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |28       |29       |30       |31       |         |         |         |
                                        |1:00 am  |         |         |2:00 am  |         |         |         |
                                        |76ers VS |         |         |bucks VS |         |         |         |
                                        |clippers |         |         |clippers |         |         |         |
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
                                      printf("\t1-Blake Griffin");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tBlake Griffin foi selecionado na primeira escolha do draft da NBA de 2009, mas uma lesão o tirou de toda a temporada 2009/2010. Ele acabou considerado o melhor calouro em 2011.\n");


                                      printf("\n");
                                      printf("\n");
                                      printf("\t2-Chris Paul");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tEm dezembro de 2011, os Clippers fizeram uma troca para contratar Chris Paul, que vinha de boas temporadas no New Orleans Hornets, atual New Orleans Pelicans.\n");
                                      printf("\tCom Blake Griffin e Chris Paul juntos, os Clippers conquistaram seus dois únicos títulos da Divisão do Pacífico, em 2013 e 2014.\n");

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

#endif // CLIPPERS_H_INCLUDED
