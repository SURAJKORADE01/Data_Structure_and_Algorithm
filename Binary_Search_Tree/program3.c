// Height -> Maximum depth of a Binary Tree

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

void Insert(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->lchild = NULL;
    newn->data = iNo;
    newn->rchild = NULL;

    if((*Head == NULL))
    {
        *Head = newn;
    }

    else
    {
        PNODE temp = *Head;

        while(1)
        {
            if((temp->data == iNo))
            {
                printf("Duplicate element is NOT allowed.");
                free(newn);
                break;;
            }

            else if(temp->data < iNo)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }

                temp = temp->rchild;
            }

            else if(temp->data > iNo)
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

int Height(PNODE Head)
{
    if(Head == NULL)
    {
        return 0;
    }

    int left = Height(Head->lchild);
    int right = Height(Head->rchild);

    return (left > right ? left : right) + 1;
}

int main()
{
    PNODE First = NULL;

    Insert(&First,21);
    Insert(&First,23);
    Insert(&First,15);
    Insert(&First,78);
    Insert(&First,45);
    Insert(&First,10);
    Insert(&First,90);
    Insert(&First,18);
    Insert(&First,22);
    Insert(&First,7);
    Insert(&First,3);
    Insert(&First,100);
    Insert(&First,110);
    

    int iRet = Height(First);
    printf("Depth of Binary Tree is : %d\n",iRet);

    return 0;
}