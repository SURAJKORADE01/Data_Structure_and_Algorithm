// Floor in a Binary Search Tree

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

int findFloor(PNODE Head,int iNo)
{
    int iFloor = -1;

    while(Head)
    {
        if(Head->data == iNo)
        {
            iFloor = Head->data;
            break;
        }

        else if(iNo > Head->data)
        {
            iFloor = Head->data;
            Head = Head->rchild;
        }

        else
        {
            Head = Head->lchild;
        }
    }

    return iFloor;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Insert(&First,8);
    Insert(&First,5);
    Insert(&First,12);
    Insert(&First,4);
    Insert(&First,7);
    Insert(&First,10);
    Insert(&First,14);
    Insert(&First,6);
    Insert(&First,13);

    iRet = findFloor(First,9);
    printf("The largest value greater or equal to 9 is : %d\n",iRet);

    return 0;
}