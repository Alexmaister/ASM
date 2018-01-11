/*
 * HolaMundo.c
 *
 *  Created on: 10 ene. 2018
 *      Author: maister
 */


#include<stdio.h>

int main(){
 int c;
int a=5,b=3;


/*__asm__("movl $0x05, %%eax\n"
           "movl $0x03, %%ebx\n"
           "add %%eax,  %%ebx\n"
           "movl %%ebx,  %0": "=r" (c));*/

//__asm__("movl %1,%0\n\t add %2,%0":"=r"(c):"r"(a),"r"(b));
__asm__("mov $0x05,%%eax \n\t add $0x03,%%eax":"=r"(c));

	printf("%d",c);

return 0;
}
