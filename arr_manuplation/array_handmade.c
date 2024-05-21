/*

char arr[] = {'!', 'T', 'h', '1', 's', 'S', 't', 'r', '!', 'n', 'g', 'H', '@', 's', '2', '1', '0', 'C', 'h', 'a', 'r', 'a', 'c', 't', 'e', 'r', 's', '@', 'f', 'o', 'r', 'A', 'n', '@', 'l', 'y', 'z', 'i', 'n', 'g', 'C', 'h', 'a', 'r', 'A', 'r', 'r', 'a', 'y', '#', 'w', 'i', 't', 'h', 'N', 'u', 'm', 'b', 'e', 'r', 's', '*', 'a', 'n', 'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', '!', 'C', 'h', 'a', 'r', 'a', 'c', 't', 'e', 'r', 's', '9', '8', '7', '6', '5', '4', '3', '2', '1', '0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '?', '+', '-', '*', '/', '%', '&', '$'};


1. Extract numbers from the string
2. Extract capital alphabets from the string
3. Extract small alphabets from the string
4. Extract all special characters
5. remove numbers
6. remove special characters
7. case conversion: small to big, big to small
8. split array -> 'E' (user will enter the char)
9. replace -> 'e', 'A' (user will enter the chars)
10. indexOf('d') -> return the first occurence's index of the char
11. valueOf(23) -> return the char present at 23rd index
12. Length(0) -> returns the length of the whole array;
13. countDigits -> returns the count of numbers in the array
14. countcapsalpha -> returns the count of capital alphabets in the array
15. countsmallalpha -> returns the count of small alphabets in the array
16. countspecialcharacter -> returns the count of special characters in the array

*/

#include<stdio.h>
#include<string.h>

//1
void numbers(char arr[], int size){
    printf("\nPrinting numbers from array : ");
    for(int i=0;i<size;i++){
        int check=arr[i];
        if(check>=48 && check<=57){
            printf("%c ,",arr[i]);
        }
        else{
            continue;
        }
    }
    printf("\n");
}

//2
void capitalalfabet(char arr[],int size){
    printf("Printing numbers from array : ");
    for(int i=0;i<size;i++){
        int check=arr[i];
        if(check>=65 && check<=90){
            printf("%c ,",arr[i]);
        }
        else{
            continue;
        }
    }
    printf("\n");
}

//3
void smallalfabet(char arr[], int size){
    printf("Printing numbers from array : ");
    for(int i=0;i<size;i++){
        int check=arr[i];
        if(check>=97 && check<=122){
            printf("%c ,",arr[i]);
        }
        else{
            continue;
        }
    }
    printf("\n");
}

//4
void specialchar(char arr[], int size){
    printf("Printing numbers from array : ");
    for(int i=0;i<size;i++){
        int check=arr[i];
        if(check>=33 && check<=47 || check>=58 && check<=64 || check>=91 && check<=96 || check>=123 && check<=126){
            printf("%c ,",arr[i]);
        }
        else{
            continue;
        }
    }
    printf("\n");
}

//5
void removenumber(char arr[],int size){
    int i, j=0;
    char temp[size];
    for(i=0; i<size; i++) {
        if(!(arr[i]>=48 && arr[i]<=57)) temp[j++] = arr[i];
    }
    printf("\n\n");
    for(int i=0;i<j;i++){
        printf("%c ,",temp[i]);
    }
}

//6


//7
void conversion(char arr[],int size){
    for (int i=0;i<size;i++){
        int check=arr[i];
        if (check>=65 && check<=90){
            arr[i]+=32;
        }
        else if(check>=97 && check<=122){
            arr[i]-=32;
        }
        else{
            continue;
        }
    }

    printf("\nCase conversion(small to big, big to small) : ");
    for (int i=0;i<size; i++)
    {
        printf("%c ,",arr[i]);
    }
    
    
}

//8



//9
void replacechars(char arr[],int size){
    char char1,char2;
    printf("\n\nenter two characters to swap : ");
    scanf("%c",char1);
    scanf("%c",char2);

    printf("\n%c ,%c",char1,char2);
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==char1 && arr[j]==char2){
                char temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                break;
            }
        }
    }
}



void main(){
    char arr[] = {'!', 'T', 'h', '1', 's', 'S', 't', 'r', '!', 'n', 'g', 'H', '@', 's', '2', '1', '0', 'C', 'h', 'a', 'r', 'a', 'c', 't', 'e', 'r', 's', '@', 'f', 'o', 'r', 'A', 'n', '@', 'l', 'y', 'z', 'i', 'n', 'g', 'C', 'h', 'a', 'r', 'A', 'r', 'r', 'a', 'y', '#', 'w', 'i', 't', 'h', 'N', 'u', 'm', 'b', 'e', 'r', 's', '*', 'a', 'n', 'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', '!', 'C', 'h', 'a', 'r', 'a', 'c', 't', 'e', 'r', 's', '9', '8', '7', '6', '5', '4', '3', '2', '1', '0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '?', '+', '-', '*', '/', '%', '&', '$'};

    int size=sizeof(arr)/sizeof(arr[0]);
    // numbers(arr,size);
    // capitalalfabet(arr,size);
    // smallalfabet(arr,size);
    // specialchar(arr,size);
    removenumber(arr,size);
    // conversion(arr,size);
    // replacechars(arr,size);

}