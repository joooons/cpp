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
         {7, 6, 4, 3, 1},
         {4},
         {7, 15, 1, 9, 3, 10, 0}};

    // vector<int> vals = {3, 2};

    for (int i = 0; i < cases.size(); i++)
    {
        cout << showVector(cases[i]) << " ==> " << maxProfit(cases[i]) << endl;
    }

    return 0;
}