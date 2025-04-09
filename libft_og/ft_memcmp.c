/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:44:20 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/09 17:12:31 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*conv_s1;
	unsigned char	*conv_s2;

	conv_s1 = (unsigned char *)s1;
	conv_s2 = (unsigned char *)s2;
	i = 0;
	while (*conv_s1 && *conv_s2 && i < n)
	{
		return (conv_s1[i] - conv_s2[i]);
		i++;
	}
	return (conv_s1[0] - conv_s2[0]);
}
