/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhanfa <oukhanfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 23:45:37 by oukhanfa          #+#    #+#             */
/*   Updated: 2025/01/18 00:05:13 by oukhanfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdbool.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/inc/ft_printf.h"

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}				t_list;
typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

char			*get_next_line(int fd);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				error_syntax(char *str_n);
void			stack_init(t_stack_node **a, char **argv, bool flag_argc_2);
void			free_matrix(char **argv);
void			free_stack(t_stack_node **stack);
void			error_free(t_stack_node **a, char **argv, bool flag_argc_2);
int				error_duplicate(t_stack_node *a, int n);
t_stack_node	*find_last(t_stack_node *stack);
int				stack_len(t_stack_node *stack);
bool			stack_sorted(t_stack_node *stack);
char			**ft_split(char *s, char c);
void			pa(t_stack_node **a, t_stack_node **b, bool print);
void			pb(t_stack_node **b, t_stack_node **a, bool print);
void			rra(t_stack_node **a, bool print);
void			rrb(t_stack_node **b, bool print);
void			rrr(t_stack_node **a, t_stack_node **b, bool print);
void			ra(t_stack_node **a, bool print);
void			rb(t_stack_node **b, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);
void			sa(t_stack_node	**a, bool print);
void			sb(t_stack_node **b, bool print);
void			ss(t_stack_node **a, t_stack_node **b, bool print);
int				ft_isdigit(int c);
void			append_node(t_stack_node **stack, int n);

#endif
