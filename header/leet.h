#ifndef LEET_H
#define LEET_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_map>

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

int minPathSum(vector<vector<int>> &grid);

class RandomizedSet
{
private:
    unordered_map<int, int> mp;

public:
    RandomizedSet();
    bool insert(int val);
    bool remove(int val);
    int getRandom();
};

#endif