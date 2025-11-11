//sort.c
#include "header.h"
extern int cnt;

void sort(STUDENT *ptr)
{
        STUDENT temp;
        for(int i=cnt-1; i>0; i--)
        {
                for(int j=0; j<i; j++)
                {
                        if(strcmp(ptr[j].name, ptr[j+1].name)>0)
                        {
                                temp = ptr[j];
                                ptr[j] = ptr[j+1];
                                ptr[j+1] = temp;
                        }
                }
        }
}
