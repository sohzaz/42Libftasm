/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbreton <dbreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 14:22:30 by dbreton           #+#    #+#             */
/*   Updated: 2015/10/12 14:13:20 by dbreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFTS_H
# define _LIBFTS_H
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>


int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_islower(int c);
int ft_isupper(int c);
int	ft_isprint(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void ft_bzero(void *s, size_t n);
char *ft_strcat(char *s1, const char *s2);
int ft_puts(char const *s);
int ft_strlen(char const *str);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
char *ft_strdup(char const *str);
void ft_cat(int fd);

#endif