#include <stdio.h>

typedef struct 
{
    int roll;
    char name[50];
    float marks;
} Student;

int main() 
{
    FILE *fp = fopen("record.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    Student st;

    while (fscanf(fp, "%d %49s %f", &st.roll, st.name, &st.marks) == 3) 
    {
        printf("%d\t%s\t%.2f\n", st.roll, st.name, st.marks);
    }

    fclose(fp);
    return 0;
}
