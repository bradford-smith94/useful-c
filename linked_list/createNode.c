/* Bradford Smith
 * Useful C createNode.c
 * 05/15/2016
 */

#include "linked_list.h"

/* pre: takes in a void* 'data'
 * post: allocates a new linked list struct s_node holding 'data'
 * return: a struct s_node* pointing to the newly allocated linked list struct
 *      s_node, or NULL on error
 */
struct s_node* createNode(void* data)
{
    struct s_node* ret;

    ret = NULL;
    if (data != NULL)
    {
        if ((ret = (struct s_node*)malloc(sizeof(struct s_node))) != NULL)
        {
            ret->data = data;
            ret->next = NULL;
        }
    }

    return ret;
}

