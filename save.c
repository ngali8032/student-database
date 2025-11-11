//save.c
#include "header.h"
extern int c;

void save(STUDENT *ptr)
{
        FILE *file = NULL;
        file = fopen("n.txt", "w");

        fwrite(ptr, sizeof(STUDENT), cnt, file);
}
