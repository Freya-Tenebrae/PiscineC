/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_to_text.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:50:02 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/28 17:40:09 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_config.h"

char	*ft_split_doublepoint(char *src, int reverse)
{
	(void)reverse;
	return (src);
}

int		ft_put_in_form(char **dictionnary, char ***v_int, char ***v_text)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (dictionnary[i++][0] != 'E' && dictionnary[i][1] != 'N' &&
		dictionnary[i][2] != 'D')
		size++;
	i = 0;
	if (!(*v_int = (char **)malloc(sizeof(char *) * (size + 1))))
		return (1);
	if (!(*v_text = (char **)malloc(sizeof(char *) * (size + 1))))
		return (2);
	while (i++ <= size)
	{
		*v_int[i] = ft_split_doublepoint(dictionnary[i], 0);
		*v_text[i] = ft_split_doublepoint(dictionnary[i], 1);
	}
	return (0);
}

int		ft_verification(char *str, char *dic)
{
	char **dictionnary;
	char **str_split;
	char **value_int;
	char **value_text;

	if (ft_pars_dictionnary(&dictionnary, dic) != 0)
		return (1);
	if (!(str_split = ft_group(str)))
		return (2);
	if (ft_put_in_form(dictionnary, &value_int, &value_text) != 0)
		return (3);
	return (4);
}

int		ft_number_to_text_with_dict(char *str, char *dic)
{
	return (ft_verification(str, dic));
}
