#include <stdio.h>

int main() 
{
    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) 
    {
        perror("Error opening file");
        return 1;
    }

    fprintf(fp, "Appending this line to the file.\n");

    fclose(fp);
    printf("Data appended successfully!\n");
    return 0;
}
