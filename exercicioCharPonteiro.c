#include <stdio.h>
#include <string.h>

void cripto(char *string){
    strrev(string);
}

int main(){
    char vetchar[100];
    printf("Informe uma string: \n");
    gets(vetchar);

    cripto(vetchar);
    printf("Invertida: %s", vetchar);
}
