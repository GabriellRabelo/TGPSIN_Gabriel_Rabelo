#ifndef TIMES_H_INCLUDED
#define TIMES_H_INCLUDED
#include <locale.h>
#include "nets.h"
#include "celtics.h"
#include "knicks.h"
#include "philadelphia.h"
#include "raptors.h"
#include "warriors.h"
#include "clippers.h"

times()
{

    setlocale(LC_ALL,"portuguese");
    char op[4];
    int op1,op2,op3;

    char nba[30][20]={"Brooklyn nets","New york knicks","Philadelphia 76ers","Toronto raptors","Golden state warriors","Los angeles clippers","Los angeles lakers","Phoenix suns","Sacramento kings","Chicago bulls","Clevands cavaliers","Detroid pistons",
    "Indiana pacers","Milwaukee Bucks","Atlanta hawks","Charlotte hornets","Miami heat","Orlando magic"," Washington wizards","Denver nuggets","Minnesota timberwolves","Oklahoma city thunder","Portland trail blazers",
    "Utah jazz","Dallas mavericks","Houston rockets","Memphis grizzlies","New orleands pelicans","San antonio spurs","Boston celtics"};

    FILE*bkn;

    FILE*bo;



    textcolor(BLUE);
    printf("\n");
    printf("\n");
    printf("\t\tSobre qual equipe da NBA deseja saber?\n");
    printf("\t\t________________________________________\n");
    textcolor(WHITE);
    printf("\n");


                 for(int d=0;d<30;d++)
                 {
                     printf("\n");
                     printf("                  %d-",(d+1));

                     for(int j=0;j<20;j++)
                     {
                         printf("%c",nba[d][j]);
                     }
                 }
                 printf("\n                  31-Voltar");



                 printf("\n");
                 textcolor(RED);
                 printf("\n                 ______________________________________________");
                 printf("\n                 escolha o time que deseja saber suas informações\n                  ---> ");
                 fflush(stdin);
                 textcolor(WHITE);
                 scanf("%i",&op1);
                 system("cls");
                 printf("\n");


                 switch(op1)
                 {
                    case 1: nets();break;
                    case 2:knicks();break;
                    case 3:phila();break;
                    case 4:rap();break;
                    case 5:warriors();break;
                    case 6:clippers();break;
                    case 30:celtics();break;
                    case 31:cod();break;

                 }


}

#endif // TIMES_H_INCLUDED
