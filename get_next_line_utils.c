/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darrensdev <darrensdev@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:58:53 by darrensdev        #+#    #+#             */
/*   Updated: 2022/11/21 15:17:21 by darrensdev       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_join_nextline(char *s1, char *s2)
{
	char	*recipe;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	recipe = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!recipe)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		recipe[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
		recipe[j++] = s2[i++];
	recipe[j] = '\0';
	return (recipe);
}

int	line_in_stock(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
