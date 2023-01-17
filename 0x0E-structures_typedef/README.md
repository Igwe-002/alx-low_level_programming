0. Poppy
mandatory
Score: 0.0% (Checks completed: 0.0%)


Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a

1. A dog is the only thing on earth that loves you more than you love yourself
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
mandatory
Score: 0.0% (Checks completed: 0.0%)


Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c

3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
mandatory
Score: 0.0% (Checks completed: 0.0%)


Define a new type dog_t as a new name for the type struct dog.

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d

4. A door is what a dog is perpetually on the wrong side of
mandatory
Score: 0.0% (Checks completed: 0.0%)


Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e

5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
mandatory

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f

