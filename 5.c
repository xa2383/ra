#include <stdio.h>
#include <string.h>
#define SIZE 10
typedef struct {
    int bookID;
    char bookName[50];
    char bookAuthor[50];
    float price;
    char publisher[50];
    int year;
} BOOK;
void displayBooksByPublisher(BOOK books[], int count, char publisher[]) {
    printf("Books published by %s:\n", publisher);
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].publisher, publisher) == 0) {
            printf("ID: %d, Name: %s, Author: %s, Price: %.2f, Year: %d\n",
                   books[i].bookID, books[i].bookName, books[i].bookAuthor, books[i].price, books[i].year);
        }
    }
}
void displayBooksByPrice(BOOK books[], int count, float price) {
    printf("Books priced below %.2f:\n", price);
    for (int i = 0; i < count; i++) {
        if (books[i].price < price) {
            printf("ID: %d, Name: %s, Author: %s, Price: %.2f, Publisher: %s, Year: %d\n",
                   books[i].bookID, books[i].bookName, books[i].bookAuthor, books[i].price, books[i].publisher, books[i].year);
        }
    }
}
int main() {
    BOOK books[SIZE];
    for (int i = 0; i < SIZE; i++) {
        printf("Enter details of book %d\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &books[i].bookID);
        getchar();
        printf("Book Name: ");
        gets(books[i].bookName);
        printf("Book Author: ");
        gets(books[i].bookAuthor);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
        printf("Publisher: ");
        gets(books[i].publisher);
        printf("Year: ");
        scanf("%d", &books[i].year);
    }
    displayBooksByPublisher(books, SIZE, "TMH");
    displayBooksByPrice(books, SIZE, 1000.0);
    return 0;
}