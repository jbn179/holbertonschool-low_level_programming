#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 * Description: the structure contains information about a dog,
 * including its name, age, and owner's name.
 */

struct dog
{
char *name;		// Pointeur vers une chaîne de caractères pour le nom du chien
float age;		// Nombre à virgule flottante pour l'âge du chien
char *owner;	// Pointeur vers une chaîne de caractères pour le nom du propriétaire
};

typedef struct dog dog_t;		// Définit un alias 'dog_t' pour 'struct dog', permettant d'utiliser 'dog_t' comme type.

void init_dog(struct dog *d, char *name, float age, char *owner);		// Fonction pour initialiser une structure dog
void print_dog(struct dog *d);											// Fonction pour afficher les informations d'une structure dog
dog_t *new_dog(char *name, float age, char *owner);						// Fonction pour créer une nouvelle structure dog et la retourner
char *_strcpy(char *dest, char *src);									// Fonction utilitaire pour copier une chaîne de caractères
int _strlen(char *s);													// Fonction utilitaire pour calculer la longueur d'une chaîne de caractères
void free_dog(dog_t *d);												// Fonction pour libérer la mémoire allouée pour une structure dog

#endif
