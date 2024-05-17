#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
// #include <map>
#include <cmath>
#include <unordered_map>
#include <climits>

#include "../header/leet.h"

using namespace std;

bool isSubsequence(string s, string t)
{
    cout << s << " " << t << "\n";

    if (s.length() == 0)
    {
        cout << "True";
        return true;
    }

    if (s.length() > t.length())
    {
        cout << "False";
        return false;
    }

    int pointer = 0;

    for (int i = 0; i < t.length(); i++)
    {
        cout << t[i];
        if (s[pointer] == t[i])
        {
            cout << " found";
            pointer++;
            if (pointer == s.length())
            {
                cout << "\n"
                     << "True";
                return true;
            }
        }
        cout << "\n";
    }

    cout << "False in the end";
    return false;
}

int minimumTotal(vector<vector<int>> &triangle)
{
    for (int i = triangle.size() - 2; i > -1; --i)
    {
        cout << "line " << i << " - ";
        for (int j = 0; j < triangle.at(i).size(); j++)
        {
            int minVal = min(triangle.at(i + 1).at(j), triangle.at(i + 1).at(j + 1));
            cout << minVal << " ";
            triangle.at(i).at(j) = triangle.at(i).at(j) + minVal;
        }
        cout << "\n";
    }
    return triangle.at(0).at(0);
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int p1 = m - 1;
    int p2 = n - 1;
    int pw = m + n - 1;

    while (pw >= 0)
    {
        if (p1 < 0)
        {
            nums1[pw] = nums2[p2--];
        }
        else if (p2 < 0)
        {
            p1--;
        }
        else if (nums1[p1] > nums2[p2])
        {
            nums1[pw] = nums1[p1--];
        }
        else
        {
            nums1[pw] = nums2[p2--];
        }
        pw--;
    }
}

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> q;
    for (int num : nums)
    {
        q.push(-num);
        if (q.size() > k)
        {
            q.pop();
        }
    }

    return -q.top();
}

int removeElement(vector<int> &nums, int val)
{
    // 27. Remove Element
    int k = 0;
    for (int num : nums)
    {
        if (num != val)
        {
            nums[k++] = num;
        }
    }
    return k;
}

int removeDuplicates(vector<int> &nums)
{
    // 26. Remove Duplicates from Sorted Array
    int k = 1;
    if (nums.size() == 1)
    {
        return k;
    }
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int majorityElement(vector<int> &nums)
{
    // 169. Majority Element
    unordered_map<int, int> mp;

    int limit = (nums.size() + 1) / 2;

    for (int num : nums)
    {
        if (mp.find(num) == mp.end())
        {
            mp[num] = 1;
        }
        else
        {
            mp[num]++;
            if (mp[num] >= limit)
            {
                return num;
            }
        }
    }
    return nums[0];
}

void rotate(vector<int> &nums, int k)
{
    // 189. Rotate Array
    int n = k % nums.size();
    int a, b, temp;
    int i = 0;
    int count = 0;

    while (count < nums.size())
    {
        a = i;
        b = (a + nums.size() - n) % nums.size();
        temp = nums[a];
        while (b != i)
        {
            nums[a] = nums[b];
            count++;
            a = b;
            b = (b + nums.size() - n) % nums.size();
        }
        nums[a] = temp;
        i++;
        count++;
    }
}

int maxProfit(vector<int> &prices)
{
    // 122. Best Time to Buy and Sell Stock II

    // int min = INT_MAX;
    int profit = 0;

    // for (int num : prices)
    // {
    //     if (num < min)
    //     {
    //         min = num;
    //     }
    //     else if (num - min > profit)
    //     {
    //         profit = max(profit, num - min);
    //     }
    // }

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > prices[i - 1])
        {
            profit += prices[i] - prices[i - 1];
        }
    }

    return profit;
}

bool canJump(vector<int> &nums)
{
    // 55. Jump Game
    int target = nums.size() - 1;
    int p = target - 1;
    while (p >= 0)
    {
        if (nums[p] >= (target - p))
        {
            target = p;
        }
        p--;
    }
    if (target == 0)
    {
        return true;
    }
    return false;
}

int hIndex(vector<int> &citations)
{
    // 274. H-Index
    priority_queue<int> q;
    for (int num : citations)
        q.push(num);

    int k = q.top();
    q.pop();
    int count = min(k, 1);
    int final = 0;
    for (int i = 1; i < citations.size(); i++)
    {
        if (k != q.top())
        {
            if (final == max(min(count, k), final))
                break;
            final = max(min(count, k), final);
            if (final == k)
                break;
            cout << k << ": " << count << " -> " << final << endl;
            k = q.top();
        }
        count++;
        q.pop();
    }
    final = max(min(count, k), final);
    cout << k << ": " << count << " -> " << final << endl;
    cout << "final answer: " << final << "\n\n";

    return final;
}

int minPathSum(vector<vector<int>> &grid)
{
    int lim = grid[0].size();
    int *arr = new int[lim];

    arr[0] = grid[0][0];
    cout << arr[0] << " ";

    for (int j = 1; j < lim; j++)
    {
        arr[j] = grid[0][j] + arr[j - 1];
        cout << arr[j] << " ";
    }

    for (int i = 1; i < grid.size(); i++)
    {
        arr[0] = grid[i][0] + arr[0];
        cout << "\n"
             << arr[0] << " ";
        for (int j = 1; j < grid[i].size(); j++)
        {
            int a = arr[j - 1];
            int b = arr[j];
            arr[j] = grid[i][j] + min(a, b);
            cout << arr[j] << " ";
        }
    }

    cout << "\nfinal answer: " << arr[lim - 1];
    return arr[lim - 1];
}

RandomizedSet::RandomizedSet() : mp() {}

bool RandomizedSet::insert(int val)
{
    if (mp.find(val) != mp.end())
    {
        return false;
    }
    mp[val] = 1;
    return true;
}

bool RandomizedSet::remove(int val)
{
    if (mp.find(val) != mp.end())
    {
        mp.erase(val);
        return true;
    }
    return false;
}

int RandomizedSet::getRandom()
{
    int randInt = rand() % mp.size();
    auto point = mp.begin();
    advance(point, randInt);
    return point->first;
}

// class RandomizedSet
// {
// public:
//     unordered_map<int, int> mp;

//     RandomizedSet()
//     {
//     }

//     bool insert(int val)
//     {
//         if (mp.find(val) != mp.end())
//         {
//             return false;
//         }
//         mp[val] = 1;
//         return true;
//     }

//     bool remove(int val)
//     {
//         if (mp.find(val) != mp.end())
//         {
//             mp.erase(val);
//             return true;
//         }
//         return false;
//     }

//     int getRandom()
//     {
//         int randInt = rand() % mp.size();
//         auto point = mp.begin();
//         advance(point, randInt);
//         return point->first;
//     }
// };