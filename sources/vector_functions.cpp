#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <ctime>

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