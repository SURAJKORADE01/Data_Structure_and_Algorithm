// Search element in BST

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool SearchElement(PNODE Head, int iNo)
{
    PNODE temp = Head;
    bool bFlag = false;

    if(Head == NULL)
    {
        printf("Tree is empty\n");
        return bFlag;
    }

    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            bFlag = true;
            break;
        }

        else if(Head->data > iNo)
        {
            Head = Head->lchild;
        }

        else if(Head->data < iNo)
        {
            Head = Head->rchild;
        }
    }

    return bFlag;
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;

    Insert(&First,4);
    Insert(&First,2);
    Insert(&First,5);
    Insert(&First,3);
    Insert(&First,7);
    Insert(&First,6);
    Insert(&First,9);
    Insert(&First,8);
    Insert(&First,1);

    bRet = SearchElement(First,12);

    if(bRet == true)
    {
        printf("Element is present in the BST\n");
    }    

    else
    {
        printf("Element is NOT present in the BST\n");
    }    
    
    return 0;
}