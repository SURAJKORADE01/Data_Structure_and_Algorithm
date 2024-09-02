// Max/Min element

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void Insert(PPNODE Head,int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->lchild = NULL;
    newn->data = iNo;
    newn->rchild = NULL;

    PNODE temp = *Head;

    if(*Head == NULL)
    {
        *Head = newn;
    }

    else
    {
        while(1)
        {
            if(iNo == temp->data)
            {
                printf("Duplicate element unable to insert\n");
                free(newn);
                break;
            }

            else if(iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }

                temp = temp->rchild;
            }

            else if(iNo < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;
            }
        }
    }
}

int FindMinElement(PNODE Head)
{
    if(Head == NULL)
    {
        return -1;
    }

    while(Head->lchild != NULL)
    {
        Head = Head->lchild;
    }

    return Head->data;
}

int FindMaxElement(PNODE Head)
{
    if(Head == NULL)
    {
        return -1;
    }

    while(Head->rchild != NULL)
    {
        Head = Head->rchild;
    }

    return Head->data;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Insert(&First,4);
    Insert(&First,2);
    Insert(&First,5);
    Insert(&First,3);
    Insert(&First,7);
    Insert(&First,6);
    Insert(&First,9);
    Insert(&First,8);
    Insert(&First,1);

    iRet = FindMaxElement(First);
    printf("Maximum element from BST is : %d\t",iRet);    
    
    return 0;
}