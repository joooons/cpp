#include <iostream>
#include <vector>
#include <string>

using namespace std;

void coutVector(vector<int>);

string showVector(vector<int>);

vector<int> vectorOfInt(int min, int max, int len);

vector<int> vectorOfIntNonDecreasing(int, int, int);

vector<vector<int>> vectorOfVectorOfInt(int, int);
vector<vector<int>> vectorOfVectorOfInt(int, int, int);
vector<vector<int>> vectorOfVectorOfInt(int, int, int, int);

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode();
    explicit ListNode(int val) : val(val), next(nullptr) {}
    ~ListNode();
};