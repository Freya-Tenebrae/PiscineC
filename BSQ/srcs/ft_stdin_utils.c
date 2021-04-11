/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 07:55:18 by llalba            #+#    #+#             */
/*   Updated: 2021/04/01 11:29:45 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Creates and returns the very first element of the linked list that will
** contain the sdtin, chuncked into t_buf structures.
*/

t_buf		*buf_list_init(void)
{
	t_buf		*first;

	first = 0;
	return (first);
}

/*
** Adds a new t_buf element to the linked list which will contain the stdin.
*/

t_buf		*add_new(t_buf *head, unsigned char *buf)
{
	int			buf_len;
	t_buf		*new;

	buf_len = ft_strlen(buf);
	new = (t_buf *)malloc(sizeof(t_buf));
	if (!new)
		return (0);
	new->str = (unsigned char *)malloc(sizeof(char) * (buf_len + 1));
	if (!(new->str))
		return (0);
	while (buf_len + 1)
	{
		new->str[buf_len] = buf[buf_len];
		buf_len--;
	}
	new->next = head;
	head = new;
	return (head);
}

/*
** Deallocates every .str element of the linked list and the elements of the
** list themselves.
*/

int			free_stdin_buf(t_buf *head)
{
	t_buf		*tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	return (0);
}
