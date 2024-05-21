// Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.

#include<stdio.h>
// #include<string.h>

struct Book{
    char title[20],auther[20];
    int price;    
};

struct Book scan(){
    struct Book b;
    printf("\nEnter Book title : ");
    gets(b.title);
    printf("Enter name of auther : ");
    gets(b.auther);
    printf("Enter price of the Book : ");
    scanf("%d",&b.price);

    fflush(stdin);
    return b;
}

void print(struct Book b){
    printf("\n\n------------------- Your Books -------------------");
    printf("\nTitle : %s",b.title);
    printf("\nAuther : %s",b.auther);
    printf("\nPrice of Book : %d",b.price);
}

int main(){
    struct Book b[3];
    for(int i=0;i<3;i++){
        b[i]=scan();
    }
    for(int i=0;i<3;i++){
        print(b[i]);
        printf("\n");
    }
    return 0;
}