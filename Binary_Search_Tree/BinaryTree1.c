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

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\t",Head->data);
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

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d\t",Head->data);
        Inorder(Head->rchild);
    }
}

int main()
{
    PNODE First = NULL;

    Insert(&First,4);
    Insert(&First,2);
    Insert(&First,5);
    Insert(&First,3);
    Insert(&First,7);
    Insert(&First,6);
    Insert(&First,9);
    Insert(&First,8);
    Insert(&First,1);

    printf("Elements in Inorder format : \n");
    Inorder(First);

    printf("\n\n");

    printf("Elements in Postorder format : \n");
    Postorder(First);
    
    printf("\n\n");

    printf("Elements in Preorder format : \n");
    Preorder(First);

    printf("\n\n");

    return 0;
}