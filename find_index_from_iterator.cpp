#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << endl;
    }
    cout << endl;
    int ind;
    ind=find(msg.begin(),msg.end(),"VS Code")-msg.begin();
    cout<<ind;
    return 0;
}