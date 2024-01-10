NAME = push_swap
CHECKER = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

SRC = ./push_swap.c ./check_args/error.c ./check_args/error_2.c ./check_args/valid_args.c ./libft_function/ft_atoi.c\
      ./libft_function/ft_split.c ./list_functions/linked_list.c ./check_args/check_duplicated.c\
      ./instruction/pp.c ./instruction/rr.c ./instruction/rrr.c ./instruction/ss.c\
      ./list_functions/instruction.c ./list_functions/linked_list_1.c ./solve/size_3.c ./solve/size_5.c\
      ./helper/helper.c ./choice/choice.c ./choice/choose_range.c ./helper/action_2.c\
      ./helper/bubble_sort.c ./solve/size_100.c ./helper/print_instr.c

BSRC = ./BONUS/checker.c ./BONUS/hundle_input.c ./gnl/get_next_line_utils.c \
       ./gnl/get_next_line.c \
      ./check_args/error.c ./check_args/error_2.c ./check_args/valid_args.c ./libft_function/ft_atoi.c\
      ./libft_function/ft_split.c ./list_functions/linked_list.c ./check_args/check_duplicated.c\
      ./instruction/pp.c ./instruction/rr.c ./instruction/rrr.c ./instruction/ss.c\
      ./list_functions/instruction.c ./list_functions/linked_list_1.c ./solve/size_3.c ./solve/size_5.c\
      ./helper/helper.c ./choice/choice.c ./choice/choose_range.c ./helper/action_2.c\
      ./helper/bubble_sort.c ./solve/size_100.c ./helper/print_instr.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ= $(BSRC:.c=.o)


all: $(NAME)

bonus: $(CHECKER)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(CHECKER): $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(BONUS_OBJ) -o $(CHECKER)

clean:
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -rf $(NAME) $(CHECKER)

re: fclean all

.PHONY: all re fclean clean bonus
