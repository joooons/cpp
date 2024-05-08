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
        {{7, 1, 5, 3, 6, 4},
         //  {1, 2, 3, 4, 5},
         //  {7, 6, 4, 3, 1},
         //  {8},
         //  vectorOfInt(0, 1000, 2000),
         vectorOfInt(0, 12, 15)};

    // vector<int> vals = {3, 2};

    // for (int i = 0; i < cases.size(); i++)
    // {
    //     cout << showVector(cases[i]) << " ==> " << maxProfit(cases[i]) << endl;
    // }

    vector<int> testArray = vectorOfIntNonDecreasing(0, 10, 20);
    coutVector(testArray);

    return 0;
}