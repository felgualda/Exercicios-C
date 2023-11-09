#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void retira_inicio_n(char*str,int n){
    char *resp;

    int i;
    for(i=0;str[i];i++);
    if(i < n){
        printf("Erro\n");
    }
    else{
        resp = (char*)malloc(sizeof(char)*(i-n+1));

        for(i=0;str[i];i++) {
            if(i >= n)
                resp[i-n] = str[i];
        }
        resp[i-n] = '\0';
        printf("%s",resp);
        free(resp);
    }
}

void retira_fim_n(char*str,int n){
    char *resp;

    int j;
    for(j=0;str[j];j++);
    if(j < n){
        printf("Erro\n");
    }
    else{
        resp = (char*)malloc(sizeof(char)*(j-n+1));

        for(int i=0; i < j - n;i++) {
            resp[i] = str[i];
        }
        resp[j-n] = '\0';
        printf("%s",resp);
        free(resp);
    }
}

int main(void){
    char palavra[21];
    int n;

    printf("Digite uma palavra:\n");
    scanf("%20s",palavra);

    printf("\nDigite o n de caracteres para remover do prefixo:\n");
    scanf("%d",&n);
    retira_inicio_n(palavra,n);

    printf("\n\nDigite o n de caracteres para remover do sufixo:\n");
    scanf("%d",&n);
    retira_fim_n(palavra,n);

}
