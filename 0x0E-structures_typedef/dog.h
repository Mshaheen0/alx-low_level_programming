#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog informations
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 *
 * Description: a type that contain a dog information including its name, age
 *		and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

#endif /* DOG_H */
