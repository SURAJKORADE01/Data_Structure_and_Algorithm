// Insert node in BST

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

void Display(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Display(Head->lchild);
        Display(Head->rchild);
    }
}

int main()
{
    PNODE First = NULL;
    int iValue = 0;

    Insert(&First,40);
    Insert(&First,20);
    Insert(&First,60);
    Insert(&First,10);
    Insert(&First,30);
    Insert(&First,50);
    Insert(&First,70);

    Display(First);

    printf("\nEnter the value that you want to insert : ");
    scanf("%d",&iValue);

    Insert(&First,iValue);
    Display(First);

    return 0;
}