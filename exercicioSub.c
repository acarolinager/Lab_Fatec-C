#include <stdio.h>
#include <stdlib.h>

// Implemente uma fun��o chamada subschar que substitua um caracter por outro dentro de uma string de at� 10 caracteres.
// Exemplo de entrada: aRara r v
// Sa�da: avava

void subchar (char palavra[11], char letra1, char letra2){

    int i;
    //percorrer a matriz preenchida
    //strlen: conta os caracteres. No caso vai contar quais posicoes estao preenchidas
    for(i=0; i<strlen[11]; i++) {
        if(tolower(palavra[i]) == tolower(letra1)){
            palavra[i] = letra2; //atribuindo q letra 2 ao espa�o 1
        }
    }
    //strcmp: para comparacao. Vai retornar 0 se for verdadeiro
    //strcpy: para atribuicao
    //tolower:
}
