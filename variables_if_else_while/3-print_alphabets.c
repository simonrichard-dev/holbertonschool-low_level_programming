#include <stdio.h>

/**
 * main - Entry point
 *
<<<<<<< HEAD
 *Return: Always 0 (Success)
=======
 * Return: Always 0 (Succes)
>>>>>>> a2903b710f6be4015ba3b8b151d35199911a32cd
 */
int main(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
