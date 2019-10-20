//ADD HEADER

#include <stdlib.h> //CHANGE TO "libft.h"
#include <string.h> //

char	*ft_strnew(size_t size)
{
  char *str;
  int i;
  
  if (!(str = (char*)malloc(size + 1)))
    return (NULL);
  i = 0;
  while (i <= (int)size)
    {
      str[i++] = '\0';
    }
  return (str);
}
