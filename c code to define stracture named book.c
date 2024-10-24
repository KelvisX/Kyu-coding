#include <stdio.h>
#include <string.h>

// Define a structure named 'book'
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    // Part ii) Declare and initialize the structure variable
    struct book myBook;

    // Initialize the fields
    strcpy(myBook.title, "Introduction to C Programming");
    strcpy(myBook.author, "John Smith");
    myBook.publication_year = 2022;
    strcpy(myBook.ISBN, "9780131103627");
    myBook.price = 49.99;

    // Part iii) Print the values of the fields
    printf("Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    // Part iv) Prompt the user to enter the details
    printf("\nEnter book details:\n");
    printf("Enter title: ");
    scanf(" %[^\n]s", myBook.title);
    
    printf("Enter author: ");
    scanf(" %[^\n]s", myBook.author);
    
    printf("Enter publication year: ");
    scanf("%d", &myBook.publication_year);
    
    printf("Enter ISBN: ");
    scanf("%s", myBook.ISBN);
    
    printf("Enter price: ");
    scanf("%f", &myBook.price);

    // Print the entered book details
    printf("\nEntered Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}