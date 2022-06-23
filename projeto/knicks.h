#ifndef KNICKS_H_INCLUDED
#define KNICKS_H_INCLUDED

knicks()
{
    char lerfile[1000];

    int op2,op3;

    FILE*knicks;

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

    printf(R"EOF(                 _   _                __     __        _      _  __      _      _
                | \ | |               \ \   / /       | |    | |/ /     (_)    | |
                |  \| | _____      __  \ \_/ /__  _ __| | __ | ' / _ __  _  ___| | _____
                | . ` |/ _ \ \ /\ / /   \   / _ \| '__| |/ / |  < | '_ \| |/ __| |/ / __|
                | |\  |  __/\ V  V /     | | (_) | |  |   <  | . \| | | | | (__|   <\__ \
                |_| \_|\___| \_/\_/      |_|\___/|_|  |_|\_\ |_|\_\_| |_|_|\___|_|\_\___/)EOF");

   printf("\n");
   printf("\n");

    knicks=fopen("nyk.txt","r");

    while((fscanf(knicks,"%s",&lerfile))!=EOF)
    {
        printf("%s ",lerfile);
    }
    printf("\n");
    printf("\n");

    printf(R"EOF(  Ano de fundação: 1946
  Arena: Madison Square Garden
  Presidente: James Dolan
  Cores do time: Azul , Laranja e Prata
  Campeonatos: 2 (1970 e 1973)
  Titulos de divisão: 5(1971 , 1989 , 1993 , 1994 e 2013))EOF");


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
                                        |         |Knicks VS|         |         |Knocks VS|         |         |
                                        |         |Spurs    |         |         |Lakers   |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |7        |8        |9        |10       |11       |12       |13       |
                                        |2:00 am  |         |         |4:00 am  |         |         |3:00 am  |
                                        |Knicks VS|         |         |Knicks VS|         |         |Knicks VS|
                                        |Warriors |         |         |Celtics  |         |         |Clippers |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |14       |15       |16       |17       |18       |19       |20       |
                                        |         |         |2:00 am  |         |         |2:00 am  |         |
                                        |         |         |Knicks VS|         |         |Knicks VS|         |
                                        |         |         |Bulls    |         |         |Hawks    |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |21       |22       |23       |24       |25       |26       |27       |
                                        |         |2:00 am  |         |         |4:00 am  |         |         |
                                        |         |Knicks VS|         |         |Knicks VS|         |         |
                                        |         |Pelicans |         |         |76ERS    |         |         |
                                        |         |         |         |         |         |         |         |
                                        -----------------------------------------------------------------------
                                        |28       |29       |30       |31       |         |         |         |
                                        |1:00 am  |         |         |2:00 am  |         |         |         |
                                        |Knicks VS|         |         |Knicks VS|         |         |         |
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
                                      printf("\t1-Patrick Ewing");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tEwing foi a primeira escolha no NBA Draft de 1985. O pivô chegou na NBA depois de defender Georgetown por quatro anos.\n");
                                      printf("\tEle jogou no New York Knicks por quinze anos e lá virou ídolo. Ewing teve médias de 20 ou mais pontos por 13 temporadas seguidas, além de ser um excelente reboteiro e shot blocker. ");
                                      printf("\n\tEle foi o líder da equipe que chegou nas Finais de 1994 e perdeu para o Houston Rockets. \n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t2-Walt Frazier");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tFrazier foi a quinta escolha do NBA Draft de 1967 e jogou no New York Knicks por dez temporadas. \n");
                                      printf("\tEle jogou sete vezes o All-Star Game e participou dos dois títulos da franquia.\n");
                                      printf("\tO armador era um grande pontuador e playmaker, além de ser um exímio defensor para sua posição. \n");

                                      printf("\n");
                                      printf("\n");
                                      printf("\t3-Willis Reed");
                                      printf("\n");
                                      printf("\n");

                                      printf("\tO pivô foi a 10ª escolha do NBA Draft de 1964. Ele passou toda sua carreira com a equipe,\n");
                                      printf("\tindo sete vezes ao All-Star Game. Reed foi MVP da NBA em 1970, além de ser MVP das Finais nos dois títulos da franquia.\n");
                                      printf("\tEle era um pontuador consistente, que pegava muitos rebotes. Infelizmente, Reed sofreu muito com lesões e teve de se aposentar depois da temporada 1973-74. \n");

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

#endif // KNICKS_H_INCLUDED
