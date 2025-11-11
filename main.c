//main.c
#include "header.h"
int cnt=0;
void printMenu()
{
        printf(RED"\ni.insert\n");
        printf("p.print\n");
        printf("s.save\n");
        printf("q.quit\n");
        printf("k.sort\n");
        printf("f.find\n");
        printf("d.delete\n"RESET);
        printf("Enter choice:");

}

int main()
{
        STUDENT *DB = NULL;
        DB = sync(DB);
        char choice;

        while(1)
        {
                printMenu();
                __fpurge(stdin);
                scanf("%c", &choice);

                switch(choice)
                {
                        case 'i': DB = insert(DB); break;
                        case 'p': print(DB); break;
                        case 's': save(DB); break;
                        case 'k': sort(DB); break;
                        case 'd': DB = delete(DB); break;
                        case 'q':exit(0);
                        case 'f': find(DB); break;
                        default: printf("Invalid input\n");
                }
        }
}
