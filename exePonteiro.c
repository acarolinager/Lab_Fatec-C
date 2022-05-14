#include <stdio.h>

int main(){

    float valores[10], *p;
    p = &valores[0];
    printf("%p %p\n", valores, p);
    p = valores;
    printf("%p %p\n", valores, p);
    p = &valores[1];
    printf("%x %p\n", p - valores, p);
    p = &valores[6];
     printf("%x %p\n", p - valores, p);
}
