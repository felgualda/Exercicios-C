#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shift_troca_string(char*str){
    char novo[30];

    int i = 0;
    while(str[i] != '\0'){
        if((str[i] > 'A')&&(str[i]<='Z'))     //Caracter maiúsculo
            novo[i] = str[i]+31;    //Diferença ASCII entre minúsculo e maiúsculo = 32. Pegar caracter anterior (31)

        if((str[i] > 'a')&&(str[i]<='z'))    //Caracter minúsculo
            novo[i] = str[i]-33;    //Diferença ASCII entre minúsculo e maiúsculo = -32. Pegar caracter anterior (-33)

        if(str[i] == 'A')      //'A' se torna 'z'
            novo[i] = 'z';

        if(str[i] == 'a')      //'a' se torna 'Z'
            novo[i] = 'Z';

        if(!((str[i] >= 'A')&&(str[i]<='Z')) && !((str[i] >= 'a')&&(str[i]<='z')))
            novo[i] = '!';     //Valores não alfabéticos viram '!'

        i++;
    }
    novo[i] = '\0';     //Fim de string

    printf("%s\n",novo);
}

int main(void) {

    char palavra[30];
    scanf("%s",&palavra);

    shift_troca_string(palavra);

}
