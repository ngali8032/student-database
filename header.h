//header file
#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
extern int cnt;

typedef struct
{
        int roll;
        char name[20];
        float marks;
}STUDENT;

void* insert(STUDENT *ptr);
void print(STUDENT *ptr);
void save(STUDENT *ptr);
void *sync(STUDENT *);
void sort(STUDENT *);
void find(STUDENT *);
void *delete(STUDENT *);

#define BLACK "\033[1;30m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
