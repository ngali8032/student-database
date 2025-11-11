//find.c
#include "header.h"
extern int cnt;
void find(STUDENT *ptr)
{
        if(cnt==0)
        {
                printf("No database found\n");
                return;
        }

        int choice;
LABEL:
        printf("1.name\n2.roll\nchoose option for finding:-");
        scanf("%d", &choice);
        int flag=0;
        if(choice==1)
        {
                char n[20];
                printf("Enter the name to find:- ");
                scanf("%s", n);

                for(int i=0; i<cnt; i++)
                {
                        if((strcmp(ptr[i].name, n))==0)
                        {
                                flag=1;
                                printf("%d\t%s\n", ptr[i].roll, ptr[i].name);
                        }
                }
                if(flag==0)
                {
                        printf("Not found the %s with database\n", n);
                }
        }
        else if(choice==2)
        {
                int r;
                printf("Enter the roll to find:- ");
                scanf("%d", &r);

                for(int i=0; i<cnt; i++)
                {
                        if(ptr[i].roll==r)
                        {
                                flag=1;
                                printf("%d\t%s\n", ptr[i].roll, ptr[i].name);
                        }
                }

                if(flag==0)
                {
                        printf("Not found the %d with database\n", r);
                }
        }
        else
        {
                printf("Wrong option\n");
                goto LABEL;

        }
}
