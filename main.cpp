#include <iostream>
#include <vector>
#include <string>
#include "header/vector_functions.h"
#include "header/leet.h"
// #include "header/monster.h"

using namespace std;

int main()
{
    // vector<vector<int>> cases = {{1, 2, 3}, {4, 5, 6}};

    vector<vector<int>> array = vectorOfVectorOfInt(5, 7, 22);

    for (int i = 0; i < array.size(); i++)
    {
        coutVector(array[i]);
    }

    return 0;
}