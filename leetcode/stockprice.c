/*
2. Best Time to Buy and Sell Stock
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.buying 
Note that on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
*/

#include<stdio.h>

int minimum(int price[], int size){
    int min=price[0];
    for(int i=0;i<size;i++){
        if(price[i]<min){
            min=price[i];
        }
    }
    return min;
}

int maximum(int price[], int size, int index){
    int max=price[index];
    for(int i=index;i<size;i++){
        if(price[i]>max){
            max=price[i];
        }
    }
    return max;
}

void main(){
    int price[]={7,1,5,3,6,4}, size, i;
    size=sizeof(price)/sizeof(price[0]);

    // printf("Enter how many prices u want to Enter : ");
    // scanf("%d",&size);

    // printf("Enter %d prices of shares : ",size);
    // for(i=0;i<size;i++){
    //     printf("Price on day %d : ",i+1);
    //     scanf("%d",&price[i]);
    // }

    printf("\nInput : prices[%d] : [",size); 
    for(i=0;i<size;i++){
        printf("%d ,",price[i]); 
    }
    printf("\b\b]");

    int mini = minimum(price,size);
    int index;
    for(i=0;i<size;i++){
        if(price[i]==mini) index=i;
    }
    int max = maximum(price,size,index);

    printf("\nProfite : %d",max-mini);
}
