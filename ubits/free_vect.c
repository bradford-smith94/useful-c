/* Bradford Smith
 * Useful C free_vect.c
 * 05/29/2016
 */

#include "ubits.h"

/* pre: takes in a char** 'vect'
 * post: frees each string in 'vect' then frees 'vect'
 */
void free_vect(char** vect)
{
	int i;

	for (i = 0; vect[i] != NULL; i++)
		free(vect[i]);
	free(vect[i]); /* free the last NULL */
	free(vect);
}

