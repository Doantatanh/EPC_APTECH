#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int publicationYear;
    float price;
};

int addBook(struct Book books[], int currentIndex) {
    if (currentIndex >= 10) {
        printf("Library is full. Cannot add more books.\n");
        return currentIndex;
    }

    struct Book newBook;
    printf("Enter title: ");
    scanf(" %[^\n]", newBook.title);
    printf("Enter author: ");
    scanf(" %[^\n]", newBook.author);
    printf("Enter publication year: ");
    scanf("%d", &newBook.publicationYear);
    printf("Enter price: ");
    scanf("%f", &newBook.price);

    // Print debug information
    printf("Debug: Title: %s, Author: %s, Year: %d, Price: %.2f\n",
           newBook.title, newBook.author, newBook.publicationYear, newBook.price);

    books[currentIndex] = newBook;
    printf("Book added successfully!\n");
    return currentIndex + 1;
}

void displayBooks(struct Book books[], int currentIndex) {
    for (int i = 0; i < currentIndex; i++) {
        printf("Title: %s, Author: %s, Publication Year: %d, Price: %.2f\n",
               books[i].title, books[i].author, books[i].publicationYear, books[i].price);
    }
}

void updateBook(struct Book books[], int currentIndex) {
    char title[100];
    printf("Enter the title of the book to update: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < currentIndex; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Enter new title: ");
            scanf(" %[^\n]", books[i].title);
            printf("Enter new author: ");
            scanf(" %[^\n]", books[i].author);
            printf("Enter new publication year: ");
            scanf("%d", &books[i].publicationYear);
            printf("Enter new price: ");
            scanf("%f", &books[i].price);
            printf("Book updated successfully!\n");
            return;
        }
    }
    printf("Book not found.\n");
}

struct Book* findMostExpensiveBook(struct Book books[], int currentIndex) {
    if (currentIndex == 0) return NULL;
    struct Book* mostExpensive = &books[0];
    for (int i = 1; i < currentIndex; i++) {
        if (books[i].price > mostExpensive->price) {
            mostExpensive = &books[i];
        }
    }
    return mostExpensive;
}

struct Book* findCheapestBook(struct Book books[], int currentIndex) {
    if (currentIndex == 0) return NULL;
    struct Book* cheapest = &books[0];
    for (int i = 1; i < currentIndex; i++) {
        if (books[i].price < cheapest->price) {
            cheapest = &books[i];
        }
    }
    return cheapest;
}

float calculateTotalValue(struct Book books[], int currentIndex) {
    float total = 0;
    for (int i = 0; i < currentIndex; i++) {
        total += books[i].price;
    }
    return total;
}

void sortBooksByPriceDescending(struct Book books[], int currentIndex) {
    for (int i = 0; i < currentIndex - 1; i++) {
        for (int j = i + 1; j < currentIndex; j++) {
            if (books[i].price < books[j].price) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

float calculateAveragePrice(struct Book books[], int currentIndex) {
    if (currentIndex == 0) return 0;
    return calculateTotalValue(books, currentIndex) / currentIndex;
}

int main() {
    struct Book books[10];
    int currentIndex = 0;
    int choice = 0;
    do {
        printf("\nMenu:\n");
        printf("1. Add a new book\n");
        printf("2. Display all books\n");
        printf("3. Update book details by title\n");
        printf("4. Find the most expensive book\n");
        printf("5. Find the cheapest book\n");
        printf("6. Calculate total value of books\n");
        printf("7. Sort books by price (descending)\n");
        printf("8. Calculate average price of books\n");
        printf("9. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                currentIndex = addBook(books, currentIndex);
                break;
            case 2:
                displayBooks(books, currentIndex);
                break;
            case 3:
                updateBook(books, currentIndex);
                break;
            case 4: {
                struct Book* mostExpensive = findMostExpensiveBook(books, currentIndex);
                if (mostExpensive) {
                    printf("Most Expensive Book:\n");
                    printf("Title: %s, Author: %s, Publication Year: %d, Price: %.2f\n",
                           mostExpensive->title, mostExpensive->author,
                           mostExpensive->publicationYear, mostExpensive->price);
                } else {
                    printf("No books in the library.\n");
                }
                break;
            }
            case 5: {
                struct Book* cheapestBook = findCheapestBook(books, currentIndex);
                if (cheapestBook) {
                    printf("Cheapest Book:\n");
                    printf("Title: %s, Author: %s, Publication Year: %d, Price: %.2f\n",
                           cheapestBook->title, cheapestBook->author,
                           cheapestBook->publicationYear, cheapestBook->price);
                } else {
                    printf("No books in the library.\n");
                }
                break;
            }
            case 6: {
                float totalValue = calculateTotalValue(books, currentIndex);
                printf("Total value of books: %.2f\n", totalValue);
                break;
            }
            case 7:
                sortBooksByPriceDescending(books, currentIndex);
                printf("Books sorted by price in descending order.\n");
                displayBooks(books, currentIndex);
                break;
            case 8: {
                float averagePrice = calculateAveragePrice(books, currentIndex);
                printf("Average price of books: %.2f\n", averagePrice);
                break;
            }
            case 9:
                printf("Exiting program.\n");
                // Exit the loop will happen naturally when choice is 10
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 10);  // Exit loop if choice is 10

    return 0;
}

