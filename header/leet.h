#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool isSubsequence(string, string);

int minimumTotal(vector<vector<int>>);

void merge(vector<int>, int, vector<int>, int);

int findKthLargest(vector<int>, int);

int removeElement(vector<int> &nums, int);

int removeDuplicates(vector<int> &nums);

int majorityElement(vector<int> &nums);

void rotate(vector<int> &nums, int);

int maxProfit(vector<int> &prices);

bool canJump(vector<int> &nums);

int hIndex(vector<int> &citations);