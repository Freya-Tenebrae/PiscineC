/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_config.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduaka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 11:17:04 by maduaka           #+#    #+#             */
/*   Updated: 2021/03/28 17:45:35 by maduaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONFIG_H
# define FT_CONFIG_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_pars_dictionnary(char ***dictionnary, char *dic);
char	**ft_group(char *str);
void	ft_putstr(char *str);
int		ft_number_to_text_with_dict(char *str, char *dic);
char	*ft_file_to_str(char *filename);
char	**ft_sep_dict(char *dict);

#endif
