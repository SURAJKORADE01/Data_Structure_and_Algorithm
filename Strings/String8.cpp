/*
    Sort Characters by frequency

    tree = t->1, r->1, e->2
    Result = eetr
*/

#include<bits/stdc++.h>
using namespace std;

void sortCharacterByFrequency(map<char,int> freqMap)
{
    vector<pair<char,int>> freqVec(freqMap.begin(),freqMap.end());

    sort(freqVec.begin(),freqVec.end(), [](pair<char,int> &a,pair<char,int> &b)
    {
        return a.second > b.second;
    }
    );


    cout << "Result is : ";
    
    for(int i = 0; i < freqVec.size(); i++)
    {
        auto pair = freqVec[i];

        for(int j = 0; i < pair.second; j++)
        {
            cout<<pair.first;
        }
    }

}

int main()
{
    map<char,int> freqMap;
    char Arr[20];

    cout<<"Enter the string : ";
    cin>>Arr;

    for(int i = 0; Arr[i] != '\0'; i++)
    {
        freqMap[Arr[i]]++;
    }

    sortCharacterByFrequency(freqMap);
    return 0;
}