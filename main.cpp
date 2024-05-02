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

    vector<vector<int>> cases = {{3, 2, 2, 3}, {0, 1, 2, 2, 3, 0, 4, 2}, {}, {5, 7, 4, 2, 2}};
    vector<int> vals = {3, 2, 3, 3};
    for (int i = 0; i < vals.size(); i++)
    {
        cout << showVector(cases[i]) << " " << vals[i] << " => " << removeElement(cases[i], vals[i]) << endl;
    }

    return 0;
}