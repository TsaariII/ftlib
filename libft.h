/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:45:23 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/22 12:01:16 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
char *ft_strchr(const char *s, int c);
char *ft_strdup(char *src);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strnstr(const char *haystack, const char *needle, size_t num);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
int ft_atoi(const char *str);
int ft_isalnum(int ch);
int ft_isalpha(int ch);
int ft_isalpha(int ch);
int ft_isdigit(int ch);
int ft_isprint(int ch);
int ft_memcmp(char *ptr1, char *ptr2, size_t num);
int ft_strncmp(char *s1, char *s2, size_t num);
void ft_bzero(void *ptr, size_t num);
void *ft_calloc(size_t num_elem, size_t elem_size);
void *ft_memchr(const void *ptr, int ch, size_t num);
void *ft_memcpy(void *dest, const void *src, size_t num);
void *ft_memmove(void *dest, const void *src, size_t num);
void *ft_memset(void *ptr, int value, size_t num);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);
#endif