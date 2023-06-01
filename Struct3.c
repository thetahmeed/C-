
// Inputs: Id, Name, Mid, Final, Quiz*2, Attendance

#include<stdio.h>

struct Student
{
    int id;
    char name[30];
    float mid, fin, q1, q2, q3, att, total;

} record[50];

int main()
{
    int i, n, sea, found;

    printf("Enter the number of the students: ");
    scanf("%d", &n);

    // Getting data
    for(i=0; i<n; i++)
    {
        printf("Enter student %d id: ", i+1);
        scanf("%d", &record[i].id);

        printf("\nEnter student %d name: ", i+1);
        scanf("%s", &record[i].name);

        printf("\nEnter student %d mid: ", i+1);
        scanf("%f", &record[i].mid);

        printf("\nEnter student %d final: ", i+1);
        scanf("%f", &record[i].fin);

        printf("\nEnter student %d quiz 1: ", i+1);
        scanf("%f", &record[i].q1);

        printf("\nEnter student %d quiz 2: ", i+1);
        scanf("%f", &record[i].q2);

        printf("\nEnter student %d attendance: ", i+1);
        scanf("%f", &record[i].att);

        if(record[i].q1 > record[i].q2)
        {
            record[i].q3 = record[i].q1;
        }
        else
        {
            record[i].q3 = record[i].q2;
        }


        record[i].total = record[i].mid + record[i].fin + record[i].q3 + record[i].att;
    }


/*
    // Printing all values
    for(i=0; i<n; i++)
    {
        printf("\n\nStudent %d id is: %d", i+1, record[i].id);
        printf("\nStudent %d name is: %s", i+1, record[i].name);
        printf("\nStudent %d mid is: %f", i+1, record[i].mid);
        printf("\nStudent %d final is: %f", i+1, record[i].fin);
        printf("\nStudent %d best quiz is: %f", i+1, record[i].q3);
        printf("\nStudent %d attendance is: %f", i+1, record[i].att);
        printf("\nStudent %d total number is: %f", i+1, record[i].total);
    }*/

    printf("\n-----------\n");
    printf("\nEnter student id to get result: ");
    scanf("%d", &sea);

    for(i=0; i<n; i++)
    {
        if(sea == record[i].id)
        {
            printf("\n\nStudent %d id is: %d", i+1, record[i].id);
            printf("\nStudent %d name is: %s", i+1, record[i].name);
            printf("\nStudent %d mid is: %f", i+1, record[i].mid);
            printf("\nStudent %d final is: %f", i+1, record[i].fin);
            printf("\nStudent %d best quiz is: %f", i+1, record[i].q3);
            printf("\nStudent %d attendance is: %f", i+1, record[i].att);
            printf("\nStudent %d total number is: %f", i+1, record[i].total);
            found = 1;
            break;
        }
    }

    if(found != 1){
        printf("\nStudent not found.");
    }


    return 0;
}
