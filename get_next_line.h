/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darrensdev <darrensdev@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:30:37 by darrensdev        #+#    #+#             */
/*   Updated: 2022/11/21 18:48:52 by darrensdev       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

// UTILS

int		ft_strlen(char *str);
char	*ft_join_nextline(char *dest, char *src);
int		line_in_stock(char *str);

// GNL

char	*get_next_line(int fd);
char	*readbuff_copystock(int fd, char *stock);
char	*copystock(char *stock, char *buffer);
char	*give_line(char *stock, char c);
char	*clean_stock(char *stock);

#endif