#include <stdio.h>

typedef struct
{
    char name[50];
    int age;
} Person;

int main()
{
    FILE *file;
    Person p;

    file = fopen("file.txt", "ab+");
    if (!file)
    {
        return 1;
    }

    printf("name: ");
    scanf("%49s", p.name);
    printf("age: ");
    scanf("%d", &p.age);

    fwrite(&p, sizeof(Person), 1, file);

    rewind(file);

    printf("\nall people:\n");
    while (fread(&p, sizeof(Person), 1, file) == 1)
    {
        printf("name: %s\tage: %d\n", p.name, p.age);
    }

    fclose(file);
    return 0;
}

