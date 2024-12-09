#include <stdio.h>
#include <sys/types.h>
#include "vm/cpu.h"



typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long long int int64;


#define $1 (int8 *) // refering one byte
#define $2 (int16)
#define $4 (int32)
#define $8 (int64)
#define $c (char *)
#define $i (int)

typedef int8 Stack[-1];
typedef Instruction Program;



struct s_vm {
    CPU c;
    Stack *s;

} ;
typedef struct s_vm bm;



int main (int, char**);


