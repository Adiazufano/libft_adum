/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:30:49 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/09 17:42:13 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*array;
	int		len;
	int		i;

	
	len = ft_strlen(s) + 1;
	array = (char *)malloc(len * sizeof(char));
	i = 0;
	if (!array)
		return (NULL);
	while (i < len)
	{
		array[i] = s[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

int	main()
{
	char *test = ft_strdup("hola que tal ?");
	if (!test) 
	{
		printf("Error al duplicar la cadena.\n");
		return (1);
	}
	
	printf("%s\n", test); 
	
	free(test); 
	return (0);
}