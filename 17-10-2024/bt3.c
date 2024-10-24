#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char name[20];
    char country[20];
    int birthyear;
    float mark;
} Student;

void displayStudents(Student *students, int numberOfStudents)
{
    int i;
    for (i = 0; i < numberOfStudents; i++)
    {
        Student *student = students + i;
        printf("Name: %s, country: %s, birth year : %d, mark : %f \n",
               student->name,
               student->country,
               student->birthyear,
               student->mark);
    }
}

void sort(Student *students, int numberOfStudents) {
	int i,j;
	for (i = 0; i < numberOfStudents - 1; i++)
	{
		for (j = i + 1; j < numberOfStudents; j++)
		{
			bool condition = strcmp((students+i)->name, (students+j)->name) > 0;
			if(condition == true) {
				Student temp = *(students+i);
				*(students+i) = *(students+j);
				*(students+j) = temp;
			}
		}
	}
}

void menu()
{
    Student *students = (Student *)malloc(100 * sizeof(Student));
    int choice = 0;
    int numberOfStudents = 0;
    do
    {
        printf("Student management system\n");
        printf("1. Input students |2. Sort Students |3. Display Students |4. exit\n");
        printf("Enter your choice(1,2,3,4): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            do
            {
                printf("Enter number of students: \n");
                scanf("%d", &numberOfStudents);
            } while (numberOfStudents < 0 || numberOfStudents > 100);
            for (int i = 0; i < numberOfStudents; i++)
            {
                // student con trở trở đến sinh viên chữ i
                Student *student = students /* địa chỉ */ + i;
                printf("Hãy Nhập Tên: ");
                scanf(" %[^\n]", student->name);
                printf("Hãy Nhập Địa chỉ: ");
                scanf(" %[^\n]", student->country);
                printf("Hãy Nhập Năm Sinh: ");
                scanf(" %d", &(student->birthyear));
                printf("Hãy Nhập Điểm: ");
                scanf(" %f", &(student->mark));
            }

            break;

        case 2:
            sort(students, numberOfStudents);
            break;

        case 3:
           displayStudents(students, numberOfStudents);
            break;

        default:
            if (choice < 0 || choice > 4)
            {
                printf("Please choice 1- 4\n");
                break;
            }
            break;
        }
    } while (choice != 4);
    free (students);
}

int main()
{
    menu();
    return 0;
}
