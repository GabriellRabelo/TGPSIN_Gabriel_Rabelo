#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>
#include "times.h"
#include "login.h"
#include <time.h>



struct dado
{
    char nome[35];
    char sobrenome[35];
    int idade;
    char cidade[40];
};
struct dado dados;


cod()
{
    int op;
    char opt[4];





    //login1();
    system("cls");

    textcolor(BLUE);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf(R"EOF(                                         _   _ ______  ___
                                        | \ | || ___ \/ _ \
                                        |  \| || |_/ / /_\ \
                                        | . ` || ___ \  _  |
                                        | |\  || |_/ / | | |
                                        \_| \_/\____/\_| |_/)EOF");
    textcolor(WHITE);
    textcolor(RED);

    printf("\n");

    printf(R"EOF(                                         __ _ _ __  _ __
                                        / _` | '_ \| '_ \
                                       | (_| | |_) | |_) |
                                        \__,_| .__/| .__/
                                             | |   | |
                                             |_|   |_|
                 )EOF");
    textcolor(WHITE);

    textcolor(RED);
    printf("\n");


    if(dados.idade <18)
    {
        gotoxy(42,18);
    printf("1-Equipes\n");
    gotoxy(42,20);
    printf("2-Jogadores\n");
    gotoxy(42,22);
    printf("3-Sair\n");
    gotoxy(42,24);
    printf("---> ");
    scanf("%i",&op);
    textcolor(WHITE);
    }

    else
    {
        gotoxy(42,18);
    printf("1-Equipes");
    gotoxy(42,20);
    printf("2-Jogadores");
    gotoxy(42,22);
    printf("3-NBA Store");
    gotoxy(42,24);
    printf("4-Sair\n");
    gotoxy(42,25);
    printf("---> ");
    scanf("%i",&op);
    textcolor(WHITE);
    }

    if(op==1)
    {
        system("cls");

        times();
    }
}


int main()
{


    int op;

    setlocale(LC_ALL,"portuguese");

    textcolor(BLUE);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf(R"EOF(                                         _   _ ______  ___
                                        | \ | || ___ \/ _ \
                                        |  \| || |_/ / /_\ \
                                        | . ` || ___ \  _  |
                                        | |\  || |_/ / | | |
                                        \_| \_/\____/\_| |_/)EOF");
                                        printf("\n");
                                        textcolor(WHITE);


    textcolor(RED);
    printf(R"EOF(                                         __ _ _ __  _ __
                                        / _` | '_ \| '_ \
                                       | (_| | |_) | |_) |
                                        \__,_| .__/| .__/
                                             | |   | |
                                             |_|   |_|
                 )EOF");
                 printf("\n");
                 textcolor(WHITE);

    gotoxy(42,18);
    printf("digite seu nome\n");
    gotoxy(42,20);
    printf("----> ");
    fflush(stdin);
    gets(dados.nome);
    system("cls");
    textcolor(BLUE);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf(R"EOF(                                         _   _ ______  ___
                                        | \ | || ___ \/ _ \
                                        |  \| || |_/ / /_\ \
                                        | . ` || ___ \  _  |
                                        | |\  || |_/ / | | |
                                        \_| \_/\____/\_| |_/)EOF");
                                        printf("\n");
                                        textcolor(WHITE);


    textcolor(RED);
    printf(R"EOF(                                         __ _ _ __  _ __
                                        / _` | '_ \| '_ \
                                       | (_| | |_) | |_) |
                                        \__,_| .__/| .__/
                                             | |   | |
                                             |_|   |_|
                 )EOF");
                 printf("\n");
                 textcolor(WHITE);






    gotoxy(42,18);
    printf("digite seu sobrenome\n");
    gotoxy(42,20);
    printf("----> ");
    gets(dados.sobrenome);
    system("cls");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");


    textcolor(BLUE);
    printf(R"EOF(                                         _   _ ______  ___
                                        | \ | || ___ \/ _ \
                                        |  \| || |_/ / /_\ \
                                        | . ` || ___ \  _  |
                                        | |\  || |_/ / | | |
                                        \_| \_/\____/\_| |_/)EOF");
                                        printf("\n");
                                        textcolor(WHITE);


    textcolor(RED);
    printf(R"EOF(                                         __ _ _ __  _ __
                                        / _` | '_ \| '_ \
                                       | (_| | |_) | |_) |
                                        \__,_| .__/| .__/
                                             | |   | |
                                             |_|   |_|
                 )EOF");
                 printf("\n");
                 textcolor(WHITE);
    gotoxy(42,18);
    printf("Digite sua idade\n");
    gotoxy(42,20);
    printf("----> ");
    scanf("%i",&dados.idade);

    if(dados.idade<18)
    {
        gotoxy(42,22);
        textcolor(RED);
        printf("!!!Por você ser menor de idade a opção da NBA Store estara indisponivel!!!");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");

    }
    system("cls");

     textcolor(BLUE);
     printf("\n");
     printf("\n");
     printf("\n");
     printf("\n");

    printf(R"EOF(                                         _   _ ______  ___
                                        | \ | || ___ \/ _ \
                                        |  \| || |_/ / /_\ \
                                        | . ` || ___ \  _  |
                                        | |\  || |_/ / | | |
                                        \_| \_/\____/\_| |_/)EOF");
    textcolor(WHITE);
    textcolor(RED);

    printf("\n");

    printf(R"EOF(                                         __ _ _ __  _ __
                                        / _` | '_ \| '_ \
                                       | (_| | |_) | |_) |
                                        \__,_| .__/| .__/
                                             | |   | |
                                             |_|   |_|
                 )EOF");
                 printf("\n");
    textcolor(WHITE);

     cod();


    return 0;
}
