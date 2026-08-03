// Write a program to read and display the information of a student using a nested structure

#include <stdio.h>

int	main()
{
typedef struct 
{
    char first_name[10];
    char middle_name[10];
    char last_name[10];
}NAME;
struct dob
{
    int dd;
    int mm;
    int yyyy;
};
 struct student
{
    NAME fn;
    struct dob date;
    int roll_num;
};

struct student stud1;

strcpy(stud1.fn.first_name, "Harshraj");
strcpy(stud1.fn.middle_name, "Bharat");
strcpy(stud1.fn.last_name, "Sawant");
stud1.roll_num=23;
stud1.date.dd = 9;
stud1.date.mm = 12;
stud1.date.yyyy = 2006;



}