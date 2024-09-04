// Implement Min Stack

#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        Node *next;

        Node(int iNo)
        {
            data = iNo;
            next = NULL;
        }

}NODE,*PNODE;

class Stack 
{
    public:
        PNODE First;
        int iCount;

        Stack();

        void InsertLast(int);
        void DeleteFirst();
        int MinElement();

        void Display();
        int Count();
};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

void Stack :: InsertLast(int iNo)
{
    PNODE newn = new NODE(iNo);

    if(First == NULL)
    {
        First = newn;
    }

    else
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iCount++;
}

void Stack :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }

    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }

    else
    {
        PNODE temp = First;

        First = First->next;
        delete temp;
    }

    iCount--;
}

void Stack :: Display()
{
    PNODE temp = First;

    cout<<"The elemenets of the stack are : \n";

    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" | \n";
        temp = temp->next;
    }
}

int Stack :: Count()
{
    return iCount;
}

int Stack :: MinElement()
{
    int iMin = First->data;
    PNODE temp = First;

    while(temp != NULL)
    {
        if(temp->data < iMin)
        {
            iMin = temp->data;
        }

        temp = temp->next;
    }

    return iMin;
}

int main()
{
    Stack sobj;

    sobj.InsertLast(31);
    sobj.InsertLast(51);
    sobj.InsertLast(41);
    sobj.InsertLast(5);
    sobj.InsertLast(21);
    sobj.InsertLast(11);
    sobj.Display();
    cout<<"Number of elemens in the stack are : "<<sobj.Count()<<"\n";

    cout<<"Minimum element from the stack are : "<<sobj.MinElement()<<"\n";

    return 0;
}