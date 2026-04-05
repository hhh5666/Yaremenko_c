#include <stdio.h>

int main() 
{
    FILE *file = fopen("file.txt", "w+b");
    if (!file) return 1;

    fputs("Hello, world!", file);

    fseek(file, 0, SEEK_END);
    int size = ftell(file);

    printf("size: %d\n", size);

    fclose(file);
    return 0;
}

