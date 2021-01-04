#include<stdio.h>

int main(){
    int principle;
    int rate ;
    int time ;
    printf("put vaulue of principle\n");
    scanf("%d", &principle);
     printf("put vaulue of rate\n");
    scanf("%d", &rate);
     printf("put vaulue of principle\n");
    scanf("%d", &time);
    int simpleinterest = (principle * rate * time)/100;
    printf("the simpleinterst is %d", simpleinterest); 

    return 0;
    }
    
