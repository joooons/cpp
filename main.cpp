#include <iostream>
#include <vector>
#include <string>
#include "header/vector_functions.h"
#include "header/leet.h"
// #include "header/monster.h"

using namespace std;

int main()
{
    vector<vector<int>> box = vectorOfVectorOfInt(6, 6, 0, 1);

    for (int i = 0; i < box.size(); i++)
    {
        coutVector(box[i]);
    }
    cout << " ----------------\n";

    minPathSum(box);

    // RandomizedSet thing;
    // thing.insert(5);
    // cout << thing.getRandom() << endl;
    // thing.insert(13);
    // thing.remove(5);
    // cout << thing.getRandom() << endl;
    // thing.remove(13);
    // thing.insert(1);
    // thing.insert(5);
    // thing.insert(2);
    // thing.insert(6);
    // thing.insert(4);
    // thing.insert(1);
    // thing.insert(1);
    // thing.insert(1);
    // thing.insert(1);
    // thing.insert(1);
    // thing.insert(1);
    // thing.insert(1);
    // thing.insert(1);
    // thing.insert(3);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << thing.getRandom() << " ";
    // }

    return 0;
}