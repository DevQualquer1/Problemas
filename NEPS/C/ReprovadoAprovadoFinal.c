#include <stdio.h>

int main(){
    float N1,N2,media;
    
    scanf("%f%f",&N1,&N2);
    
    media = (N1*2 + N2*3) / 5; 
    
    if (media >= 7){
        printf("Aprovado");
    }    
        
    else if(media <3){
        printf("Reprovado");
    }    
    
    else{
        printf("Final");
    }
}