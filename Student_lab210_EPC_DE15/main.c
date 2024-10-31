#include <stdio.h>
#include <string.h>

struct Painting
{
    char title[100];
    char artist[100];
    float price;
};

void displayPainting(struct Painting *p)
{
    printf("Title: %s\n", p->title);
    printf("Artist: %s\n", p->artist);
    printf("Price: %.2f\n\n", p->price);
}

struct Painting *findMostExpensivePainting(struct Painting gallery[], int count)
{
    if (count == 0)
    {
        return NULL;
    }
    struct Painting *mostExpensive = &gallery[0];

    for (int i = 1; i < count; i++)
    {
        if (gallery[i].price > mostExpensive->price)
        {
            mostExpensive = &gallery[i];
        }
    }
    return mostExpensive;
}

struct Painting *findCheapestPainting(struct Painting gallery[], int count)
{
    if (count == 0)
    {
        return NULL;
    }
    struct Painting *cheapest = &gallery[0];

    for (int i = 1; i < count; i++)
    {
        if (gallery[i].price < cheapest->price)
        {
            cheapest = &gallery[i];
        }
    }
    return cheapest;
}

float calculateTotalValue(struct Painting gallery[], int count)
{
    float total = 0.0;
    for (int i = 0; i < count; i++)
    {
        total += gallery[i].price;
    }
    return total;
}

float calculateAveragePrice(struct Painting gallery[], int count)
{
    if (count == 0)
    {
        return 0.0;
    }
    return calculateTotalValue(gallery, count) / count;
}

void searchPainting(struct Painting gallery[], int count)
{
    char searchTitle[100];
    printf("Enter the title of the painting you want to search for: ");
    scanf(" %[^\n]%*c", searchTitle);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(gallery[i].title, searchTitle) == 0)
        {
            displayPainting(&gallery[i]);
            return;
        }
    }
    printf("Painting with title '%s' not found.\n", searchTitle);
}

void sortPaintingsByPrice(struct Painting gallery[], int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (gallery[j].price < gallery[j + 1].price)
            {
                struct Painting temp = gallery[j];
                gallery[j] = gallery[j + 1];
                gallery[j + 1] = temp;
            }
        }
    }
}

int main()
{
    struct Painting gallery[10];
    int choice;
    int count = 0;

    do
    {
        printf("Menu:\n");
        printf("1. Add a new painting\n");
        printf("2. Display painting information\n");
        printf("3. Update painting price\n");
        printf("4. Search for a painting\n");
        printf("5. Find the most expensive painting\n");
        printf("6. Find the cheapest painting\n");
        printf("7. Calculate total value of paintings\n");
        printf("8. Calculate average price of paintings\n");
        printf("9. Sort paintings by price\n");
        printf("10. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (count < 10)
            {
                printf("Enter Title: ");
                scanf(" %[^\n]%*c", gallery[count].title);
                printf("Enter Artist: ");
                scanf(" %[^\n]%*c", gallery[count].artist);
                printf("Enter Price: ");
                scanf("%f", &gallery[count].price);
                count++;
            }
            else
            {
                printf("Gallery is full!\n");
            }
            break;

        case 2:
            if (count == 0)
            {
                printf("No paintings in memory.\n");
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    displayPainting(&gallery[i]);
                }
            }
            break;

        case 3:
            if (count == 0)
            {
                printf("No data to update.\n");
            }
            else
            {
                char titleName[100];
                int found = 0;
                printf("Enter title to update: ");
                scanf(" %[^\n]%*c", titleName);

                for (int i = 0; i < count; i++)
                {
                    if (strcmp(gallery[i].title, titleName) == 0)
                    {
                        printf("Enter new price: ");
                        scanf("%f", &gallery[i].price);
                        printf("Price updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    printf("Painting with title '%s' not found.\n", titleName);
                }
            }
            break;

        case 4:
            searchPainting(gallery, count);
            break;

        case 5:
        {
            struct Painting *mostExpensive = findMostExpensivePainting(gallery, count);
            if (mostExpensive)
            {
                printf("Most expensive painting:\n");
                displayPainting(mostExpensive);
            }
            else
            {
                printf("No paintings in memory.\n");
            }
            break;
        }

        case 6:
        {
            struct Painting *cheapest = findCheapestPainting(gallery, count);
            if (cheapest)
            {
                printf("Cheapest painting:\n");
                displayPainting(cheapest);
            }
            else
            {
                printf("No paintings in memory.\n");
            }
            break;
        }

        case 7:
        {
            float totalValue = calculateTotalValue(gallery, count);
            printf("Total value of paintings: %.2f\n", totalValue);
            break;
        }

        case 8:
        {
            float averagePrice = calculateAveragePrice(gallery, count);
            printf("Average price of paintings: %.2f\n", averagePrice);
            break;
        }

        case 9:
        {
            sortPaintingsByPrice(gallery, count);
            printf("Paintings sorted by price in descending order:\n");
            for (int i = 0; i < count; i++)
            {
                displayPainting(&gallery[i]);
            }
            break;
        }

        case 10:
            printf("Exiting the program.\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n\n");
            break;
        }
    } while (choice != 10);

    return 0;
}
