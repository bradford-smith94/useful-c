/* Bradford Smith
 * Useful C prependNode.c
 * 05/15/2016
 */

#include "linked_list.h"

/* pre: takes in a struct s_node** 'list' and a struct s_node* 'n'
 * post: prepends 'n' to the beginning of the linked list pointed to by 'list'
 */
void prependNode(struct s_node** list, struct s_node* n)
{
    n->next = (*list);
    (*list) = n;
}

