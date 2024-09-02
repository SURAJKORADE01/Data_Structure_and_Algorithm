#include<iostream>
using namespace std;

template<class T>
struct BinarySearchTree
{
    struct BinarySearchTree *lchid;
    T data;
    struct BinarySearchTree *rchild;
};

template<class T>
class Binary
{
    private:
        struct BinarySearchTree<T> *First;
        int iCount;
    
    public:

        Binary();
        void Insert(T);
        int Count();

        void Inorder(struct BinarySearchTree<T> *);
        void DisplayInorder();
};

template<class T>
Binary<T> :: Binary()
{
    First = NULL;
    iCount = 0;
}

template<class T>
void Binary<T> :: Insert(T No)
{
    BinarySearchTree<T> *newn = new BinarySearchTree<T>;

    newn->lchid = NULL;
    newn->data = No;
    newn->rchild = NULL;

    if(First == NULL)
    {
        First = newn;
    }

    else
    {
        BinarySearchTree<T> *temp = First;

        while(1)
        {
            if(temp->data == No)
            {
                cout<<"Duplicate element : Unable to insert\n";
                delete newn;
                break;
            }

            else if(temp->data > No)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }

                temp = temp->rchild;
            }

            else if(temp->data < No)
            {
                if(temp->lchid == NULL)
                {
                    temp->lchid = newn;
                    break;
                }

                temp = temp->lchid;
            }
        }
    }

    iCount++;
}

template<class T>
int Binary<T> :: Count()
{
    return iCount;
}

template<class T>
void Binary<T> :: Inorder(struct BinarySearchTree<T> *Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchid);
        cout<<Head->data<<"\t";
        Inorder(Head->rchild);
    }
}

template<class T>
void Binary<T> :: DisplayInorder()
{
    Inorder(First);
}

int main()
{
    Binary<int> bobj;

    bobj.Insert(21);
    bobj.Insert(23);
    bobj.Insert(15);
    bobj.Insert(78);
    bobj.Insert(45);
    bobj.Insert(10);
    bobj.Insert(90);
    bobj.Insert(18);
    bobj.Insert(22);
    bobj.Insert(7);
    
    bobj.DisplayInorder();
    return 0;
}