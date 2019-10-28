/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:54:37 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/28 18:57:41 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	if (!dst && !src)
		return (dst);
	i = 0;
	if (src > dst)
		while (i < (int)len)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i++;
		}
	else
	{
		i = 1;
		while (i <= (int)len)
		{
			((unsigned char*)dst)[len - i] = ((unsigned char*)src)[len - i];
			i++;
		}
	}
	return (dst);
}
