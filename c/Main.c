#include <stdio.h>
#include <stdlib.h>

void main() {
    unsigned long cont=0l;
    
    for(unsigned int i=0; i<100000; i++){
        cont = cont+1;
        printf("%lu", cont);
        printf("\r");
        
    }
    
}


