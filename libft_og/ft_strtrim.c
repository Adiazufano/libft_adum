/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 09:34:59 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/10 16:36:49 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*temp;
	int	j;

	trim = (char *)malloc((int)ft_strlen(s1) * sizeof(char));
	temp = trim;
	j = ft_strlen(s1);

	while (j-- && s1[j] == 'h')
	{
		temp[j] = s1[j];
		j--;
	}
	while (*s1)
	{
		*temp++ = *s1++;
	}
	return (trim);
}

int	main(void)
{
	char	s1[] = "hola qhue tal?h";
	char	set[] = "paclh";
	char	*trim = ft_strtrim(s1,set);

	printf("%s",trim);
	free(trim);
	return (0);
}