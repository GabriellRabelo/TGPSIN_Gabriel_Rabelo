#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED
#include <time.h>

login1()
{
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
    printf("\n");


    char nome1[35],nome[35],pass1[35],pass[35];
    int op,resultado,linha,selecionar;

    FILE*login;

    gotoxy(42,14);
    printf("1-Criar conta\n");
    gotoxy(42,16);
    printf("2-login\n");
    gotoxy(42,18);
    printf("----> ");
    scanf("%i",&op);
    system("cls");
    fflush(stdin);

    if(op==1)
    {
        printf("digite seu nome\n---> ");
        gets(nome);

        printf("digite sua senha\n---> ");
        gets(pass);

        login=fopen("utilizador.txt","a");
        fprintf(login,nome);
        fprintf(login,"\n");
        fclose(login);

        login=fopen("senha.txt","a");
        fprintf(login,pass);
        fprintf(login,"\n");
        fclose(login);

        printf("criando conta");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".\n");
        printf("conta criada com sucesso\n");
        fclose(login);
    }

    else if(op==2)
    {
        login=fopen("utilizador.txt","r");

        linha=0;
        printf("digite o seu nome\n---> ");
        gets(nome1);

        while(fscanf(login,"%s",&nome)!=EOF)
        {
            linha++;
            resultado=strcmp(nome1,nome);
            if(resultado=0)
            {
                printf("nome encontrado");
                selecionar=linha;
                break;
            }
        }

        if(resultado==0)
        {
            login=fopen("senha.txt","r");
            printf("digite a palavra passe\n---> ");
            gets(pass1);
            linha=0;
            while(fscanf(login,"%s",&pass)!=EOF)
            {
                linha++;

                if(selecionar==linha)
                {
                    if(strcmp(pass1,pass)==0)
                    {
                        printf("password correta\n");
                    }
                    else
                    {
                        printf("pass errada\n");
                        login1();
                    }
                    break;

                }
            }
        }fclose(login);

    }
}

#endif // LOGIN_H_INCLUDED
