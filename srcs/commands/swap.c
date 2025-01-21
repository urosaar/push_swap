/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhanfa <oukhanfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 07:02:06 by oukhanfa          #+#    #+#             */
/*   Updated: 2025/01/21 08:51:20 by oukhanfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	swap(t_stack_node **head)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!*head || !(*head)->next)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	second->prev = first->prev;
	if (first->next)
		first->next->prev = first;
	second->next = first;
	first->prev = second;
	*head = second;
}
/*#include <stdio.h>
#include <stdlib.h>

// Define the node structure for a doubly linked list
typedef struct s_stack_node {
    int value;
    struct s_stack_node *prev;
    struct s_stack_node *next;
} t_stack_node;

// Function to create a new node
t_stack_node *new_node(int value) {
    t_stack_node *node = (t_stack_node *)malloc(sizeof(t_stack_node));
    node->value = value;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

// Function to print the list
void print_list(t_stack_node *head) {
    t_stack_node *current = head;
    while (current != NULL) {
        printf("%d <-> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

// The swap function
static void swap(t_stack_node **head)
{
    t_stack_node *first;
    t_stack_node *second;

    if (!*head || !(*head)->next)
        return;

    first = *head;
    second = first->next;

    // Swap the first and second nodes
    first->next = second->next;
    second->prev = first->prev;
    
    if (first->next)
        first->next->prev = first;

    second->next = first;
    first->prev = second;

    // Update the head of the list
    *head = second;
}

int main() {
    // Create a simple doubly linked list: 1 <-> 2 <-> 3 <-> 4
    t_stack_node *head = new_node(1);
    head->next = new_node(2);
    head->next->prev = head;
    head->next->next = new_node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new_node(4);
    head->next->next->next->prev = head->next->next;

    // Print the list before the swap
    printf("Before swap:\n");
    print_list(head);

    // Swap the first two nodes
    swap(&head);

    // Print the list after the swap
    printf("After swap:\n");
    print_list(head);

    // Free the allocated memory
    free(head->next->next->next);
    free(head->next->next);
    free(head->next);
    free(head);

    return 0;
}*/

void	sa(t_stack_node	**a, bool print)
{
	swap(a);
	if (!print)
		ft_printf("sa\n");
}

void	sb(t_stack_node **b, bool print)
{
	swap(b);
	if (!print)
		ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b, bool print)
{
	swap(a);
	swap(b);
	if (!print)
		ft_printf("ss\n");
}
