#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compara(const void *a, const void *b){

    char *str1 = *(char**)a;
    char *str2 = *(char**)b;

    return strcmp(str1,str2);
}

int main(void) {

    int n = 0;
    printf("Quantos nomes deseja adicionar?\n");
    scanf("%d",&n);

    char **nomes = (char**)malloc(sizeof(char*)*n);     //Aloca memória para o vetor de ponteiros de cada string

    for(int i = 0; i < n; i++){
        nomes[i] = (char*)malloc(sizeof(char)*10);      //Aloca memória para cada string da lista (com tam. máximo de 10 chars)
    }

        //Entradas com os nomes
    for(int i = 0; i < n; i++) {
        scanf("%s",nomes[i]);
    }

    qsort(nomes,n,sizeof(char*),compara); //Quicksort de ordenação

        //Mostrar nomes ordenados
    printf("\nOrdem Alfabetica:\n");
    for(int i = 0; i < n; i++){
        printf("%s\n",nomes[i]);
    }

        //Libera o espaço alocado em memória das strings e da lista de strings
    for (int i = 0; i < n; i++) {
        free(nomes[i]);
    }
    free(nomes);

}
