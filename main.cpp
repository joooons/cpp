#include <iostream>
#include <vector>
#include <string>
#include "header/vector_functions.h"
#include "header/leet.h"
// #include "header/monster.h"

using namespace std;

int main()
{
    vector<vector<int>> cases =
        {{7, 7, 2, 1, 1, 9},
         {7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
         {7, 7, 7},
         {3, 3, 3, 3, 3, 3, 3, 3, 3},
         {5, 5, 5, 5, 5},
         vectorOfIntNonDecreasing(0, 5, 10),
         vectorOfInt(0, 15, 11),
         vectorOfIntNonDecreasing(0, 24, 12)};

    // vector<int> vals = {3, 2};

    for (int i = 0; i < cases.size(); i++)
    {
        cout << showVector(cases[i]) << " ::\n";
        hIndex(cases[i]);
    }

    // vector<int> testArray = vectorOfIntNonDecreasing(0, 10, 20);
    // coutVector(testArray);

    return 0;
}