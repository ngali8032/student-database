//insert.c
#include "header.h"
extern int cnt;

void* insert(STUDENT *ptr)
{
        ptr = realloc(ptr, (cnt+1)*sizeof(STUDENT));
        printf("Enter the name:");
        scanf("%s", ptr[cnt].name);
        printf("Enter the roll:");
        scanf("%d", &ptr[cnt].roll);
        printf("Enter the marks:");
        scanf("%f", &ptr[cnt].marks);
        cnt++;
        return ptr;
}
