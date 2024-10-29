/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivillold <ivillold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:02:33 by ivillold          #+#    #+#             */
/*   Updated: 2024/10/28 22:03:41 by ivillold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//LIBS//
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

//FUNCTIONS//
//Manipulate strings//
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *src, int c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, char const *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *src, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
//*****//
//Manipulate characters//
int		ft_toupper(int arg);
int		ft_tolower(int arg);
int		ft_isdigit(int arg);
int		ft_isascii(int arg);
int		ft_isalpha(int arg);
int		ft_isalnum(int arg);
int		ft_isprint(int arg);
//*****//
//Manipulate numbers//
char	*ft_itoa(int n);
int		ft_atoi(const char *str);
//******//
//Manipulate memory//
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t size_of);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t count);
char	*ft_strdup(const char *c);
//******//
//WriteFileDescriptor//
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
//*****//
#endif
