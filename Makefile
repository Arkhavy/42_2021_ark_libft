# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/10 09:59:23 by ljohnson          #+#    #+#              #
#    Updated: 2022/03/04 14:00:46 by ljohnson         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re norm
.SILENT:

NAME		:= libft.a
MAIN		:=
BINARY		:=

#//////////////////////////////////////////////////////////////////////////////
#		ALL FILES
#//////////////////////////////////////////////////////////////////////////////

HEADERS		:=	libft.h				ft_bool.h				ft_conv.h				\
				ft_count.h			ft_lst.h				ft_maths.h				\
				ft_mem.h			ft_print.h				ft_proj.h				\
				ft_str.h

SRC_BOOL	:=	ft_isalnum.c		ft_isalpha.c			ft_isascii.c			\
				ft_ischarset.c		ft_isdigit.c			ft_islower.c			\
				ft_isnotcharset.c	ft_isprime.c			ft_isprint.c			\
				ft_isspace.c		ft_isupper.c

SRC_CONV	:=	ft_atoi.c			ft_atol.c				ft_big_atoi.c			\
				ft_big_atol.c		ft_itoa.c				ft_str_tolower.c		\
				ft_str_toupper.c	ft_striteri.c			ft_strmapi.c			\
				ft_swap.c			ft_tolower.c			ft_toupper.c

SRC_COUNT	:=	ft_count_char.c		ft_count_word.c			ft_strlcat.c			\
				ft_strlcpy.c		ft_strlen.c

SRC_LST		:=	ft_lstadd_back.c	ft_lstadd_front.c		ft_lstclear.c			\
				ft_lstdelone.c		ft_lstiter.c			ft_lstlast.c			\
				ft_lstmap.c			ft_lstnew.c				ft_lstsize.c			\
				ft_lstfree.c

SRC_MATHS	:=	ft_approx_sqrt.c	ft_factorial.c			ft_find_next_prime.c	\
				ft_get_highest.c	ft_power.c				ft_sqrt.c				\
				ft_get_lowest.c

SRC_MEM		:=	ft_bzero.c			ft_calloc.c				ft_free_split.c			\
				ft_free.c			ft_memchr.c				ft_memcmp.c				\
				ft_memcpy.c			ft_memmove.c			ft_memset.c

SRC_PRINT	:=	ft_putchar_fd.c		ft_putendl_fd.c			ft_putnbr_base_fd.c		\
				ft_putnbr_fd.c		ft_putptr_fd.c			ft_putstr_fd.c

SRC_PROJ	:=	ft_gnl_join.c		ft_heredoc.c			ft_printf.c				\
				get_next_line.c		ft_dprintf.c

SRC_STR		:=	ft_int_strchr.c		ft_split.c				ft_strcat.c				\
				ft_strchr.c			ft_strcpy.c				ft_strdup.c				\
				ft_strfreejoin.c	ft_strjoin.c			ft_strncat.c			\
				ft_strncmp.c		ft_strncpy.c			ft_strnjoin.c			\
				ft_strnstr.c		ft_strrchr.c			ft_strstr.c				\
				ft_strtrim.c		ft_substr.c				ft_unsplit.c

#//////////////////////////////////////////////////////////////////////////////
#		SRCS & OBJ PATHS
#//////////////////////////////////////////////////////////////////////////////

SRCP		:=	lib_src/
OBJP		:=	.lib_obj/
INCP		:=	lib_includes/

SRCS		:=	$(addprefix $(SRCP)lib_bool/,$(SRC_BOOL))	\
				$(addprefix $(SRCP)lib_lst/,$(SRC_LST))		\
				$(addprefix $(SRCP)lib_mem/,$(SRC_MEM))		\
				$(addprefix $(SRCP)lib_print/,$(SRC_PRINT))	\
				$(addprefix	$(SRCP)lib_proj/,$(SRC_PROJ))	\
				$(addprefix $(SRCP)lib_str/,$(SRC_STR))		\
				$(addprefix $(SRCP)lib_maths/,$(SRC_MATHS))	\
				$(addprefix $(SRCP)lib_conv/,$(SRC_CONV))	\
				$(addprefix $(SRCP)lib_count/,$(SRC_COUNT))

INCS		:=	$(addprefix $(INCP),$(HEADERS))
OBJS		:=	$(subst $(SRCP),$(OBJP),$(SRCS:.c=.o))

#//////////////////////////////////////////////////////////////////////////////
#		COMMAND SHORTCUTS
#//////////////////////////////////////////////////////////////////////////////

CC			:=	gcc
CF			:=	-Wall -Werror -Wextra
CS			:=	-g -fsanitize=address
CG			:=	-g3
NC			:=	norminette
AR			:=	ar rcs
RM			:=	rm -rf

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
ERASE=\033[2K\r
RST=\033[0m
BOLD=\033[1m
FAINT=\033[2m
ITALIC=\033[3m
UNDERLINE=\033[4m

#//////////////////////////////////////////////////////////////////////////////
#		RULES
#//////////////////////////////////////////////////////////////////////////////

all: $(NAME)

# Binary creation

$(NAME): $(OBJS) Makefile
	$(AR) $(NAME) $(OBJS)
	printf "\n$(GREEN)$(BOLD)Library $(NAME) created$(RST)	✅\n"

$(OBJS): $(OBJP)

$(OBJP):
	mkdir -p	$(OBJP)				$(OBJP)/lib_bool/	$(OBJP)/lib_lst/	\
				$(OBJP)/lib_mem/	$(OBJP)/lib_print/	$(OBJP)/lib_proj/	\
				$(OBJP)/lib_str/	$(OBJP)/lib_conv/	$(OBJP)/lib_maths/	\
				$(OBJP)/lib_count/
	printf "$(GREEN)$(BOLD)obj directories created$(RST)	✅\n"

$(OBJP)%.o: $(SRCP)%.c $(INCS) Makefile
	printf "$(ERASE)$(FAINT)$(CC) $(CF) -I $(INCP) -c -o $(RST)$(CYAN)$(BOLD)$@$(RST) $(FAINT)$(BLUE)$<$(RST)"
	$(CC) $(CF) -I $(INCP) -c $< -o $@

# Additional rules

norm:
	printf "\n$(BOLD)$(CYAN)$(NC) $(SRCP) $(INCP)$(RST)\n"
	$(NC) $(SRCS)
	$(NC) $(INCS)

comp: $(SRCS) $(MAIN)
	$(CC) $(CF) $(CS) $^ -o $(BINARY)CS
	$(CC) $(CF) $(CG) $^ -o $(BINARY)CG
	
# Mandatory rules

clean:
	$(RM) $(OBJS)
	printf "$(YELLOW)$(BOLD)All object files removed$(RST)\n"

fclean: clean
	$(RM) $(NAME) $(OBJP)
	printf "$(YELLOW)$(BOLD)All object folders removed$(RST)\n"
	printf "$(RED)$(BOLD)Library $(NAME) removed $(RST)\n"

re: fclean all