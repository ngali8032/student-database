//sync.c
#include "header.h"
extern int c;

void *sync(STUDENT *ptr)
{
        FILE *file = NULL;
        file = fopen("n.txt", "r");

        if(file==NULL)
        {
                printf("Filed open failed\n");
                return NULL;
        }

        printf("Successfully opened");

        STUDENT temp;
        while(fread(&temp, sizeof(STUDENT), 1, file)==1)
        {
                ptr = realloc(ptr, (cnt+1)*sizeof(STUDENT));
                ptr[cnt] = temp;
                cnt++;
        }
        return ptr;
}
