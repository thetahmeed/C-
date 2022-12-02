#include<stdio.h>

struct stu_info
{
    char name[30];
    int id;
    float q1, q2, q3, mid, fin, att, ass, total, grade, cgpa;
} record[50];

void printGrade (int mark){
    if(mark > 100){
        printf("\nInvalid");
        return;
    }else if(mark > 80){
        printf("\nStudent grade: A+");
        return;
    }else if(mark > 75){
        printf("\nStudent grade: A");
        return;
    }else if(mark > 70){
        printf("\nStudent grade: A-");
        return;
    }else if(mark > 65){
        printf("\nStudent grade: B+");
        return;
    }else if(mark > 60){
        printf("\nStudent grade: B");
        return;
    }else if(mark > 55){
        printf("\nStudent grade: C+");
        return;
    }else if(mark > 50){
        printf("\nStudent grade: C");
        return;
    }else if(mark > 40){
        printf("\nStudent grade: D");
        return;
    }else if(mark < 40){
        printf("\nStudent grade: F");
        return;
    }
}

float getGPA (int mark){
    if(mark > 100){
        return -1;
    }else if(mark > 80){
        return 4;
    }else if(mark > 75){
        return 3.5;
    }else if(mark > 70){
        return 3;
    }else if(mark > 65){
        return 2.8;
    }else if(mark > 60){
        return 2.6;
    }else if(mark > 55){
        return 2.4;
    }else if(mark > 50){
        return 2.2;
    }else if(mark > 40){
        return 2;
    }else if(mark < 40){
        return 0;
    }
}

int main()
{
    int i, n, sea, found;

    int numberOfSubjects;
    float subjects[50];

    printf("Enter the number of the students: ");
    scanf("%d", &n);

    // Getting data
    for(i=0; i<n; i++)
    {
        printf("\nEnter student %d name: ", i+1);
        scanf("%s", &record[i].name);

        printf("\nEnter student %d id: ", i+1);
        scanf("%d", &record[i].id);

        printf("\nEnter student %d quiz 1 (Max: 10) : ", i+1);
        scanf("%f", &record[i].q1);

        printf("\nEnter student %d quiz 2 (Max: 10) : ", i+1);
        scanf("%f", &record[i].q2);

        printf("\nEnter student %d mid (Max: 30) : ", i+1);
        scanf("%f", &record[i].mid);

        printf("\nEnter student %d final (Max: 40) : ", i+1);
        scanf("%f", &record[i].fin);

        printf("\nEnter student %d attendance (Max: 10) : ", i+1);
        scanf("%f", &record[i].att);

        printf("\nEnter student %d assignment (Max: 10) : ", i+1);
        scanf("%f", &record[i].ass);

        // Picking the best quiz
        if(record[i].q1 > record[i].q2)
        {
            record[i].q3 = record[i].q1;
        }
        else
        {
            record[i].q3 = record[i].q2;
        }

        record[i].total = record[i].mid + record[i].fin + record[i].q3 + record[i].att  + record[i].ass;



    }

    printf("\n-----------\n");
    printf("\nEnter student id to get result: ");
    scanf("%d", &sea);

    // Searching for result
    for(i=0; i<n; i++)
    {
        if(sea == record[i].id)
        {
            printf("\nResult:\n");
            printf("\nStudent name: %s", record[i].name);
            printf("\nStudent id: %d", record[i].id);
            //printf("\nStudent %d best quiz is: %f", i+1, record[i].q3);
            //printf("\nStudent %d mid is: %f", i+1, record[i].mid);
            //printf("\nStudent %d final is: %f", i+1, record[i].fin);
            //printf("\nStudent %d attendance is: %f", i+1, record[i].att);
            //printf("\nStudent %d assignment is: %f", i+1, record[i].ass);
            printf("\nStudent total mark: %0.2f", record[i].total);
            printGrade(record[i].total);

            float gpa =  getGPA(record[i].total);
            printf("\nStudent gpa: %0.2f", gpa);

            found = 1;
            break;
        }
    }

    return 0;
}
