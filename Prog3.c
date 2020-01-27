#include <stdio.h>

int main (void){

    int pp=1,tam,x;
    char APELIDO[100];

    printf ("Informe um apelido:");
    gets(APELIDO);

    tam = strlen (APELIDO);
    printf(" %d", tam);
    printf("\n As letras na posicao impar sao: ",x);

    while(pp<=tam-1)
    {
    printf(" %c ",APELIDO[pp]);
    pp=pp+2;
    }

printf ("\n");

printf("\n\tNome digitado: %s\t",APELIDO);

printf ("\n\n");

return 0;   

    
}