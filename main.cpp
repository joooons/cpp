#include <iostream>
#include <vector>
#include <string>
#include "includes/vector_functions.h"
#include "includes/leet.h"

using namespace std;

int main()
{
    vector<int> arr = {3, 2, 2, 5, 1, 7, 2, 4};
    int val = 2;

    cout << "hello this";

    cout << "showVector() " << showVector(arr) << endl;
    coutVector(arr);

    cout << removeElement(arr, val) << endl;

    return 0;
}