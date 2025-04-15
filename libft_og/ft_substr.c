/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 08:30:54 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/15 12:06:15 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		pos;
	unsigned int		num_c;
	char				*substr;

	pos = 0;
	num_c = (len - start) + 1;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (pos < len)
	{
		substr[pos] = s[start + pos];
		pos++;
	}
	substr[pos] = '\0';
	return (substr);
}
