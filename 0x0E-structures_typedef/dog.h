#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 * @name: string
 * @age: integer
 * @owner: string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
*dog_t - Typedef for dog
*/
typedef struct dog dog_t;

#endif
