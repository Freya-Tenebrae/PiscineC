/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:26:55 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/16 16:08:04 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] + 'A' - 'a';
	return (str);
}

char	*ft_strlowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 'a' - 'A';
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			ft_strupcase(str, i);
		else if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
			(str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
			(str[i - 1] >= '0' && str[i - 1] <= '9'))
			ft_strlowcase(str, i);
		else
			ft_strupcase(str, i);
		i++;
	}
	return (str);
}
