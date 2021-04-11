/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:21:23 by llalba            #+#    #+#             */
/*   Updated: 2021/04/01 11:37:57 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# ifndef BUF_SIZE
#  define BUF_SIZE 512
# endif
# ifndef STDIN_SIZE
#  define STDIN_SIZE 512
# endif
# ifndef MAX_FILE_SIZE
#  define MAX_FILE_SIZE 4294967294
# endif
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct	s_map
{
	unsigned int	lines;
	unsigned int	columns;
	unsigned char	empty_char;
	unsigned char	obstacle_char;
	unsigned char	full_char;
	unsigned char	*content;
	unsigned int	*tmp;
}				t_map;

typedef struct	s_buf
{
	unsigned char	*str;
	struct s_buf	*next;
}				t_buf;

t_buf			*dump_stdin(unsigned int *malloc_size);
int				add_info_stdin(t_map *map, t_buf *head);
int				fill_in_stdin(t_map *map, t_buf *head);
int				load_from_stdin(t_map *map);

t_buf			*buf_list_init();
t_buf			*add_new(t_buf *head, unsigned char *buf);
int				free_stdin_buf(t_buf *head);

void			print_map(t_map *map);

void			count_map_char(unsigned int *size, unsigned char *buf);
int				load_content(t_map *map, unsigned char *buf, int *map_p);
unsigned int	get_min_3(unsigned int a, unsigned int b, unsigned int c);

int				ft_strlen(unsigned char *str);
int				check_char(t_map *map);
void			ft_putchar(char c);
int				custom_atoi(unsigned char *str, int len);
void			ft_putstr(char *str);

int				calc_malloc_size(char *file);
int				add_info(t_map *map, char *file);
int				fill_in(t_map *map, char *file);
int				free_and_exit(t_map *map);
int				load_from_file(char *file, t_map *map);

void			map_init(t_map *map);
void			map_fill(t_map *map);
void			replace_by_full_char(t_map *map, unsigned int max_index);
void			ft_solve(t_map *map);

#endif
