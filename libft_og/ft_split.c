/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:03:47 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/12 10:09:36 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	total_words(char const *s1, char c)
{
	int	cont;

	cont = 0;
	while (*s1)
	{
		if (*(s1 + 1) == c || *(s1 + 1) == '\0' )
			cont++;
		s1++;
	}
	return (cont);
}

char	**ft_split(char const *s1, char c)
{
	int		start;
	int		index;
	int		columns;
	int		end;
	char	**array;

	array = malloc((total_words(s1, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	index = 0;
	columns = 0;
	while (s1[index])
	{
		if (index == 0 || s1[index - 1] == c)
			start = index;
		if ((s1[index + 1] == c || s1[index + 1] == '\0') && s1[index] != c)
		{
			end = index;
			array[columns] = ft_substr(s1, start, end - start + 1);
			columns++;
		}
		index++;
	}
	array[columns] = NULL;
	return (array);
}
