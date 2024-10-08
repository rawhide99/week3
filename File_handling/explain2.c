//1)fopen(): Opens a file and returns a file pointer.
//2)fclose(): Closes an opened file and frees associated resources.
//3)fgets(): Reads a line from a file into a buffer.
//4)fputs(): Writes a string to a file.

#include <stdio.h>

int main() 
{
    FILE *fp1 = fopen("input.txt", "r");
    if (fp1 == NULL) 
    {
        perror("Error opening the given file.\n");
        return 1;
    }

    FILE *fp2 = fopen("output.txt", "w");
    if (fp2 == NULL) 
    {
        perror("Error opening output file");
        fclose(fp1);
        return 1;
    }

    char buffer[256];

    while (fgets(buffer, sizeof(buffer), fp1) != NULL) 
    {
        fputs(buffer, fp2);
    }

    // Close the files
    fclose(fp1);
    fclose(fp2);

    printf("File content copied successfully!\n");
    return 0;
}
