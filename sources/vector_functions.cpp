#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <ctime>

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

vector<int> vectorOfInt(int min, int max, int len)
{
    vector<int> arr;
    srand(time(NULL));
    for (int i = 0; i < len; i++)
    {
        arr.push_back(rand() % (max - min + 1) + min);
    }
    return arr;
}