#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetInt[5]= {10,20,30,40,50};
    char vetChar[5]= {"CAROL"};

    printf("\nNome do vetor de INT: %p ", vetInt);
    printf("\nNome do vetor de CHAR: %p\n", vetChar);

    for(int i=0; i<5; i++){
        printf("\nValor: %i | Endereço: %p", *(vetInt+i), vetInt+i);
    }
    printf("\n");
    for(int x=0; x<5; x++){
        printf("\nValor: %c | Endereço: %p", *(vetChar+x), vetChar+x);
    }
}
