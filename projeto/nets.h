#ifndef NETS_H_INCLUDED
#define NETS_H_INCLUDED

nets()
{
    char lerfile[1000];

    int op2,op3;

    FILE*bkn;


    printf("                Carregando informações sobre o time");
                         sleep(1);
                         printf(" .");
                         sleep(1);
                         printf(" .");
                         sleep(1);
                         printf(" .\n");
                         sleep(1);

                         system("cls");

                         printf(R"EOF(                ____                  _    _                           _
               |  _ \                | |  | |                         | |
               | |_) |_ __ ___   ___ | | _| |_   _ _ __     _ __   ___| |_ ___
               |  _ <| '__/ _ \ / _ \| |/ / | | | | '_ \   | '_ \ / _ \ __/ __|
               | |_) | | | (_) | (_) |   <| | |_| | | | |  | | | |  __/ |_\__ \
               |____/|_|  \___/ \___/|_|\_\_|\__, |_| |_|  |_| |_|\___|\__|___/
                                              __/ |
                                             |___/ )EOF");



                         printf("\n");
                         printf("\n");

                         bkn=fopen("bkn.txt","r");

                         while((fscanf(bkn,"%s",&lerfile))!=EOF)
                         {
                             printf("%s ",lerfile);
                         }
                         printf("\n");
                         printf("\n");
                         printf(R"EOF(  Ano de fundação:  1967
  Arena: Barclays Center
  Presidente: Joseph Tsai
  Cores do time: Preto e Branco
  Campeonatos: 0
  Titulos de divisão: 4(2002,2003,2004 e 2006))EOF");
                                      printf("\n");

                         textcolor(RED);
                         printf("\n");

                         do
                         {

                             printf("\n");
                             printf("\n");
                             printf(R"EOF(                                          o que quer saber sobre o time?
                                          1-tabela de jogos
                                          2-jogadores historicos
                                          3-voltar
                                          ---> )EOF");
                             scanf("%i",&op2);

                             if(op2==1)
                             {
                                 system("cls");
                                 textcolor(WHITE);
                                 printf(R"EOF(                                            Su        Mo        Tu        We        Th        Fr        Sa
                                        -----------------------------------------------------------------------
                                        |         |1        |2        |3        |4        |5        |6        |
                                        |         |2:00 am  |         |         |3:00 am  |         |         |
                                        |         |Nets VS  |         |         |Nets VS  |         |         |
                                        |         |Spurs    |         |         |Lakers   |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |7        |8        |9        |10       |11       |12       |13       |
                                        |2:00 am  |         |         |4:00 am  |         |         |3:00 am  |
                                        |Nets VS  |         |         |Nets VS  |         |         |Nets VS  |
                                        |Warriors |         |         |Celtics  |         |         |Clippers |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |14       |15       |16       |17       |18       |19       |20       |
                                        |         |         |2:00 am  |         |         |2:00 am  |         |
                                        |         |         |Nets VS  |         |         |Nets VS  |         |
                                        |         |         |Bulls    |         |         |Hawks    |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |21       |22       |23       |24       |25       |26       |27       |
                                        |         |2:00 am  |         |         |4:00 am  |         |         |
                                        |         |Nets VS  |         |         |Nets VS  |         |         |
                                        |         |Pelicans |         |         |76ERS    |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |28       |29       |30       |31       |         |         |         |
                                        |1:00 am  |         |         |2:00 am  |         |         |         |
                                        |Nets VS  |         |         |Nets VS  |         |         |         |
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
                                      printf("\t1-Julius 'Dr.J' Erving");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tErving foi considerado como o melhor jogador da ABA e ajudou a liga a ganhar destaque.\n");
                                      printf("\tO Dr. J ajudou o New York Nets a vencer 2 campeonatos. Ele fez uma média de 28 pontos e 11 rebotes em 254 jogos.");
                                      printf("\tUma das maiores facetas de seu jogo foi o dunk.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t2-Jason Kidd");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tKidd se tornou um dos melhores armadores de todos os tempos e ajudou o Nets a participar dos playoffs seis temporadas seguidas, incluindo duas aparições na NBA Finals\n");
                                      printf("\t Durante seu tempo em New Jersey, foi selecionado para cinco All-Star Games e teve média de quase um triplo double em sua carreira.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t3-Bernard King");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tKing foi recrutado pelo Nets com a sétima escolha no draft de 1977 da NBA.King teve uma média de quase um double-double em sua temporada de estreia, mas apenas ajudou o Nets a conquistar 24 vitórias.\n");
                                      printf("\t Ele também acumulou um recorde no Nets, marcando 1.909 pontos em uma única temporada\n");

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
#endif // NETS_H_INCLUDED
