/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:03:47 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/11 17:54:58 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		ca;
	char	**filas;
	char	*columnas;

	ca = 0;
	i = 0;
	while (s[i] != c)
	{
		if (s[i] == c)
		i++;
	}
	printf("%i",i);
	return(0);
}
int	main()
{
	ft_split("hola que tal ?", ' ');
	return (0);
}