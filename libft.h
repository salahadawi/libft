/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:27:35 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/21 13:48:53 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

int		ft_strlen(char *str);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

char	*ft_strcpy(char *dst, char *src);

int		ft_strncmp(char *s1, char *s2, int n);

int		ft_atoi(char *str);

char	*ft_strcpy(char *dst, char *src);

char	*ft_strncpy(char *dst, char *src, int len);

char	*ft_strcat(char *s1, char *s2);

char	*ft_strncat(char *s1, char *s2, int n);

size_t	ft_strlcat(char *s1, char *s2, size_t n);

char	*ft_strchr(char *s, int c);

char	*ft_strrchr(char *s, int c);

char	*ft_strstr(char *stack, char *str);

char	*ft_strnstr(char *stack, char *str, size_t len);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, void *src, size_t n);

void	*ft_memccpy(void *dst, void *src, int c, size_t n);

void	*ft_memmove(void *dst, void *src, size_t n);

void	*ft_memchr(void *s, int c, size_t n);

int		ft_memcmp(void *s1, void *s2, size_t n);

char	*ft_strdup(char *src);

int		ft_strcmp(char *s1, char *s2);

void	*ft_memalloc(size_t size);

void	ft_memdel(void **ap);

char	*ft_strnew(size_t size);

void	ft_strdel(char **as);

void	ft_strclr(char *s);

#endif
