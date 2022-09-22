#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *s)
{   int c = 0;
   
for (c = 0; s[c] != '\0'; c++)
{
    if (c == 0)
   {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
         continue;
      }
   }
   
      else if (c == ' ' || c == ',' || c== '.' || c == '!')
            {
                c++;
             if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
         continue;
             }
            }
        else
            if (s[c] >= 65 && s[c] <= 90) {
         s[c] = s[c] + 32;
      }
} 
    return (s);
}
