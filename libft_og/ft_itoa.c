/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:25:11 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/12 12:28:54 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	cont;

	cont = 1;
	if (n < 0)
	{
		n = -n;
		cont++;
	}
	while (n >= 10)
	{
		n /= 10;
		cont++;
	}
	return (cont);
}

void	int_to_arr(char *nums, int n, int cont, int neg)
{
	if (neg)
		nums[0] = '-';
	while (n)
	{
		nums[--cont] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		cont;
	char	*nums;
	int		neg;

	if (n == 0)
		return (ft_strdup("0"));
	neg = 0;
	cont = count_digits(n);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	nums = malloc((cont + 1));
	if (!nums)
		return (NULL);
	int_to_arr(nums, n, cont, neg);
	return (nums);
}
