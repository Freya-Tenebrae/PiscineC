/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_dictionnary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:32:02 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/28 17:24:06 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_config.h"

int	ft_pars_dictionnary(char ***dictionnary, char *dic)
{
	char *dictionnary_str;

	if (!(dictionnary_str = ft_file_to_str(dic)))
		return (1);
	if (!(*dictionnary = ft_sep_dict(dictionnary_str)))
		return (2);
	free(dictionnary_str);
	return (3);
	return (0);
}
