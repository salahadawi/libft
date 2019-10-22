/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:41:55 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/22 17:25:56 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char *s)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(s);
	i = 0;
	j = 0;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j++;
	if (j == len)
		return (str = "");
	while (s[len - i - 1] == ' ' || s[len - i - 1] == '\t'
		|| s[len - i - 1] == '\n')
		i++;
	if (!(str = (char*)malloc(len - i - j + 1)))
		return (NULL);
	ft_strncpy(str, s + j, len);
	str[len - i - j] = '\0';
	return (str);
}
