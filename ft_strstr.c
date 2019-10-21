/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:53:01 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/21 15:44:00 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] || *needle == 0)
		{
			if (!needle[j + 1] || *needle == 0)
				return (&haystack[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
