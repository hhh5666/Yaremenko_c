#include <stdio.h>

int main()
{
    FILE *file = fopen("file.txt", "w+");
    if (!file)
    {
        return 1;
    }

    fputs("Checking EOF and errors.", file);
    rewind(file);

    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    if (ferror(file))
    {
        printf("\nAn error occurred.\n");
    }
    else if (feof(file))
    {
        printf("\nEnd of file reached.\n");
    }

    fclose(file);
    return 0;
}

