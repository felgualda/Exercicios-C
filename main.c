#include <stdio.h>
#include <stdlib.h>

long long int encrypt(int key[], int lenght){
    long long int x = 1;
    for(int i = 0; i < lenght; i++){
        x *= key[i];
    }
    return x;
}

int *decrypt(long long int code){
    int *key = (int *)malloc(12 * sizeof(int));

    int i = 0;
    int nArr = 0;
    long long int multi = 1;
    while(multi != code){
        if(i != 0 && i != 1 && code % i == 0) {
            key[nArr] = i;
            multi *= key[nArr];
            nArr++;

        }
        i++;
    }
    return key;
}

int main(void) {

    int k[12] = {317,431,83,653,167,271,739,991,997,367,503,139};
    printf("%lld\n",encrypt(k,12));
                        6278785820195465499908156444887
    int *chaves = decrypt(6551836566813167831);
    for(int i = 0; i < 12; i++)
        printf("%d\n",chaves[i]);

    return 0;
}
