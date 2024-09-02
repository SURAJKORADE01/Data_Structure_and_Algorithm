#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        Node *next;

        Node()
        {
            this->data = 0;
            this->next = NULL;
        }

        Node(int iNo)
        {
            this->data = iNo;
            this->next = NULL;
        }

} NODE, *PNODE;

class SinglyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        SinglyLL();
        ~SinglyLL();

        void InsertFirst(int);
        void DeleteLast();
        void Display();
        int Count();

        bool CheckElement(int);
};

SinglyLL::SinglyLL() : First(NULL), iCount(0)
{
}

SinglyLL :: ~SinglyLL()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        First = First->next;
        delete temp;
        temp = First;
    }
}

void SinglyLL::Display()
{
    cout << "The elements of the linked list are : \n";

    PNODE temp = First;

    while(temp != NULL)
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn = new NODE(iNo);

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }

    iCount++;
}

void SinglyLL::DeleteLast()
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

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    iCount--;  // Moved outside the conditional blocks
}

bool SinglyLL::CheckElement(int iNo)
{
    bool bFlag = false;

    PNODE temp = First;

    while(temp != NULL)
    {
        if(temp->data == iNo)
        {
            bFlag = true;
            break;
        }

        temp = temp->next;
    }

    return bFlag;
}

int main()
{
    SinglyLL sobj;
    int iValue = 0;
    bool bRet = false;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();

    sobj.DeleteLast();
    sobj.Display();
    cout << "Number of elements in the linked list are : " << sobj.Count();

    cout << "\n\nEnter the element that you want to search : ";
    cin >> iValue;

    bRet = sobj.CheckElement(iValue);

    if(bRet == true)
    {
        cout << "\nElement is present in the linked list\n";
    }
    else
    {
        cout << "\nElement is NOT present in the linked list\n";
    }

    return 0;
}
