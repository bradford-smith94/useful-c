/* Bradford Smith
 * Useful C removeNode.c
 * 05/15/2016
 */

#include "linked_list.h"

/* pre: takes in a struct s_node* 'first' and a struct s_node* 'second', where
 *      'second' is the struct s_node to be removed and 'first' is the struct
 *      s_node immediately before it
 * post: removes 'second' from the linked list
 * return: a struct s_node* pointing to the struct s_node that was removed
 */
struct s_node* removeNode(struct s_node* first, struct s_node* second)
{
    struct s_node* ret;

    ret = second;
    first->next = second->next;
    second->next = NULL;

    return ret;
}

