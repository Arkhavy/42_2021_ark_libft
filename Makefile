# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 14:41:20 by ljohnson          #+#    #+#              #
#    Updated: 2022/01/21 08:30:17 by ljohnson         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re norm comp

NAME = libft.a
MAIN = 
BINARY =

#//////////////////////////////////////////////////////////////////////////////
#		ALL FILES
#//////////////////////////////////////////////////////////////////////////////

SRC_BOOL =	ft_isalnum.c			ft_isalpha.c			ft_isascii.c		ft_isdigit.c		\
			ft_isprint.c			ft_ischarset.c			ft_isnotcharset.c	ft_isupper.c		\
			ft_islower.c			ft_isspace.c			ft_isprime.c

SRC_LST =	ft_lstadd_back.c		ft_lstadd_front.c		ft_lstclear.c		ft_lstdelone.c		\
			ft_lstiter.c			ft_lstlast.c			ft_lstmap.c			ft_lstnew.c			\
			ft_lstsize.c

SRC_MEM =	ft_bzero.c				ft_calloc.c				ft_memchr.c			ft_memcmp.c			\
			ft_memcpy.c				ft_memmove.c			ft_memset.c			ft_free.c			\
			ft_free_split.c

SRC_PRINT =	ft_int_putchar.c		ft_int_putnbr.c			ft_int_putptr.c		ft_putstr_fd.c		\
			ft_putchar_fd.c			ft_putendl_fd.c			ft_putnbr_fd.c		ft_int_putstr.c		\
			ft_int_putnbr_base.c	ft_putptr_fd.c			ft_putnbr_base_fd.c

SRC_STR =	ft_int_strchr.c			ft_split.c				ft_strchr.c			ft_strdup.c			\
			ft_strjoin.c			ft_strncmp.c			ft_strnjoin.c		ft_strnstr.c		\
			ft_strrchr.c			ft_strstr.c				ft_strtrim.c		ft_substr.c			\
			ft_strcpy.c				ft_strncpy.c			ft_unsplit.c		ft_strcat.c			\
			ft_strncat.c			ft_strfreejoin.c

SRC_CONV =	ft_toupper.c			ft_tolower.c			ft_atoi.c			ft_atol.c			\
			ft_itoa.c				ft_big_atoi.c			ft_big_atol.c		ft_swap.c			\
			ft_str_toupper.c		ft_str_tolower.c		ft_striteri.c		ft_strmapi.c

SRC_MATHS =	ft_sqrt.c				ft_factorial.c			ft_power.c			ft_get_highest.c	\
			ft_find_next_prime.c	ft_approx_sqrt.c

SRC_COUNT = ft_strlcat.c			ft_strlcpy.c			ft_strlen.c			ft_count_word.c		\
			ft_count_char.c

# SRC_MLX =	ft_mlx_square.c			ft_mlx_square_board.c	ft_mlx_point_board.c

SRC_PROJ =	ft_printf.c				get_next_line.c			ft_heredoc.c		ft_gnl_join.c

SRCS =	${addprefix lib_src/lib_bool/,${SRC_BOOL}}		${addprefix lib_src/lib_lst/,${SRC_LST}}		\
		${addprefix lib_src/lib_mem/,${SRC_MEM}}		${addprefix lib_src/lib_print/,${SRC_PRINT}}	\
		${addprefix lib_src/lib_proj/,${SRC_PROJ}}		${addprefix lib_src/lib_str/,${SRC_STR}}		\
		${addprefix lib_src/lib_maths/,${SRC_MATHS}}	${addprefix lib_src/lib_conv/,${SRC_CONV}}		\
		${addprefix lib_src/lib_count/,${SRC_COUNT}}	\
		# ${addprefix lib_src/lib_mlx/,${SRC_MLX}}

#//////////////////////////////////////////////////////////////////////////////
#		OBJ CREATION
#//////////////////////////////////////////////////////////////////////////////

OBJS = ${addprefix ${OBJP},${subst ${SRCP},/,${SRCS:.c=.o}}}

SRCP = lib_src/
OBJP = lib_obj
INCP = ./lib_includes/

#//////////////////////////////////////////////////////////////////////////////
#		COMMAND SHORTCUTS
#//////////////////////////////////////////////////////////////////////////////

CC = gcc
CF = -Wall -Wextra -Werror
CS = -g -fsanitize=address
CG = -g3

NCF = norminette -R CheckForbiddenSourceHeader
NCD = norminette -R CheckDefine

AR = ar rcs
RM = rm -rf

#//////////////////////////////////////////////////////////////////////////////
#		COLORS
#//////////////////////////////////////////////////////////////////////////////

# colors
BLACK=\033[30m
RED=\033[31m
GREEN=\033[32m
YELLOW=\033[33m
BLUE=\033[34m
PURPLE=\033[35m
CYAN=\033[36m
WHITE=\033[37m

# text
RESET=\033[0m
BOLD=\033[1m
FAINT=\033[2m
ITALIC=\033[3m
UNDERLINE=\033[4m

#//////////////////////////////////////////////////////////////////////////////
#		RULES
#//////////////////////////////////////////////////////////////////////////////

all: ${NAME}

# Binary creation

${NAME}: ${OBJS}
	@${AR} ${NAME} ${OBJS}
	@echo "\n${GREEN}${BOLD}Library ${NAME} created${RESET}	✅\n"

${OBJS}: ${OBJP}

${OBJP}:
	@mkdir	${OBJP}
	@mkdir	${OBJP}/lib_bool/	${OBJP}/lib_lst/	${OBJP}/lib_mem/	\
			${OBJP}/lib_print/	${OBJP}/lib_proj/	${OBJP}/lib_str/	\
			${OBJP}/lib_conv/	${OBJP}/lib_maths	${OBJP}/lib_mlx/	\
			${OBJP}/lib_count/
	@echo "\n${GREEN}${BOLD}obj directories created${RESET}\n"

${OBJP}/%.o: ${SRCP}%.c ${INCP}libft.h
	@echo "${FAINT}${CC} ${CF} -c -o	${RESET}${CYAN}${BOLD}$@${RESET} ${FAINT}${BLUE}$<${RESET}"
	@${CC} ${CF} -c -o $@ $<

# Additional rules

norm:
	@echo "\n${BOLD}${CYAN}${NCF}${RESET}\n"
	@${NCF} ${SRCP}
	@echo "\n${BOLD}${CYAN}${NCD}${RESET}\n"
	@${NCD} ${INCP}

comp: ${SRCS} ${MAIN}
	${CC} ${CF} ${CS} $^ -o ${BINARY}1
	${CC} ${CF} ${CG} $^ -o ${BINARY}2

# Mandatory rules

clean:
	@${RM} ${OBJS}
	@echo "\n${YELLOW}${BOLD}All object files removed${RESET}"

fclean: clean
	@${RM} ${NAME} ${OBJP}
	@echo "${YELLOW}${BOLD}All object folders removed${RESET}"
	@echo "${RED}${BOLD}Library ${NAME} removed${RESET}\n"

re: fclean all