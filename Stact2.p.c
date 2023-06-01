#include<stdio.h>

struct Student
{
    int id;
    char name[30];
    float percentage;
} record[5];

int main()
{
    int i, n, sea, found ;

    printf("Enter the size of the structure: ");
    scanf("%d", &n);

    // Getting data
    for(i=0; i<n; i++)
    {
        printf("Enter student %d id: ", i+1);
        scanf("%d", &record[i].id);

        printf("\nEnter student %d name: ", i+1);
        scanf("%s", &record[i].name);

        printf("\nEnter student %d percentage: ", i+1);
        scanf("%f", &record[i].percentage);
    }

    printf("\nEnter student id to get result: ");
    scanf("%d", &sea);

    for(i=0; i<n; i++)
    {
        if(sea == record[i].id){
           printf("\nStudent %d percentage is: %f", i+1, record[i].percentage);
           found = 1;
        }
    }

    if(found != 1){
         printf("\nStudent id is invalid");
    }

    /*
    // Printing all values
    for(i=0; i<n; i++)
    {
        printf("\n\nStudent %d id is: %d", i+1, record[i].id);
        printf("\nStudent %d name is: %s", i+1, record[i].name);
        printf("\nStudent %d percentage is: %f", i+1, record[i].percentage);
    }
    */

    return 0;
}
