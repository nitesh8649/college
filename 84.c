#include <stdio.h>

struct Book {
    int bookID;
    char title[100];
    char author[100];
    float price;
};

void readAndDisplayBook(struct Book *b);

int main() {
    struct Book book1;
    
    readAndDisplayBook(&book1);

    return 0;
}

void readAndDisplayBook(struct Book *b) {
    printf("Enter Book ID: ");
    scanf("%d", &b->bookID);
    
    getchar();
    printf("Enter Book Title: ");
    fgets(b->title, sizeof(b->title), stdin);
    
    printf("Enter Book Author: ");
    fgets(b->author, sizeof(b->author), stdin);
    
    printf("Enter Book Price: ");
    scanf("%f", &b->price);

    printf("\nBook Information:\n");
    printf("Book ID: %d\n", b->bookID);
    printf("Title: %s", b->title);
    printf("Author: %s", b->author);
    printf("Price: %.2f\n", b->price);
}