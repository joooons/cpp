#include <iostream>
#include <vector>
#include <string>
#include "header/vector_functions.h"
#include "header/leet.h"
#include "header/monster.h"

using namespace std;

int main()
{
    Monster monster{100};
    monster.takeDamage(50);
    cout << "Monster hp: " << monster.getHp() << endl;

    return 0;
}