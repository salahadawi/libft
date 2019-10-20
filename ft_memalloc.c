//ADD HEADER

#include <stdlib.h> //CHANGE TO "libft.h"
#include <string.h> //

void	*ft_memalloc(size_t size)
{
  unsigned char *ptr;
  int i;
  
  if (!(ptr = (unsigned char*)malloc(size)))
    return (NULL);
  i = 0;
  while (i < (int)size)
    {
      ptr[i++] = 0;
    }
  return ((void *)ptr);
}
