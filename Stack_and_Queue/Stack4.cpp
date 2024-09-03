// Implement stack using LinkedList

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
        int DeleteFirst();

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

int Stack :: DeleteFirst()
{
    int iData = 0;

    if(First == NULL)
    {
        cout<<"Linked list is empty\n";
        return -1;
    }

    else if(First->next == NULL)
    {
        iData = First->data;

        delete First;
        First = NULL;
    }

    else
    {
        PNODE temp = First;
        iData = temp->data;
        
        First = First->next;
        delete temp;
    }

    iCount--;
    return iData;
}

void Stack :: Display()
{
    PNODE temp = First;

    cout<<"The elements from the stack are : \n";

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout<<"| "<<temp->data<<" | \n";
        temp = temp->next;
    }
}

int Stack :: Count()
{
    return iCount;
}

int main()
{
    Stack sobj  ;

    sobj.InsertLast(51);
    sobj.InsertLast(41);
    sobj.InsertLast(31);
    sobj.InsertLast(21);
    sobj.InsertLast(11);
    sobj.Display();

    cout<<"Number of elements in the stack are : "<<sobj.Count()<<"\n";

    sobj.DeleteFirst();
    sobj.Display();
    cout<<"Number of elements in the stack are : "<<sobj.Count()<<"\n";
    
    return 0;
}