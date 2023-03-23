#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000
#define MAX_LENGTH 100

int main()
{
    FILE *fp;
    char filename[MAX_LENGTH];
    char lines[MAX_LINES][MAX_LENGTH];
    int i, count = 0;

    
    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    
    fp = fopen(filename, "r");

    
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    
    while (fgets(lines[count], MAX_LENGTH, fp) != NULL)
    {
        count++;
        
        if (count >= MAX_LINES)
        {
            printf("Too many lines in file\n");
            exit(1);
        }
    }

    
    fclose(fp);

    
    printf("The content of the file %s are:\n", filename);
    for (i = 0; i < count; i++)
    {
        printf("%s", lines[i]);
    }

    return 0;
}

