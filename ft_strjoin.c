/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:58:51 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/22 17:28:41 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2)
{
	char *str;

	str = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
