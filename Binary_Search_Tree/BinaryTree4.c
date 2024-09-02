// Ceil in a Binary Search Tree

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

int findCell(PNODE Head,int iNo)
{
    int iCell = -1;

    while(Head)
    {
        if(Head->data == iNo)
        {
            iCell = Head->data;
            break;
        }

        else if(iNo > Head->data)
        {
            Head = Head->rchild;
        }

        else
        {
            iCell = Head->data;
            Head = Head->lchild;
        }
    }

    return iCell;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Insert(&First,10);
    Insert(&First,5);
    Insert(&First,13);
    Insert(&First,3);
    Insert(&First,6);
    Insert(&First,11);
    Insert(&First,14);
    Insert(&First,2);
    Insert(&First,4);
    Insert(&First,9);
    
    iRet = findCell(First,8);
    printf("The smallest value greater or equal to 8 is : %d\n",iRet);

    return 0;
}