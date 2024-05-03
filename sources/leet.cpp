#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
// #include <map>
#include <cmath>
#include <unordered_map>

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

    // while (count < limit)
    // {
    //     if (mp.find(nums[i]) == mp.end())
    //     {
    //         mp[nums[i]] = 1;
    //     }
    //     else
    //     {
    //         mp[nums[i]] += 1;
    //         count = max(count, mp[nums[i]]);
    //         if (count >= limit)
    //         {
    //             return nums[i];
    //         }
    //     }
    //     i++;
    // }
}