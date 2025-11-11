#include "header.h"
extern int cnt;

void print(STUDENT *ptr)
{
        if(cnt==0)
        {
                printf("DB is empty\n");
                return;
        }

        for(int i=0; i<cnt; i++)
        {
                printf(GREEN"%s\t%d\t%f\n"RESET, ptr[i].name, ptr[i].roll, ptr[i].marks);
        }
}
