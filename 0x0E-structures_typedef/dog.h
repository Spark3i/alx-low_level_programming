#ifndef DOG_H
#define DOG_H
/**
  *struct dog- to define structure
  *@name:name
  *@age: age
  *@owner: owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
    *dog_t- type def of struct dog
    */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);void free_dog(dog_t *d);


#endif

