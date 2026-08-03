#include <stdio.h>
#define SUBJECTS 5

void addStudent();
char calculateGrade(float percentage);
float findHighest(float marks[], int n);

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT RESULT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 2);

    return 0;
}

void addStudent()
{
    int roll;
    char name[50];
    float marks[SUBJECTS];
    float total = 0, percentage;
    char grade;

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    for(int i = 0; i < SUBJECTS; i++)
    {
        printf("Enter marks of subject %d: ", i+1);
        scanf("%f", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks! Try again.\n");
            i--;
            continue;
        }

        total += marks[i];
    }

    percentage = total / SUBJECTS;
    grade = calculateGrade(percentage);

    printf("\n----- RESULT -----\n");
    printf("Name: %s\n", name);
    printf("Roll: %d\n", roll);
    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c\n", grade);

    float highest = findHighest(marks, SUBJECTS);
    printf("Highest Marks: %.2f\n", highest);
}

char calculateGrade(float percentage)
{
    if(percentage >= 90)
        return 'A';
    else if(percentage >= 75)
        return 'B';
    else if(percentage >= 50)
        return 'C';
    else
        return 'F';
}

float findHighest(float marks[], int n)
{
    if(n == 1)
        return marks[0];

    float max = findHighest(marks, n-1);

    if(marks[n-1] > max)
        return marks[n-1];
    else
        return max;
}