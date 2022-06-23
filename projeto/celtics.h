#ifndef CELTICS_H_INCLUDED
#define CELTICS_H_INCLUDED

celtics()
{
    char lerfile[1000];

    int op2,op3;

    FILE*cel;


    printf("                Carregando informações sobre o time");
    sleep(1);
    printf(" .");
    sleep(1);
    printf(" .");
    sleep(1);
    printf(" .\n");
    sleep(1);

    system("cls");

    printf(R"EOF(                 ____            _                 _____     _ _   _
                |  _ \          | |               / ____|   | | | (_)
                | |_) | ___  ___| |_ ___  _ __   | |     ___| | |_ _  ___ ___
                |  _ < / _ \/ __| __/ _ \| '_ \  | |    / _ \ | __| |/ __/ __|
                | |_) | (_) \__ \ || (_) | | | | | |___|  __/ | |_| | (__\__ \
                |____/ \___/|___/\__\___/|_| |_|  \_____\___|_|\__|_|\___|___/)EOF");

   printf("\n");
   printf("\n");

    cel=fopen("bo.txt","r");

    while((fscanf(cel,"%s",&lerfile))!=EOF)
    {
        printf("%s ",lerfile);
    }
    printf("\n");
    printf("\n");

    printf(R"EOF(  Ano de fundação: 1946
  Arena: Jardim TD
  Localização: Boston , Massachusetts
  Cores da equipe: Verde , Branco , Preto , Dourado e Marrom
  Presidente: Rica Gotham
  Campeonatos: 17 (1957 , 1959 , 1960 , 1961 , 1962 , 1963 , 1964 , 1965 , 1966 , 1968 , 1969 , 1974 , 1976 , 1981 , 1984 , 1986 , 2008)

  Titulos de Divisão: 32 (1957 , 1958 , 1959 , 1960 , 1961 , 1962 , 1963 , 1964 , 1965 ,
                         1972 , 1973 , 1974 , 1975 , 1976 , 1980 ,
                         1981 , 1982 , 1984 , 1985 , 1986 , 1987 , 1988 , 1991 , 1992
                         2005 , 2008, 2009 , 2010 , 2011 , 2012 , 2017 , 2022))EOF");

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
                                        |         |boston VS|         |         |boston VS|         |         |
                                        |         |Spurs    |         |         |Lakers   |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |7        |8        |9        |10       |11       |12       |13       |
                                        |2:00 am  |         |         |4:00 am  |         |         |3:00 am  |
                                        |boston VS|         |         |boston VS|         |         |Boston VS|
                                        |Warriors |         |         |Celtics  |         |         |Clippers |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |14       |15       |16       |17       |18       |19       |20       |
                                        |         |         |2:00 am  |         |         |2:00 am  |         |
                                        |         |         |Boston VS|         |         |Boston VS|         |
                                        |         |         |Bulls    |         |         |Hawks    |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |21       |22       |23       |24       |25       |26       |27       |
                                        |         |2:00 am  |         |         |4:00 am  |         |         |
                                        |         |Boston VS|         |         |Boston VS|         |         |
                                        |         |Pelicans |         |         |76ERS    |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |28       |29       |30       |31       |         |         |         |
                                        |1:00 am  |         |         |2:00 am  |         |         |         |
                                        |Boston VS|         |         |Boston VS|         |         |         |
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
                                      printf("\t1-Larry Bird");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tLarry Bird foi o melhor jogador que a franquia do Celtics já teve até agora.\n");
                                      printf("\tDraftado na sexta posição do Draft de 1978, Bird foi o calouro da temporada 1979-80 e por três vezes foi MVP da liga.");
                                      printf("\tCom aparição em 12 All-Star Games, acabou sendo agraciado com o MPV de edição de 1982. Por 10 vezes Bird esteve na seleção da NBA e esteve presente no time de melhores defensores em três oportunidades.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t2-Bill Russel");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tRussell chegou a Boston em uma troca de dois jogadores para ter os direitos da segunda escolha do Draft de 1956. E foi uma das cartadas mais acertadas da história da franquia.\n");
                                      printf("\tRussell ganhou o prêmio de MVP por cinco vezes, participou de 13 All-Star Games, e por 11 vezes esteve no melhor time da liga e também no melhor time defensivo.\n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t3-John Havlicek");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tHavlicek era o sexto-homem do time de Red Auerbach. Anos depois que o jogador acabou se tornando o franchise player e consolidou seu nome na história da franquia\n");
                                      printf("\t John foi All-Star por 13 vezes e por oito ocasioões foi escolhido para o melhor time defensivo da liga.n");
                                      printf("\tNas finais de 1974, foi eleito o MVP. Com oito títulos, Havlicek teve médias de 21.7 pontos em todas estas finais.\n");

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
#endif // CELTICS_H_INCLUDED
