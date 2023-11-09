#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * codifica(char*str){
    char *novo;
    int i;
    for(i= 0;str[i];i++);   //Acha i tamanho da string (sem '\0')
    novo = (char*)malloc(sizeof(char)*(i+1));   //Aloca memória adequada para resposta (adicionando espaço para '\0')

    for(i = 0; str[i]; i++){
        if((str[i] >= 'a') && (str[i] <= 'z')){     //Se caractere é minúsculo, substitui por '?'
            novo[i] = '?';
        } else novo[i] = str[i];    //Se não, mantém inalterado

    }
    novo[i] = '\0';     //Adiciona indicador de fim de string
    return novo;
}

int main(void){

    char strOriginal[21];

    printf("Digite uma palavra para codificar:\n");
    scanf("%20s", strOriginal);

    char *codificado = codifica(strOriginal);
    printf("%s\n",codificado);

    free(codificado);   //Limpa memória alocada
}
