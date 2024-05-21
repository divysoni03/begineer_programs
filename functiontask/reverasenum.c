#include<stdio.h>

void reverse(int num){
    int reversenum=0,lastdigit;
    int number=num;

    while(num > 0){
        lastdigit = num % 10;
        reversenum = (reversenum * 10) + lastdigit ; 
        num /= 10;
    }

    printf("\nYour Entered number is %d and reverse of it is %d.",number,reversenum);
}
void main(){
    int num;

    printf("\nEnter a number :");
    scanf("%d",&num);
    reverse(num);
}