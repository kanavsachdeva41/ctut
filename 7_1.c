/*  Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details. */
#include <stdio.h>

struct book
{
    int book_id;
    char title[50];
    char author_name[100];
    int price;
};

int main()
{
    struct book mybook= {1234, "VRMHURSAN", "kutub kumar", 90};
    printf("Book Details:\n");
    printf("Book_id: %d\n", mybook.book_id);
    printf("Title: %s\n", mybook.title);
    printf("Author name: %s\n", mybook.author_name);
    printf("Price: %d", mybook.price);
}
