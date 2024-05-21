#include<stdio.h>

void reverse(int num){
    int sumofdigit=0,lastdigit;
    int number=num;

    while(num > 0){
        lastdigit = num % 10;
        sumofdigit+=lastdigit;
        num /= 10;
    }

    printf("\nYour Entered number is %d and sum of its all digit is %d.",number,sumofdigit);
}
void main(){
    int num;

    printf("\nEnter a number :");
    scanf("%d",&num);
    reverse(num);
}