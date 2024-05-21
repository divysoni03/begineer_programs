// 18. Write a program in C to find the frequency of characters .
#include<stdio.h>
#include<string.h>

void bubbleSort(char arr[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    char str[100];
    int i,j;
    printf("\nEnter a string : ");
    gets(str);

    str[strcspn(str, "\n")] = '\0';

    bubbleSort(str,strlen(str));

    int count = 1;
    for (i = 0; i < strlen(str); i++) {
        count = 1;
        for (j = i; j < strlen(str); j++) {
            if (str[j] == str[j+1]) {
                count++;
            } 
            else{
                break;
            }
        }
        printf("\ncharacter %c is repeating %d times.", str[i], count);
        i += (count - 1);
    }
}