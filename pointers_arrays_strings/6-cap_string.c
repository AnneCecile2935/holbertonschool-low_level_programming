#include "main.h"
/**
*cap_string - capitalize all words of a string
*@str: parameter function
*Return: return result all words with capitalize
*/
char *cap_string(char *str)
{
char tab[] = {',', ' ', '\t', '\n', ';', '.', '!', '?',
'"', '(', ')', '{', '}'};
int i = 0;
int j;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
while (str[i] != '\0')
{
for (j = 0; tab[j] != '\0'; j++)
{
if (str[i] == tab[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
}
i++;
}
return (str);
}
