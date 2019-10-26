//ADD HEADER
//CHECK NORM, FIX TABULATIONS

#include "libft.h"

void	ft_putlst(t_list *lst)
{
  while(lst)
    {
      ft_putendl(lst->content);
      lst = lst->next;
    }
}
