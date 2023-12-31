#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure to identify a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: identify a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*_DOG_H_*/
