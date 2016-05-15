/* Bradford Smith
 * Useful C popNode.c
 * 05/15/2016
 */

#include "linked_list.h"

/* pre: takes in a struct s_node** 'list'
 * post: removes the first struct s_node from 'list'
 * return: a struct s_node* pointing to the struct s_node removed from 'list'
 */
struct s_node* popNode(struct s_node** list)
{
    struct s_node* ret;

    ret = NULL;
    if ((*list) != NULL)
    {
        ret = (*list);
        (*list) = (*list)->next;
    }

    return ret;
}

