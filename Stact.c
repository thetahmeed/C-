#include<stdio.h>

struct Student {
    int id;
    char name[30];
    float percentage;
} student1, student2, student3;

int main()
{
    printf("Enter student 1 id: ");
    scanf("%d", &student1.id);

    printf("\nEnter student 1 name: ");
    scanf("%s", &student1.name);

    printf("\nEnter student 1 percentage: ");
    scanf("%f", &student1.percentage);

    // Printing values
    printf("\n\nEnter student 1 id is: %d", student1.id);
    printf("\nEnter student 1 name is: %s", student1.name);
    printf("\nEnter student 1 percentage is: %f", student1.percentage);

    return 0;
}
