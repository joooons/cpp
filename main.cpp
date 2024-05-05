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
        {{1, 2, 3, 4, 5, 6, 7},
         {-1, -100, 3, 99}};
    vector<int> vals = {3, 2};
    for (int i = 0; i < cases.size(); i++)
    {
        rotate(cases[i], vals[i]);
        cout << showVector(cases[i]) << endl;
    }

    return 0;
}