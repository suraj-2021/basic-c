#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 100
#define MAX_AUTHOR 100
#define MAX_ISBN 20

typedef struct {
    char isbn[MAX_ISBN];
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    float price;
} Book;

// Function prototypes
void addBook(Book books[], int *count);
void displayBooks(const Book books[], int count);
int searchBookByISBN(const Book books[], int count, const char *isbn);
void updateBook(Book books[], int count, const char *isbn);
void deleteBook(Book books[], int *count, const char *isbn);
void saveToFile(const Book books[], int count, const char *filename);
void loadFromFile(Book books[], int *count, const char *filename);

int main() {
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char isbn[MAX_ISBN];
    char filename[50];

    // Load books from file at the start
    printf("Enter the filename to load book records from: ");
    scanf("%s", filename);
    loadFromFile(books, &count, filename);

    do {
        // Menu
        printf("\nLibrary Management System\n");
        printf("1. Add a new book\n");
        printf("2. Display all books\n");
        printf("3. Search book by ISBN\n");
        printf("4. Search book by Author\n");
        printf("5. Search book by Title\n");
        printf("6. Update a book record\n");
        printf("7. Delete a book record\n");
        printf("8. Save book records to file\n");
        printf("9. Load book records from file\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                printf("Enter ISBN to search: ");
                scanf("%s", isbn);
                if (searchBookByISBN(books, count, isbn) == -1) {
                    printf("Book not found!\n");
                }
                break;
            case 6:
                printf("Enter ISBN of the book to update: ");
                scanf("%s", isbn);
                updateBook(books, count, isbn);
                break;
            case 7:
                printf("Enter ISBN of the book to delete: ");
                scanf("%s", isbn);
                deleteBook(books, &count, isbn);
                break;
            case 8:
                printf("Enter filename to save the book records: ");
                scanf("%s", filename);
                saveToFile(books, count, filename);
                break;
            case 9:
                printf("Enter filename to load book records: ");
                scanf("%s", filename);
                loadFromFile(books, &count, filename);
                break;
            case 10:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 10);

    return 0;
}

// Add a new book to the library
void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full!\n");
        return;
    }

    printf("Enter ISBN: ");
    scanf("%s", books[*count].isbn);
    printf("Enter Title: ");
    getchar(); // to consume newline character
    fgets(books[*count].title, MAX_TITLE, stdin);
    strtok(books[*count].title, "\n"); // Remove newline character
    printf("Enter Author: ");
    fgets(books[*count].author, MAX_AUTHOR, stdin);
    strtok(books[*count].author, "\n"); // Remove newline character
    printf("Enter Price: ");
    scanf("%f", &books[*count].price);

    (*count)++;
    printf("Book added successfully!\n");
}

// Display all books in the library
void displayBooks(const Book books[], int count) {
    if (count == 0) {
        printf("No books available!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Book %d:\n", i + 1);
        printf("ISBN: %s\n", books[i].isbn);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n\n", books[i].price);
    }
}

// Search for a book by its ISBN
int searchBookByISBN(const Book books[], int count, const char *isbn) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].isbn, isbn) == 0) {
            printf("Book found!\n");
            printf("ISBN: %s\n", books[i].isbn);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n", books[i].price);
            return i;
        }
    }
    return -1;
}

// Update a book record
void updateBook(Book books[], int count, const char *isbn) {
    int index = searchBookByISBN(books, count, isbn);
    if (index == -1) {
        printf("Book not found!\n");
        return;
    }

    printf("Enter new Title: ");
    getchar(); // to consume newline character
    fgets(books[index].title, MAX_TITLE, stdin);
    strtok(books[index].title, "\n"); // Remove newline character
    printf("Enter new Author: ");
    fgets(books[index].author, MAX_AUTHOR, stdin);
    strtok(books[index].author, "\n"); // Remove newline character
    printf("Enter new Price: ");
    scanf("%f", &books[index].price);

    printf("Book updated successfully!\n");
}

// Delete a book record
void deleteBook(Book books[], int *count, const char *isbn) {
    int index = searchBookByISBN(books, *count, isbn);
    if (index == -1) {
        printf("Book not found!\n");
        return;
    }

    for (int i = index; i < *count - 1; i++) {
        books[i] = books[i + 1];
    }
    (*count)--;
    printf("Book deleted successfully!\n");
}

// Save book records to a file
void saveToFile(const Book books[], int count, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s,%s,%s,%.2f\n", books[i].isbn, books[i].title, books[i].author, books[i].price);
    }

    fclose(file);
    printf("Book records saved successfully!\n");
}

// Load book records from a file
void loadFromFile(Book books[], int *count, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }

    *count = 0;
    while (fscanf(file, "%[^,],%[^,],%[^,],%f\n", books[*count].isbn, books[*count].title, books[*count].author, &books[*count].price) == 4) {
        (*count)++;
    }

    fclose(file);
    printf("Book records loaded successfully!\n");
}
