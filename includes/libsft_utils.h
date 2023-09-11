/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsft_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:13:30 by hotph             #+#    #+#             */
/*   Updated: 2023/09/11 11:20:06 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSFT_UTILS_H
# define LIBSFT_UTILS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

/*-------include header-------*/
# include "libsft.h"

/*-------prototype-------*/
/*
Return size of charactor of number(within int size).
Ex. 123 -> 3, -123 -> 4, 0 -> 1
*/
int		num_digit_int(int num);
/*Return size of charactor of space, defined by isspace(3).*/
size_t	len_isspace3(const char *src);
/*if argument is space3, return true.*/
bool	is_space3(const char c);
/*Coution: This function has read() function.*/
char	*get_first_line(int fd);
/*
Return map of splited string. Splited by char(can multiple select).
ex. ft_split_multichar("abc de,f", " ,") -> {"abc", "de", "f", NULL}
*/
char	**ft_split_multichar(const char *s, const char *multichar);
/*Free pointer and set null.*/
void	free_null(void **ptr);
/*
Free matrix type char**. Require size of row.
Free each row and matrix.
*/
void	free_map(void **map, size_t size_row);
void	free_map_null_terminated(void **map);
size_t	count_word(const char *str);
bool	is_valid_matrix(int num_of_row, char *matrix[], void *f(char *));

#endif