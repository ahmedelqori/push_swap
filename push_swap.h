/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:35:38 by ael-qori          #+#    #+#             */
/*   Updated: 2023/12/21 13:54:11 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// library

# include <unistd.h>
# include <stdlib.h>

// values

# define INT_MAX 2147483647
# define INT_MIN -2147483648 

// Struct I need

typedef struct s_list
{
	int				val;
	struct s_list	*next;
}	t_list;

typedef struct s_instruction
{
	char					*str;
	struct s_instruction	*next;
}	t_instruction;

// ============= valid list===============

void				ft_valid_list(int ac, char **av, t_list **stack_a);

// ================= libft function =========

long long int		ft_atoi(const char *s);
char				**ft_split(char const *s, char c);
size_t				ft_strlen(const char *s);
// ================== error==================

void				ft_print_error_free_arr(char **s);
void				ft_lstclear(t_list **lst);
char				**ft_free(char **tab);
void				ft_print_error(void);
int					ft_check_int_max(int ac, char **av);

// =================== error 2===================

int					ft_check_int_max_alloc(char **av);

// ================== check_duplicated ===========

void				ft_check_duplicated(t_list **stack_a);

// ============== linked list =====================

t_list				*ft_lst_new(int n);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);

// ================ linked list 1 ==================

t_list				*ft_lstlast(t_list *list);

// ================== INSTRUCTION ===================

void				pa(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_b, t_list **stack_a);

void				ra(t_list **stack_a);
void				rb(t_list **stack_b);
void				rr(t_list **stack_a, t_list **stack_b);

void				rra(t_list **stack_a);
void				rrb(t_list **stack_b);
void				rrr(t_list	**stack_a, t_list **stack_b);

void				sa(t_list	**stack_a);
void				sb(t_list	**stack_b);
void				ss(t_list **stack_a, t_list **stack_b);

// ================ INSTRUCTION LIST ====================

t_instruction		*ins_new(char *s);
void				ins_add_back(t_instruction **lst, t_instruction *new);
void				delete_last(t_instruction **lst);

// ================= CHOICE ========================

void				choise(t_list **stack_a, t_list **stack_b);

// ================= CHOOSE RANGE ==================

int					choose_range(int size);

// ================= SIZE 3 ========================

void				solve_3(t_list **stack_a);

// ================ SIZE 5 =========================

void				solve_5(t_list **stack_a, t_list **stack_b);

// ================ SIZE 100 ABOVE =================

void				solve_100(t_list **stack_a, t_list **stack_b,
						t_instruction **instr, int n);
void				action_2(t_list **stack_a, t_list **stack_b,
						t_instruction **instr);
// ================ HELP FUNCTION =================

int					get_index_max(t_list *head);
int					get_max(t_list *head);
int					is_sort(t_list *head);
int					is_fourbigest(t_list *head, int n);

// ================== BUBBLE Sort  ===================

int					*array_from_list(t_list *head);

// ================== PRINT _INSTR ===================

void				print_instruction_and_free(t_instruction **head);

// ================ BONUS ============================

void				ft_hundle_input(t_list **stack_a, t_list **stack_b);

#endif