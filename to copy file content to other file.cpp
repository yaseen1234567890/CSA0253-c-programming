#include <stdio.h>
#include <stdlib.h>

int main()
 {
    char source_file_name[MAX_BUFFER_SIZE];
    char destination_file_name[MAX_BUFFER_SIZE];
    char buffer[MAX_BUFFER_SIZE];
    FILE *source_file, *destination_file;
    int count;

    printf("Enter the name of the source file: ");
    scanf("%s", source_file_name);

    printf("Enter the name of the destination file: ");
    scanf("%s", destination_file_name);


    source_file = fopen(source_file_name, "r");
    if (source_file == NULL) {
        printf("Error: Unable to open the source file\n");
        exit(EXIT_FAILURE);
    }
    destination_file = fopen(destination_file_name, "w");
    if (destination_file == NULL) {
        printf("Error: Unable to open the destination file\n");
        exit(EXIT_FAILURE);
    }

    
    while ((count = fread(buffer, 1, MAX_BUFFER_SIZE, source_file)) > 0) {
        fwrite(buffer, 1, count, destination_file);
    }

    printf("File contents copied successfully\n");


    fclose(source_file);
    fclose(destination_file);

    return 0;
}

