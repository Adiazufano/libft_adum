/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:29:29 by aldiaz-u          #+#    #+#             */
/*   Updated: 2025/04/16 11:58:58 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Crear  un nodo usando malloc dado el valor de un parametro content
	a el content del struct y a el next del struct se le pasa un NULL.
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list			*list;
	unsigned char	*u_content;
	size_t			len;

	u_content = (unsigned char *) content;
	len = ft_strlen((const char *)u_content) + 1;
	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list -> content = malloc(len * sizeof(unsigned char));
	if (list -> content == NULL)
	{
		free(list);
		return (NULL);
	}
	ft_strlcpy((char *)list -> content, (char *)u_content, len);
	list -> next = NULL;
	return (list);
}
// int	main(void)
// {
// 	t_list *list = ft_lstnew("Hola Mundo");
// 	if (!list)
// 		return (1);
// 	t_list *current = list;
// 	while (current)
// 	{
// 		printf("%s",(char *)current -> content);
// 		current = current -> next;
// 	}
// }
