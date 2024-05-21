// 9. Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>
#include<string.h>

// int main(){
//     char str[20];
//     printf("\nEnter a string : ");
//     scanf("%[^\n]s",str);

//     int length=0;
//     while(str[length]!='\0'){
//         printf("%c",str[length]);
//         length++;
//     }
// }

int main() {
    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        // if (str[i] >= 'A' && str[i] <= 'Z')  // Convert uppercase letters to lowercase
        //     str[i] += 32;
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        else if (str[i] >= 'a' && str[i] <= 'z')  // Check for consonants
            consonants++;
        else if(str[i]>='A' && str[i]<='Z') 
            consonants++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
