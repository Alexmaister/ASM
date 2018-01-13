#define suma(r, a, b)\
  __asm__("FLD %1 \n FADD %2 \n FSTP %0 \n" : "=m"(r) : "m"(a), "m"(b) );
