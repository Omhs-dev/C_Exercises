#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;
    
    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int main () {
   int len;
   const char str1[] = "ABCDEF4960910";
   const char str2[] = "013";

   len = ft_strcspn(str1, str2);

   printf("First matched character is at %d\n", len + 1);
   
   return(0);
}