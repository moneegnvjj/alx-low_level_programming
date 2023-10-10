#include <stdio.h>
#include <stdlib.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

int main(void)
{
	struct dog my_dog;
	my_dog.name = "Fido";
	my_dog.age = 3.5;
	my_dog.owner = "John";
    
	print_dog(&my_dog);

	/* Clean up memory if needed*/
	/* Remember to free any dynamically allocated memory*/

    return (0);
}

