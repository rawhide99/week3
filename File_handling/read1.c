#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("File did not open successfully.\n");
        exit(0);
    }
    return 0;
}