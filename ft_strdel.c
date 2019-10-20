//ADD HEADER

#include <stdlib.h> //CHANGE TO "libft.h"
#include <string.h> //

void	ft_strdel(char **as)
{
  free(*as);
  *as = NULL;
}
