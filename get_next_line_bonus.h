/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:20:21 by eleleux           #+#    #+#             */
/*   Updated: 2022/11/22 17:26:13 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

// UTILS

int		ft_strlen(char *str);
char	*ft_join_nextline(char *dest, char *src);
int		line_in_stock(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

// GNL

char	*get_next_line(int fd);
char	*readbuff_copystock(int fd, char *stock);
char	*copystock(char *stock, char *buffer);
char	*give_line(char *stock, char c);
char	*clean_stock(char *stock);

#endif