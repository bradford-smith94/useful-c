/* Bradford Smith
 * Useful C insertNode.c
 * 05/15/2016
 */

#include "linked_list.h"

/* pre: takes in a struct s_node* 'first' and a struct s_node* 'second'
 * post: inserts 'second' into the linked list right after 'first'
 */
void insertNode(struct s_node* first, struct s_node* second)
{
    second->next = first->next;
    first->next = second;
}

