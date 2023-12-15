#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swp;
    t_list *tmp;

    tmp = lst;
    while (lst->next)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swp;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}

// // Function to create a new node for the linked list
// t_list* create_node(int data) {
//     t_list* new_node = (t_list*)malloc(sizeof(t_list));
//     new_node->data = data;
//     new_node->next = NULL;
//     return new_node;
// }

// // Function to print the elements of the linked list
// void print_list(t_list* lst) {
//     while (lst != NULL) {
//         printf("%d ", lst->data);
//         lst = lst->next;
//     }
//     printf("\n");
// }

// int main() {
//     // Create a linked list
//     t_list* list = create_node(3);
//     list->next = create_node(1);
//     list->next->next = create_node(4);
//     list->next->next->next = create_node(2);

//     // Print the original list
//     printf("Original list: ");
//     print_list(list);

//     // Sort the list in ascending order using the provided comparison function
//     list = sort_list(list, ascending);

//     // Print the sorted list
//     printf("Sorted list: ");
//     print_list(list);

//     // Free the memory allocated for the linked list nodes
//     while (list != NULL) {
//         t_list* temp = list;
//         list = list->next;
//         free(temp);
//     }
//     return 0;
// }
