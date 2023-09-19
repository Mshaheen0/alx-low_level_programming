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
};
/**
 * dog_t - typedef for struct dog.
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
