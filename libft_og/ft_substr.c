/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 08:30:54 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/10 09:45:34 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		pos;
	char				*substr;

	pos = 0;
	substr = (char *)malloc((len) * sizeof(char));
	if (!substr)
		return (NULL);
	while (pos < len)
	{
		substr[pos] = s[pos + start];
		pos++;
	}
	substr[pos] = '\0';
	return (substr);
}
