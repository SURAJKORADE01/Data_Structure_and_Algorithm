// Implement Queue using LinkedList

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

class Queue
{   
    public:
        PNODE First;
        int iCount;

        Queue();

        void InsertLast(int);
        int DeleteLast();

        void Display();
        int Count();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue :: InsertLast(int iNo)
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

int Queue :: DeleteLast()
{
    int iData = 0;

    if(First == NULL)
    {
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

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        iData = temp->next->data;
        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

void Queue :: Display()
{
    PNODE temp = First;

    cout<<"The elements of the queue are : \n";

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout<<"| "<<temp->data<<" | \n";
        temp = temp->next;
    }
}

int Queue :: Count()
{
    return iCount;
}

int main()
{
    Queue qobj;

    qobj.InsertLast(51);
    qobj.InsertLast(41);
    qobj.InsertLast(31);
    qobj.InsertLast(21);
    qobj.InsertLast(11);
    qobj.Display();
    cout<<"Number of elements in the queue are : "<<qobj.Count()<<"\n";

    qobj.DeleteLast();
    qobj.Display();
    cout<<"Number of elements in the queue are : "<<qobj.Count()<<"\n";

    qobj.DeleteLast();
    qobj.Display();
    cout<<"Number of elements in the queue are : "<<qobj.Count()<<"\n";
       
    return 0;
}