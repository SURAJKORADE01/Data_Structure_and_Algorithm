#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void Insert(PPNODE Head,int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = *Head;

    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)           
    {
        *Head = newn;
    }

    else
    {
        while(1)
        {
            if(No == temp->data)
            {
                printf("Duplicate element unable to insert \n");
                free(newn);
                break;
            }

            else if(No > temp->data)
            {
                if(temp->rchild == NULL);
                {
                    temp->rchild = newn;
                    break;
                }
            }

            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
            }
        }
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\t",Head->data);
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d\t",Head->data);
        Inorder(Head->rchild);
    }
}

bool Search(PNODE Head,int No)
{
    bool bFlag = false;

    if(Head == NULL)
    {
        printf("Tree is empty\n");
        return bFlag;
    }

    while(Head != NULL)
    {
        if(No == Head->data)
        {
            bFlag = true;
            break;
        }

        else if(No > Head->data)
        {
            Head = Head->rchild;
        }

        else if(No < Head->data)
        {
            Head = Head->lchild;
        }
    }

    return bFlag;
}

int Count(PNODE Head)
{
    static int iCount = 0;

    if(Head != NULL)
    {
        iCount++;
        Count(Head->lchild);
        Count(Head->rchild);
    }
}

int CountLeafNode(PNODE Head)
{
    static int iCount = 0;

    if(Head != NULL)
    {
        if((Head->lchild == NULL) && (Head ->rchild == NULL))
        {
            iCount++;
        }

        CountLeafNode(Head->lchild);
        CountLeafNode(Head->rchild);
    }

    return iCount;
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;
    int iRet = 0;
    int iRet1 = 0;

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

    printf("Elements in Preorder format :\n");
    Preorder(First);

    printf("\nElements in Postorder format :\n");
    Postorder(First);

    printf("\nElements in Inorder format :\n");
    Inorder(First);

    bRet = Search(First,599);
    
    if(bRet == true)
    {
        printf("\nElement is present in the tree\n");
    }

    else
    {
        printf("\nElement is not present in the tree\n");
    }

    iRet = Count(First);
    printf("\nNumber of nodes in the tree are :%d\n",iRet);

    iRet1 = CountLeafNode(First);
    printf("\nNumber of leaf nodes in the tree are :%d\n",iRet1);

    return 0;
}