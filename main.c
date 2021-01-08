#include <stdlib.h>
#include <stdio.h>
#include "age.h"

struct data
{
	char name[21];
	char surname[21];
	int year;
} person;


int main()
{
	printf("Введите данные...\n\n");

	printf("Имя: ");
	scanf("%s", person.name);

	printf("Фамилия: ");
	scanf("%s", person.surname);

	printf("Год рождения: ");
        scanf("%d", &person.year);

	printf("\n\n");

	printf("Полученные данные:\n");

	printf("%s | %s | %d\n", person.name, person.surname, person.year);

	age(person.year);

	return 0;
}
