//ADD HEADER
//CHECK NORM, FIX TABULATIONS

#include "libft.h"

int	ft_lstevery(t_list *lst, int (*f)(t_list *elem))
{
  while (lst)
    {
      if (!f(lst))
	return (0);
      lst = lst->next;
    }
  return (1);
}
