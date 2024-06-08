#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

FILE* mainProgram;

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("No source file spicified! exit.\n");
        return EXIT_FAILURE;
    }

    if (argc > 2)
    {
        printf("Spicified more than one file! exit.\n");
        return EXIT_FAILURE;
    }

    printf("good to go!\n");
    const char* fileName = argv[1];
    mainProgram = fopen(fileName, "r");

    char* buffer = (char*)malloc(sizeof(char) * 256);
    fgets(buffer, malloc_usable_size(buffer), mainProgram);
    fprintf(stdout, "%s\n", buffer);

    fclose(mainProgram);

    return EXIT_SUCCESS;
}
