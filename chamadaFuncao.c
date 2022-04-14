#include <stdio.h>
#include <stdlib.h>

void func(int a[10], int b) {
    int temp;
    temp = a[0];
    a[0] = b;
    b = temp;
}

int main(){
    int vetor[10]={1,2,3,4,5,6,7,8,9,10};
    int var=10;
    func(vetor, var);
    //nome matriz, variavel que esta armazenando a posição

    /*
    Para imprimir a variavel
    int vetor[10]={1,2,3,4,5,6,7,8,9,10};
    int var=10;
    printf("%i", func(vetor, var));

    OU
    varResult = func(vetor, var);
    printf("%i"; varResult);

    =========================================
    substring: cortar matriz
    void substring(palavra P1, P2 e destino [];
    */
}

