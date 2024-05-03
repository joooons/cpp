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
        {{3, 2, 3},
         {0, 0, 1, 1, 1, 2, 2, 3, 1, 1},
         {9},
         {2, 2, 1, 1, 1, 2, 2}};

    for (int i = 0; i < cases.size(); i++)
    {
        cout << showVector(cases[i]) << " => " << majorityElement(cases[i]) << endl;
    }

    return 0;
}