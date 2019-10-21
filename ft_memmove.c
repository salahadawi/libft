/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:54:37 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/21 14:58:14 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	int		i;
	char	arr[len];

	i = 0;
	ft_memcpy(arr, src, len);
	while (i < (int)len)
	{
		((char *)dst)[i] = arr[i];
		i++;
	}
	return (dst);
}
