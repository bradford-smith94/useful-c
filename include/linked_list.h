/* Bradford Smith
 * Useful C linked_list.h
 * 05/15/2016
 */

#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* linked list s_node struct */
struct s_node {
    void* data;
    struct s_node* next;
};

struct s_node*      createNode(void*);
void                appendNode(struct s_node**, struct s_node*);
void                prependNode(struct s_node**, struct s_node*);
void                insertNode(struct s_node*, struct s_node*);
struct s_node*      popNode(struct s_node**);
struct s_node*      removeNode(struct s_node*, struct s_node*);

#endif /* _LINKED_LIST_H_ */
