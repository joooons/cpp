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
    vector<vector<int>> box = vectorOfVectorOfInt(3, 4, 0, 3);

    for (int i = 0; i < box.size(); i++)
    {
        coutVector(box[i]);
    }
    cout << " ----------------\n";

    minPathSum(box);

    return 0;
}