//delete.c
#include "header.h"
extern int cnt;

void *delete(STUDENT *ptr)
{
        if(cnt==0)
        {
                printf("DB is empty\n");
                return NULL;
        }
        char name[20]; int flag=0;
        printf("Enter the name to delete:- ");
        scanf("%s", name);

        for(int i=0; i<cnt; i++)
        {
                if(strcmp(ptr[i].name, name)==0)
                {
                        flag=1;
                        memmove(ptr+i ,ptr+i+1, (cnt-i)*sizeof(STUDENT));
                        cnt--;
                        ptr = realloc(ptr, cnt*sizeof(STUDENT));
                }
        }

        if(flag==0)
        {
                printf("Not matched for %s name\n", name);
        }
        return ptr;
}
