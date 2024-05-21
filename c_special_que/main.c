// Problem Statement:
// You are tasked with developing a program in C to manage a bookstore's inventory system. The program should allow the user to perform various operations efficiently using pointers, structures, and arrays. The functionality of the program includes:

// 1. Adding a new book to the inventory, including details such as title, author, ISBN, price, and quantity available.
// 2. Displaying the details of all books in the inventory.
// 3. Searching for a book by its title or ISBN and displaying its details.
// 4. Updating the quantity available for a particular book.
// 5. Removing a book from the inventory.
// 6. Generating a report showing the top N bestselling books based on sales.
// 7. Implementing a feature to handle discounts or promotions on certain books.
// 8. Implementing a feature to calculate and display the total revenue earned by the bookstore.
// 9. Exiting the program.

// Ensure that the program handles edge cases gracefully, such as invalid input, insufficient quantity during sales, and memory management to avoid memory leaks. Additionally, consider implementing efficient algorithms for searching and sorting operations to optimize the performance of the program.


#include<stdio.h>
#include<stdlib.h> // for exit func 
#include<string.h>

#define MAX_BOOK 10 // defining max 10 books allowing
int quantity=0,numofbooks; // total number of all books


struct Bookstore {
    char title[20],auther[20];
    long isbn;
    float price;
    int quantity_book;
};


void addBooktofile(struct Bookstore book){
    FILE *books;
    books = fopen("books.txt", "a");
    if(books == NULL){
        printf("\nFile is NULL , Invalid please open again !! ");
        exit(0);
    }
    fprintf(books,"%s, ",book.title);
    fprintf(books,"%s, ",book.auther);
    fprintf(books,"%ld, ",book.isbn);
    fprintf(books,"%.2f, ",book.price);
    fprintf(books,"%d\n",book.quantity_book);

    fclose(books);
}

void searchingBook(struct Bookstore book[]){
    printf("--------searching methode started !! ----------");
    char title[20];
    printf("\nEnter title to search the book : ");
    fflush(stdin);
    scanf("%[^\n]",title);

    for(int i=0;i<numofbooks;i++){
        if(strcmp(book[i].title,title)==0){
            printf("Book founded !! ");
            printf("\n\n-------Book-------");
            printf("\nTitle : %s",book[i].title);
            printf("\nAuther : %s",book[i].auther);
            printf("\nISBN : %ld",book[i].isbn);
            printf("\nPrice : %.2f",book[i].price);
            printf("\nQuantity of Books available : %d",book[i].quantity_book);
            break;
        }
    }
}

void removeBook(struct Bookstore book[]){
    int i;
    printf("\n----------Removing Book----------\nEnter Book number to remove it : ");
    scanf("%d",&i);
    book[i].auther == '\0';
    book[i].title == '\0';
    book[i].isbn == 0;
    book[i].price == 0.0;
    book[i].quantity_book == 0;
}

struct Bookstore addnewBook(){
    struct Bookstore book;

    printf("\n-------------Adding New Book-------------");

    printf("\nEnter ISBN : ");
    scanf("%ld",&book.isbn);

    fflush(stdin);
    printf("\nEnter Title : ");
    scanf("%[^\n]",book.title);

    fflush(stdin);
    printf("\nEnter Auther : ");
    scanf("%[^\n]",book.auther);

    fflush(stdin);
    printf("\nEnter price : ");
    scanf("%f",&book.price);

    fflush(stdin);
    printf("\nEnter quantity of books : ");
    scanf("%d",&book.quantity_book);

    //checking condition of 10 books
    if((book.quantity_book+quantity) > 10){
        printf("Invalid number of books , You can't add %d books at this time add again !! ",book.quantity_book);
        scanf("%d",&book.quantity_book);
    }
    //adding books to main quantitu of books
    quantity+=book.quantity_book;
    
    // FILE *books; 
    // books = fopen("books.txt","w");
    // // book = fopen("books.txt","w");
    // if(books == NULL){
    //     printf("\nFile is NULL , Invalid please open again !! ");
    //     exit(0);
    // }
    // for(int i=0;i<numofbooks;i++){
    //     // fprintf(books,"%s, %s, %ld, %f, %d\n",book.title,book.auther,book.isbn,book.price,book.quantity_book);
    //     int flag = fwrite(&book[i], sizeof(struct book),1,books);
    // }
    // fclose(books);

    // addBooktofile(book[]); //printing book details in file

    return book;
}

void displayBooksdetail(struct Bookstore book[]){
    for(int i=0;i<numofbooks;i++){
        printf("\n\n-------Book-------");
        printf("\nTitle : %s",book[i].title);
        printf("\nAuther : %s",book[i].auther);
        printf("\nISBN : %ld",book[i].isbn);
        printf("\nPrice : %.2f",book[i].price);
        printf("\nQuantity of Books available : %d",book[i].quantity_book);
    }
}

// void updatingQuantity(int *quantity_update){
//     printf("\nEnter new quantity number : ");
//     scanf("%d",&quantity_update);
// }

int main(){

    int num; //greating part 
    printf("\n\t-------------Welcome to our book Store-------------\nWE have currently %d Books in the store.",quantity);
    
    printf("\nEnter the no. of Books: ");
    scanf("%d", &num);

    struct Bookstore book[MAX_BOOK]; //making 10 books structure array 
    //scanning Books
    for (numofbooks = 0; numofbooks <num; numofbooks++) {
        book[numofbooks] = addnewBook();
        addBooktofile(book[numofbooks]);
    }
    
    //intrecting part !!! 
    int choice; // making choice variable so user can interact
    do {
        printf("\n\n---------Enter your choice--------- : \n1.add new book\n2.display books\n3.search a book\n4.update quantity of book\n5.remove books\n6.\n7.\n8.\n9.Exiting program");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                book[numofbooks++]=addnewBook();
                break;
            case 2:
                displayBooksdetail(book);
                break;
            case 3:
                searchingBook(book);
                break;
            case 4:{
                int i,new_quantity;
                printf("Enter number of book and new quantity : ");
                scanf("%d %d",&i,&new_quantity );
                book[i].quantity_book = new_quantity;
                break;
            }
            case 5:
                removeBook(book);
                break;
            case 6:

            case 7:
            case 8:
            case 9:
                printf("Thank you for shopping with us !!!");
                break;
            default :
                printf("\nInvalid Input !! Run again !!");
        }
    }
    while(choice<9 );
}