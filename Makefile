#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkyianyt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/26 15:34:00 by mkyianyt          #+#    #+#              #
#    Updated: 2017/02/17 19:03:56 by mkyianyt         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit
SRC = check_figure.c check_valid.c create_finale_tab.c create_map.c \
create_tmp_str.c cut_figure.c cut_v.c fillit_recursive.c ft_remove_n2.c \
ft_remove_n3.c ft_remove_n4.c main.c put_a.c put_b.c put_c.c put_d.c \
put_e.c put_f.c put_fgr.c put_g.c put_h.c put_i.c put_j.c put_k.c put_l.c \
put_m.c put_n.c put_o.c put_p.c put_q.c put_r.c put_s.c remove_fgr.c \
str_to_tab.c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c
OBJ = check_figure.o check_valid.o create_finale_tab.o create_map.o \
create_tmp_str.o cut_figure.o cut_v.o fillit_recursive.o ft_remove_n2.o	\
ft_remove_n3.o ft_remove_n4.o main.o put_a.o put_b.o put_c.o put_d.o \
put_e.o	put_f.o	put_fgr.o put_g.o put_h.o put_i.o put_j.o put_k.o put_l.o \
put_m.o	put_n.o	put_o.o	put_p.o	put_q.o	put_r.o	put_s.o	remove_fgr.o \
str_to_tab.o ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all