#include <stdio.h>

int main(){
    char banco[4];
    char vetBoleto[11];
    char codBarra[46], x, y;

    printf("Insira o codigo de barras: \n");
    scanf(" %s", codBarra);

    for(x=0; x<4; x++){
        banco[x] = codBarra;
    }

    for(y=36; y<11; y++){
        vetBoleto[y] = codBarra;
    }







    if(strcmp(banco,"001") == 0){
        printf("\n Banco do Brasil");
    }
    else if(strcmp(banco,"033")== 0){
        printf("\n Santander");
    }
    else if(strcmp(banco,"104")== 0){
        printf("\n Caixa economica federal");
    }
    else if(strcmp(banco,"341")== 0){
        printf("\n Itaú");
    }
    else if(strcmp(banco, "745")== 0){
        printf("\n Citibank");
    }
}
