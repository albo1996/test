#include <stdlib.h>
#include <stdio.h>
#include "age.h"

//4:15 09.01.2021
struct data
{
	char name[21];
	char surname[21];
	int year;
} person;


int main()
{
	printf("Введите данные...\n");

	printf("Имя: ");
	scanf("%s", person.name);

	printf("Фамилия: ");
	scanf("%s", person.surname);

	printf("Год рождения: ");
        scanf("%d", &person.year);

	printf("\n\n");

	printf("Полученные данные:\n\n");

	printf("%s | %s | %d\n", person.name, person.surname, person.year);

	age(person.year);

	return 0;
}
