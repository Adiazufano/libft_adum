/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:49:58 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/08 18:04:24 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	unsigned char	temp[20];
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		temp[i] = ((unsigned char *) src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *) dest)[i] = temp[i];
		i++;
	}

	return (dest);
}

