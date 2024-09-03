// Implement Stack using Array

#include<bits/stdc++.h>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
        int iTop;

        ArrayX(int iSize)
        {
            this->iTop = -1;
            this->iSize = iSize;
            this->Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Push(int insert)
        {
            if(iTop > iSize)
            {
                cout<<"Size is greater than array's size";
                return;
            }

            iTop++;
            Arr[iTop] = insert;
        }

        int Pop()
        {
            if(iTop == -1)
            {
                cout<<"No element in the stack\n";
                return -1;
            }

            else
            {
                int iRemove = Arr[iTop];
                iTop--;
                return iRemove;
            }
        } 

        int Top()
        {
            if(iTop == -1)
            {
                cout<<"No elements in the array\n";
            }

            else
            {
                return Arr[iTop];
            }
        } 

        int Size()
        {
            return iTop + 1;
        } 
};

int main()
{
    int iValue = 0;
    cout<<"Enter the number of elements of the array : ";
    cin>>iValue;

    ArrayX *aobj = new ArrayX(iValue);

    aobj->Push(11);
    aobj->Push(12);
    aobj->Push(13);

    cout << "Top of stack is before deleting any element : " << aobj->Top() << endl;
    cout << "Size of stack before deleting any element : " << aobj->Size() << endl;
    cout << "The element deleted is : " << aobj->Pop() << endl;
    cout << "Size of stack after deleting an element : " << aobj->Size() << endl;
    cout << "Top of stack after deleting an element : " << aobj->Top() << endl;

    return 0;
}