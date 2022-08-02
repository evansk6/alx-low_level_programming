#ifndef STRTYP
#define STRTYP

/*
 * struct dog -> dogs struct
 * @name: param
 * @age: age param
 * @owner: param
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct dog dog_t;

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_ dog(dog_t *d);

#endif /*STRTYP*/
