#ifndef _DOG_H_
#define _DOG_H_
int _putchar(char c);
/**
 *struct dog - this structure holds values for a dogs name, age, and owner
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
