/* Bradford Smith
 * Useful C appendNode.c
 * 05/15/2016
 */

#include "linked_list.h"

/* pre: takes in a struct s_node** 'list' and a struct s_node* 'n'
 * post: appends 'n' to the end of the linked list pointed to by 'list'
 */
void appendNode(struct s_node** list, struct s_node* n)
{
    struct s_node* tmp;

    if (n != NULL)
    {
        if ((*list) == NULL)
            (*list) = n;
        else
        {
            for (tmp = (*list); tmp->next != NULL; tmp = tmp->next)
                ; /* note the empty loop */
            tmp->next = n;
        }
    }
}

