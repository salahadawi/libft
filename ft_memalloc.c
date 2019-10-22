/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:37:22 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/22 17:12:28 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;
	int				i;

	if (!(ptr = (unsigned char*)malloc(size)))
		return (NULL);
	i = 0;
	while (i < (int)size)
	{
		ptr[i++] = 0;
	}
	return ((void *)ptr);
}
