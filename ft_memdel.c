//ADD HEADER

#include <stdlib.h> //CHANGE TO "libft.h"
#include <string.h> //

void	ft_memdel(void **ap)
{
  free(*ap);
  *ap = NULL;
}
