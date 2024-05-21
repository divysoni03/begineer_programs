#include<stdio.h>
#include<math.h>

void power(int num){
    int i,div;

    for(i=2;i<num/2;i++){
        if((num%i)==0){
            div=i;
            break;
        }
    }
    
    int exponent;
    float base = frexp(num, &exponent);
    
    if((div%2)==0){exponent-=1;}
    else if((div%3)==0){exponent-=2;}
    else{}
    
    // while(num>1){
    //     num=num/div;
    //     pow++;
    // }
    printf("Your Entered number's power %d^%d.",div,exponent);
}
void main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    power(num);
}
