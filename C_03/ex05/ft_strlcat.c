/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 09:16:26 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 13:12:51 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_put_strlenght(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_l;
	unsigned int dest_l;
	unsigned int result;

	i = 0;
	src_l = ft_put_strlenght(src);
	dest_l = ft_put_strlenght(dest);
	if (size == 0)
		return (src_l);
	if (size < dest_l)
		result = src_l + size;
	else
		result = src_l + dest_l;
	while (src[i++] != '\0' && ((i + dest_l) < (size)))
		dest[i + dest_l - 1] = src[i - 1];
	dest[i + dest_l - 1] = '\0';
	return (result);
}
