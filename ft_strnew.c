/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:40:26 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/22 17:24:47 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	if (!(str = (char*)malloc(size + 1)))
		return (NULL);
	i = 0;
	while (i <= (int)size)
	{
		str[i++] = '\0';
	}
	return (str);
}
