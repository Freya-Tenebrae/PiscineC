/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createstring.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduaka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 10:12:17 by maduaka           #+#    #+#             */
/*   Updated: 2021/03/28 18:06:09 by maduaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_config.h"

int		filelen(char *file)
{
	int		filedest;
	int		ret;
	int		size;
	char	buffer[4096];

	if (!(filedest = open(file, O_RDONLY)) || filedest == -1)
		return (0);
	while ((ret = read(filedest, buffer, 4095)))
		size = ret;
	close(filedest);
	return (size);
}

char	*ft_file_to_str(char *filename)
{
	char	*retstr;
	int		filedest;
	int		count;
	int		size;

	size = filelen(filename);
	if (size == 0)
		return (0);
	if (!(retstr = malloc((size + 1) * sizeof(char))))
		return (0);
	if (!(filedest = open(filename, O_RDONLY)))
		return (0);
	while ((count = read(filedest, retstr, size)))
		;
	close(filedest);
	retstr[size] = '\0';
	return (retstr);
}
