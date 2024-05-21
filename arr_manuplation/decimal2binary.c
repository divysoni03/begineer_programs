#include<stdio.h>
#include<math.h>

int dec2binary(int num){
    int temp=num;

    int bin=0;
    // int power=0;
    while(temp != 0){
        int rem = temp%2;
        // bin = bin + (rem * pow(10,power));
        bin = (bin*10) + rem;
        // power++;
        temp /= 2;
        
    }

    return bin;
}

int bin2decimal(int num){
    int temp=num;

    int dec=0,power=0;
    while (temp != 0){
        int rem=temp%10;
        dec= dec+(rem*pow(2,power));
        // dec = (dec*2)+rem;
        power++;
        temp/=10;
        
    }

    return dec;
}

void main(){
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("%d",dec2binary(num));
    // printf("%d",bin2decimal(num));
}

/*
decimal to binary : 

8%2 = 8-4*2 rem=0


*/

/*
//by shrey sir


#include<stdio.h>

void decimalToBinary(int num) {
    int binary[32];
    int i=0;

    while(num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }

    printf("\nThe Binary value is: ");
    for (int j=i-1; j>=0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum;
    printf("\nInput any decimal number: ");
    scanf("%d", &decimalNum);

    decimalToBinary(decimalNum);

    return 0;
}
*/