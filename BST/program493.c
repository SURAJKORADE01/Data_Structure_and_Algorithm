#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = No;                  
    newn->next = NULL;

    if(*Head == NULL)                      
    {
        *Head = newn;
    }
    else
    {
       newn->next = *Head;                   
       *Head = newn;                            
    }

}

void DisplayI(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head->next;
    }
    printf(" NULL\n");
}

void DisplayR(PNODE Head)
{
    if(Head != NULL)
    {
        printf("|%d| ->",Head->data);
        Head = Head->next;
        DisplayR(Head);
    }
}

int Count(PNODE Head)
{
    static int iCount = 0;

    if(Head != NULL)
    {
        iCount++;
        Count(Head->next);    
    }

    return iCount;
}


int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    DisplayR(First);
    iRet = Count(First);

    printf("\nNumber of nodes in the linked list are :%d",iRet);

    return 0;
}