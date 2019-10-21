/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:53:01 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/21 15:55:46 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*needle == 0)
		return (haystack);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && i + j < (int)len)
		{
			if (!needle[j + 1])
				return (&haystack[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
