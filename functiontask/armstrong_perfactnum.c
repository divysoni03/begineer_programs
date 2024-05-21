#include<stdio.h>
#include<math.h>

// int armstrong(int num){
//     // int sum=0,i,power=0;
//     // int temp=num;

//     // // while(temp !=0){
//     // //     power++;
//     // //     temp/=10;
//     // // }
//     // power = (int )log10(num) +1 ;

//     // while(num !=0){
//     //     int lastdigit = num % 10;
//     //     sum += pow(lastdigit,power);
//     //     num /= 10;
//     // }
//     // return sum;
//     int originalNum=num;
//     int numOfDigits = (int)log10(num) + 1;
//     int sum=0;
//     while (num != 0)
//     {
//         int remainder = num % 10;
//         sum += pow(remainder, numOfDigits);
//         num /= 10;
//     }
//     return (sum);
// }

int isArmStrong(int num) {
    int originalNum=num;
    int numOfDigits = (int)log10(num) + 1;
    int sum=0;
    while (num != 0)
    {
        int remainder = num % 10;
        sum += pow(remainder, numOfDigits);
        num /= 10;
    }
    return (sum == originalNum);
}

void main(){
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

   if(isArmStrong(num)) printf("Armstrong number");
   else printf("not armstrong number.");
}