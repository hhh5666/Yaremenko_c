#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person people[3] = {
        {"Ivan", 25},
        {"Anna", 30},
        {"Oleg", 22}
    };

    FILE *file = fopen("file.txt", "wb");
    if (!file) return 1;

    fwrite(people, sizeof(struct Person), 3, file);
    fclose(file);

    struct Person readPeople[3];

    file = fopen("file.txt", "rb");
    if (!file) return 1;

    fread(readPeople, sizeof(struct Person), 3, file);
    fclose(file);

    for (int i = 0; i < 3; i++) {
        printf("%s %d\n", readPeople[i].name, readPeople[i].age);
    }

    return 0;
}
