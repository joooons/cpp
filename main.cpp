#include <iostream>
#include <vector>
#include <string>
#include "header/vector_functions.h"
#include "header/leet.h"
#include "header/monster.h"

using namespace std;

int main()
{
    // Monster monster{100};
    // monster.takeDamage(50);
    // cout << "Monster hp: " << monster.getHp() << endl;

    vector<vector<int>> cases =
        {{1, 1, 2},
         {0, 0, 1, 1, 1, 2, 2, 3, 3, 4},
         {9},
         {7, 7, 7}};

    for (int i = 0; i < cases.size(); i++)
    {
        cout << showVector(cases[i]) << " => " << removeDuplicates(cases[i]) << endl;
    }

    return 0;
}