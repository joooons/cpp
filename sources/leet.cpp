#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

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
    int k = nums.size() - 1;
    int p = 0;
    while (p < k)
    {
        if (nums[p] == val)
        {
            nums[p] = nums[k--];
        }
        else
        {
            p++;
        }
    }
    return k + 1;
}