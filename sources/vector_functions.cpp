#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <queue>
#include <unordered_map>

using namespace std;

void coutVector(vector<int> arr)
{
    // outputs each integer element of vector arr in the command line.
    for (auto i = arr.begin(); i != arr.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "\n";
}

string showVector(vector<int> arr)
{
    // returns a string of each integer of vector arr separated by a space.
    string r = to_string(arr[0]);
    for (int i = 1; i < arr.size(); ++i)
    {
        r = r + " " + to_string(arr[i]);
    }
    return r;
}

vector<int> vectorOfInt(int min, int max, int k)
{
    // generates a vector of k length, consisting of integers randomly selected
    // from a range of min to max, inclusive.
    vector<int> arr;
    srand(time(NULL));
    for (int i = 0; i < k; i++)
    {
        arr.push_back(rand() % (max - min + 1) + min);
    }
    return arr;
}

vector<int> vectorOfIntNonDecreasing(int a, int b, int k)
{
    // generates vector of length k consisting of integers in the inclusive range
    // between a and b in a non-decreasing order.
    priority_queue<int> q;
    vector<int> arr;
    srand(time(NULL));
    for (int i = 0; i < k; i++)
    {
        int n = rand() % (b - a + 1) + 1;
        q.push(-n);
    }
    for (int i = 0; i < k; i++)
    {
        arr.push_back(-q.top());
        q.pop();
    }
    return arr;
}

vector<vector<int>> vectorOfVectorOfIntDetailed(int x, int y, int min, int max)
{
    vector<vector<int>> arr;
    srand(time(NULL));

    for (int i = 0; i < x; i++)
    {
        arr.push_back({});
        for (int j = 0; j < y; j++)
        {
            int n = rand() % (max - min + 1);
            arr[i].push_back(n);
        }
    }

    return arr;
}

vector<vector<int>> vectorOfVectorOfInt(int x, int y)
{
    return vectorOfVectorOfIntDetailed(x, y, 0, 9);
}

vector<vector<int>> vectorOfVectorOfInt(int x, int y, int max)
{
    return vectorOfVectorOfIntDetailed(x, y, 0, max);
}

vector<vector<int>> vectorOfVectorOfInt(int x, int y, int min, int max)
{
    return vectorOfVectorOfIntDetailed(x, y, min, max);
}

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};