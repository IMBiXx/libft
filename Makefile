# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Valentin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/03 16:01:26 by Valentin          #+#    #+#              #
#    Updated: 2019/05/21 15:22:06 by valecart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a

LIBPATH:= lib/
LIB:= ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp \
		ft_strlen ft_strdup ft_strcpy ft_strncpy ft_strcat ft_strncat \
		ft_strlcat ft_strchr ft_strrchr ft_strstr ft_strnstr ft_strcmp \
		ft_strncmp ft_atoi ft_isdigit ft_isalpha ft_isalnum ft_isascii \
		ft_isprint ft_toupper ft_tolower ft_memalloc ft_memdel ft_strnew \
		ft_strdel ft_strclr ft_striter ft_striteri ft_strmap ft_strmapi \
		ft_strequ ft_strnequ ft_strsub ft_strjoin ft_strtrim ft_strsplit \
		ft_itoa ft_putchar ft_putstr ft_putendl ft_putnbr ft_putchar_fd \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew ft_lstdelone \
		ft_lstdel ft_lstadd ft_lstiter ft_lstmap ft_lstprint ft_strrev \
		ft_error ft_realloc ft_sort_integer_table ft_putnbr_base \
		ft_split_whitespaces ft_search_and_replace ft_lstsort ft_putnstr \
		ft_putuntil ft_putnchar ft_stack_pop ft_stack_push ft_atoi_len \
		ft_num_len_base ft_num_len_base_u ft_swap

PFPATH:= ft_printf/
PFSRC:= ft_printf io parsing parsing_utils io_csr io_doxb io_utils cast \
		io_f io_k io_other io_p f_utils

FILES = get_next_line

# === Standard ===

FLAGS = -Wall -Wextra -Werror -I$(HEADER)
CCHFPATH:= obj/
HEADER:= include/
SRCPATH:= src/

# ===== Colors =====
END:="\033[0;0m"
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
PURPLE:="\033[1;35m"
CYAN:="\033[1;36m"
WHITE:="\033[1;37m"

# === Auto ===

FILES += $(addprefix $(LIBPATH), $(LIB))
FILES += $(addprefix $(PFPATH), $(PFSRC))

SRC:= $(addprefix $(SRCPATH), $(addsuffix .c, $(FILES)))
OBJ:= $(addprefix $(CCHFPATH), $(addsuffix .o, $(FILES)))

CCHF:= .cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(END)
	@echo $(CYAN)"Compiling $@"$(GREEN)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Done."

$(CCHFPATH)%.o: $(SRCPATH)%.c | $(CCHF)
	@echo $(GREEN)".\c"
	@gcc $(FLAGS) -c $< -o $@

$(CCHF):
	@mkdir $(CCHFPATH)
	@mkdir $(CCHFPATH)$(LIBPATH)
	@mkdir $(CCHFPATH)$(PFPATH)
	@touch $(CCHF)

clean:
	@rm -rf $(CCHFPATH)
	@rm -f $(CCHF)
	@echo $(RED)"Object files removed."$(END)

fclean: clean
	@rm -f $(NAME)
	@echo "Executable removed."

re: fclean all

.PHONY: all clean fclean re
