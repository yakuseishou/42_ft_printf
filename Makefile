# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 15:40:53 by kchen2            #+#    #+#              #
#    Updated: 2019/10/11 18:30:21 by kchen2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

TEST = ft_printf

FLAGS = -Wall -Werror -Wextra

INCS = includes
LIB = libft/libft.a

FILES = ft_printf \
		print_int \
		ulti_di	\
		store_flags \
		check_data \
		prin_num \
		prin_num_zpad \
		prin_f \
		ulti_f \
		prin_lf \
		ulti_lf \
		ulti_fex

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(LIB)
	gcc $(FLAGS) -c $(SRCS)
	ar -rcs $(NAME) libft/*.o $(OBJS)
	ranlib $(NAME)
	
$(LIB):
	@make -C libft/

clean:
	@rm -f $(OBJS)
	@make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all

norm:
	norminette $(SRCS) ft_printf.h

q:
	gcc $(FLAGS) -I libft/includes -c testmain.c
	# gcc $(FLAGS) -I libft/includes -c $(SRCS)
	gcc $(FLAGS) testmain.o $(NAME) $(LIB) -o $(TEST)

qclean: clean
	rm -f testmain.o
	rm -f $(TEST)
	
qfclean: fclean qclean