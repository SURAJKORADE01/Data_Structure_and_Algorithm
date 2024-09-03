// Implement Queue using Arrays

#include<bits/stdc++.h>
using namespace std;

class QueueArray
{
    public:
        int *Arr;
        int iMaxSize;

        int iCurrentSize;        
        int iStart;
        int iEnd;

        QueueArray(int);

        void EnqueueElement(int iNo);
        int DequeueElement();

        int SizeofElement();
        int TopEmenent();
};  

QueueArray :: QueueArray(int iNo)
{
    this->iMaxSize = iNo;
    this->Arr = new int[iMaxSize];

    this->iCurrentSize = 0;
    this->iStart = -1;
    this->iEnd = -1;
}

void QueueArray :: EnqueueElement(int iNo)
{
    if(iCurrentSize == iMaxSize)
    {
        cout<<"Queue is full\n";
        return;
    }

    if(iEnd == -1)
    {
        iStart = 0;
        iEnd = 0;

        return;
    }

    else
    {
        iEnd = (iEnd + 1) % iMaxSize;

        this->Arr[iEnd] = iNo;
        iCurrentSize++;
    }
}

int QueueArray :: DequeueElement()
{
    if(iStart == -1)
    {
        cout<<"No element in the array\n";
        return -1;
    }

    int popped = Arr[iStart];

    if(iCurrentSize == 1)
    {
        iStart = -1;
        iEnd = -1;

        return popped;
    }

    else
    {
        iStart = (iStart + 1) % iMaxSize;
        iCurrentSize--;
        return popped;
    }
}

int QueueArray :: TopEmenent()
{
    if(iStart == -1)
    {
        cout<<"No element in the queue\n";
        return -1;
    }

    return Arr[iStart];
}

int QueueArray :: SizeofElement()
{
    if(iStart == -1 && iEnd == -1)
    {
        cout<<"No element in the array\n";
        return -1;
    }

    return iCurrentSize;
}

int main()
{
    int iValue = 0;
    cout<<"Enter the number of elements in the queue : ";
    cin>>iValue;

    QueueArray *qobj = new QueueArray(iValue);

    qobj->EnqueueElement(1);
    qobj->EnqueueElement(11);
    qobj->EnqueueElement(21);
    qobj->EnqueueElement(31);
    qobj->EnqueueElement(41);
    qobj->EnqueueElement(51);

    cout<<"Number of elements in the queue are : "<<qobj->SizeofElement()<<"\n";

    cout<<"The top element of the queue is : "<<qobj->TopEmenent()<<"\n";
    qobj->DequeueElement();

    cout<<"The top element of the queue is : "<<qobj->TopEmenent()<<"\n";
    
    cout<<"Element deleted from queue is : "<<qobj->DequeueElement()<<"\n";
    cout<<"Element deleted from queue is : "<<qobj->DequeueElement()<<"\n";
    
    cout<<"Number of elements in the queue are : "<<qobj->SizeofElement()<<"\n";

    return 0;
}