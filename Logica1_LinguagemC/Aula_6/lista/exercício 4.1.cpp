#include<stdio.h>
 
int main ()
{
    int i, num=0, counter0=0, counter1=0, counter2=0, counter3=0;
    
    printf("para sair, digite um numero negativo\n");
    
    while (num>-1){
        printf("insira um numero positivo: ");
        scanf("%d", &num);
        
        for(i=0;i<=25;i++){
            if(i==num){
                counter0++;
            }
        }
    
        for(i=26;i<=50;i++){
            if(i==num){
                counter1++;
            }
        }
    
        for(i=51;i<=75;i++){
            if(i==num){
                counter2++;
            }
        }
    
        for(i=76;i<=100;i++){
            if(i==num){
                counter3++;
            }
        }
    }
    
    
    printf("\n\n\nentre 0 e 25: %d\n", counter0);
    printf("entre 26 e 50: %d\n", counter1);
    printf("entre 51 e 75: %d\n", counter2);
    printf("entre 76 e 100: %d\n", counter3);
    
    return 0;
}
