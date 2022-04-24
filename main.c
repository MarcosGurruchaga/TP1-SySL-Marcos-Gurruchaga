#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Marcos Gurruchaga - SySL TP1 K2002
int main()
{
    int c;
    while(c != EOF) {
    //Pedimos el caracter por consola
    c = getchar();

    //Si es uppercase lo hacemos lowercase
    if (isupper(c))
    c = tolower(c);

    //Si es lowercase lo hacemos uppercase
    else if (islower(c))
    c=toupper(c);

    //Chequeamos si no es digito para mostrarlo por consola
    if (isdigit(c)==0)
    putchar(c);



    }
}
