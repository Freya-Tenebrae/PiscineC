/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:30:11 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/28 17:41:11 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_config.h"

int	ft_errormanagement(int errornumber)
{
	if (errornumber == 1 || errornumber == 3)
		ft_putstr("Dict Error\n");
	else
		ft_putstr("Error\n");
	return (0);
}

int	main(int argc, char **argv)
{
	int errornumber;

	if (argc == 1 || argc > 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else if (argc == 2)
	{
		errornumber = ft_number_to_text_with_dict(argv[1], "./number.dict");
		if (errornumber != 0)
			return (ft_errormanagement(errornumber));
	}
	else
	{
		errornumber = ft_number_to_text_with_dict(argv[1], argv[2]);
		if (errornumber != 0)
			return (ft_errormanagement(errornumber));
	}
	return (0);
}
