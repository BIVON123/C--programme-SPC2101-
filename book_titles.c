/*
Name:bivon nyandiko
Reg no:PA106/G/28825/25
Description:c program allowing the storage of book titles borrowed.
*/

#include <stdio.h>

int main() {
    char title[100];
    FILE *file = fopen("C:\\Users\\User\\OneDrive\\Desktop\\borrowedbooks.txt", "a"); // Open in append mode

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin); 

    fprintf(file, "%s", title); 
    fclose(file); 

    printf("Book title successfully stored in borrowed_books.txt\n");
    return 0;
}