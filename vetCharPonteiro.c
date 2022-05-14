#include <stdio.h>

int main(){
    char vetchar[5] = {"Ana"}, *p;

    printf("\nVetchar: %s", vetchar);
    p=vetchar;

    while(*p != '\0'){
        printf("\n%c %p", *p, p);
        p++;
    }
    printf("\n========================");

    for(int i=0; i<strlen(vetchar); i++){
        printf("\n%c %p", *(vetchar+i), vetchar+i);
    }
}
