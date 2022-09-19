#include <stdio.h>

typedef struct address_of_person
{
    int house;
    int block;
    char city[20];
    char state[20];

} address;

void scan(address *person, int id)
{
    printf("\nEnter the House No. of Person %d :\n", id);
    scanf("%d", &person->house);
    printf("Enter the Block No.  of Person %d :\n", id);
    scanf("%d", &person->block);
    printf("Enter the City Name  of Person %d :\n", id);
    scanf(" %[^\n]s", person->city);

    printf("Enter the State Name of Person %d :\n", id);
    scanf(" %[^\n]s", person->state);
}

void output(address person, int id)
{
    printf("\nHouse No. of Person %d: %d\n", id, person.house);
    printf("Block No. of Person %d : %d\n", id, person.block);
    printf("City of Person %d : %s\n", id, person.city);
    printf("State of Person %d : %s\n", id, person.state);
}

int main()
{
    int n;
    printf("\nHow Many Persons?\n");
    scanf("%d", &n);

    address person[n];

    for (int i = 0; i < n; i++)
    {
        scan(&person[i], i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        output(person[i], i + 1);
    }

    return 0;
}