#include "main.h"
/**
*rev_string - reverse a string
*@s : string parameters
*/
void rev_string(char *s)
{
char *end = s; 
while (*end) {
end++;  
}
end--;  
while (s < end) {
char temp = *s;
*s = *end;
*end = temp;
s++;
end--;
}
}
