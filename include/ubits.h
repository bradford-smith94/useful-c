/* Bradford Smith
 * Useful C ubits.h
 * 05/29/2016
 */

#ifndef _UBITS_H_
#define _UBITS_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* ubits - Useful Bits of C - my personal function library */

/* functions for making "vectors" */
char**  str2vect(char*);
void    free_vect(char**);

#endif /* _UBITS_H_ */
