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
        {{2, 3, 1, 1, 4},
         {3, 2, 1, 0, 4},
         vectorOfInt(0, 5, 30),
         vectorOfInt(0, 6, 30),
         vectorOfInt(0, 4, 30),
         vectorOfInt(0, 9, 1)};

    // vector<int> vals = {3, 2};

    for (int i = 0; i < cases.size(); i++)
    {
        cout << showVector(cases[i]) << " -> " << canJump(cases[i]) << endl;
    }

    // vector<int> testArray = vectorOfIntNonDecreasing(0, 10, 20);
    // coutVector(testArray);

    return 0;
}