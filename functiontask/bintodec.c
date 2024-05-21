#include<stdio.h>
#include<math.h>

void dectobin(int n){
    int myNUM = n;
    int power = 0;
    int binNUM = 0;

    while( n > 0 ){
        int reminder = n % 2;
        binNUM += (reminder * pow(10,power));

        power++;
        n = n/2;
    }
    printf("binary of %d = %d",myNUM,binNUM);
}

    
void main() {
    int n;
    printf("Enter Your Number to convert into binary : ");
    scanf("%d",&n);

    dectobin(n);
}