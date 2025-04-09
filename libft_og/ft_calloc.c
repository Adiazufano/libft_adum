/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:12:40 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/09 16:29:53 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmaeb, size_t size)
{
	unsigned char	*array;
	size_t			i;

	array = (unsigned char *)malloc(nmaeb * size);
	i = 0;
	while (i < nmaeb * size)
	{
		array[i] = '\0';
		i++;
	}
	return (array);
}
