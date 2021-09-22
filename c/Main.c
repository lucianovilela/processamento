#include <stdio.h>
#include <stdlib.h>

void main() {

    unsigned long int cont=0l;
    unsigned long int vet[1000000];
    for(unsigned long int i=0; i<1000000; i++){
        vet[i] = cont++;
        printf("%lu", cont);
        printf("\r");
        
    }
    
}


