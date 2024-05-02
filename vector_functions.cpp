#include <iostream>
#include <vector>
#include <string>

using namespace std;

void coutVector(vector<int> arr)
{
    for (auto i = arr.begin(); i != arr.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "\n";
}

string showVector(vector<int> arr)
{
    string r = "";
    for (int i = 0; i < arr.size(); ++i)
    {
        r = r + to_string(arr[i]) + " ";
    }
    return r;
}