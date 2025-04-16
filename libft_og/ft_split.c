/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:03:47 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/16 20:49:19 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	total_words(char const *s, char c)
{
	size_t	count;
	size_t	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	**free_array(char **res, size_t j)
{
	while (j > 0)
	{
		free(res[--j]);
	}
	free(res);
	return (NULL);
}

static void	fill_result(char const *s, char c, char **res)
{
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[j] = ft_substr(s, start, i - start);
			if (!res[j])
			{
				free_array(res, j);
				return ;
			}
			j++;
		}
		else
			i++;
	}
	res[j] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	num_words;

	if (!s)
		return (NULL);
	num_words = total_words(s, c);
	result = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!result)
		return (NULL);
	fill_result(s, c, result);
	return (result);
}

// int main(void)
// {
//     // Cadena de prueba
//     char *str = "  hola  mundo  esto   es   un   test  ";

//     // Llamada a la función ft_split para dividir la cadena por espacios
//     char **result = ft_split(str, ' ');

//     // Verificación del resultado
//     if (!result)
//     {
//         printf("Error: No se pudo dividir la cadena.\n");
//         return (1);
//     }

//     // Imprimir los resultados
//     printf("Resultados de ft_split:\n");
//     for (int i = 0; result[i] != NULL; i++)
//     {
//         printf("[%s]\n", result[i]);
//     }

//     // Liberar la memoria
//     for (int i = 0; result[i] != NULL; i++)
//     {
//         free(result[i]);
//     }
//     free(result);

//     return 0;
// }
