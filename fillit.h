/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkyianyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 15:29:30 by mkyianyt          #+#    #+#             */
/*   Updated: 2016/12/27 18:07:14 by vrybchyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	check_figure(char *s);
char	*check_valid(char *file_name);
char	*create_finale_tab(char *finale_s);
char	**create_map(int size);
char	*create_tmp_str(char *s, char *t, int i);
char	*cut_figure(char *s);
char	*cut_v(char *s, char *d);
int		fillit_recursive(char **f);
void	ft_putchar(char c);
void	ft_putstr(const char *str);
char	*ft_remove_n2(char *s, char *d, int i);
char	*ft_remove_n3(char *s, char *d, int i);
char	*ft_remove_n4(char *s, char *d, int i);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *str);
int		main(int argc, char **argv);
char	**put_a(char **t, int fgr_pos, int *j_size, int i);
char	**put_b(char **t, int fgr_pos, int *j_size, int i);
char	**put_c(char **t, int fgr_pos, int *j_size, int i);
char	**put_d(char **t, int fgr_pos, int *j_size, int i);
char	**put_e(char **t, int fgr_pos, int *j_size, int i);
char	**put_f(char **t, int fgr_pos, int *j_size, int i);
char	**put_fgr(char **map, char **t, int i, int j);
char	**put_g(char **t, int fgr_pos, int *j_size, int i);
char	**put_h(char **t, int fgr_pos, int *j_size, int i);
char	**put_i(char **t, int fgr_pos, int *j_size, int i);
char	**put_j(char **t, int fgr_pos, int *j_size, int i);
char	**put_k(char **t, int fgr_pos, int *j_size, int i);
char	**put_l(char **t, int fgr_pos, int *j_size, int i);
char	**put_m(char **t, int fgr_pos, int *j_size, int i);
char	**put_n(char **t, int fgr_pos, int *j_size, int i);
char	**put_o(char **t, int fgr_pos, int *j_size, int i);
char	**put_p(char **t, int fgr_pos, int *j_size, int i);
char	**put_q(char **t, int fgr_pos, int *j_size, int i);
char	**put_r(char **t, int fgr_pos, int *j_size, int i);
char	**put_s(char **t, int fgr_pos, int *j_size, int i);
void	remove_fgr(char **map, char **f);
char	**str_to_tab(char *s);

#endif
