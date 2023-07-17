#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: This function initializes the members of a dog structure.
 */
void init_dog(dog_t *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of a dog structure
 * @d: Pointer to the dog structure
 *
 * Description: This function prints the name, age, and owner of a dog.
 */
void print_dog(const dog_t *d);

/**
 * new_dog - Creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to the newly created dog structure
 *
 * Description: This function creates a new dog structure and initializes its members.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to the dog structure
 *
 * Description: This function frees the memory allocated for a dog structure.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string to a destination buffer
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination buffer
 *
 * Description: This function copies the string from source to destination buffer.
 */
char *_strcpy(char *dest, const char *src);

/**
 * _strlen - Computes the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 *
 * Description: This function calculates the length of a string.
 */
int _strlen(const char *s);

#endif /* DOG_H */
