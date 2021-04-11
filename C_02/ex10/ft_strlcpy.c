/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:15:47 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/24 10:54:24 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_put_strlenght(char *c)
{
	char *c_diff;

	c_diff = c;
	while (*c_diff)
		c_diff++;
	return (c_diff - c);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int src_l;

	src_l = ft_put_strlenght(src);
	if (n == 0)
		return (src_l);
	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_l);
}
