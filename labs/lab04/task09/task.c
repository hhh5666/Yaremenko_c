#include <stdio.h>

int main() 
{
    FILE *file = fopen("file.txt", "w+");
    if (!file) return 1;

    fputs("Hello, world!", file);

    fseek(file, 7, SEEK_SET);

    char buffer[50];
    if (fgets(buffer, sizeof(buffer), file)) {
        printf("%s\n", buffer);
    }

    fclose(file);
    return 0;
}
