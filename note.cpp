#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void coutVector(vector<int> arr)
{
    for (auto i = arr.begin(); i != arr.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "\n";
}

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

    cout << p1 << " " << p2 << " " << pw << "\n";

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
        coutVector(nums1);
        coutVector(nums2);
        cout << "-----------\n";
    }
}

int main()
{
    cout << "--- running script ---"
         << "\n";

    // isSubsequence(string(""), string("abkemces"));

    // vector<vector<int>> arr = {{1}, {3, 2}, {5, 8, 4}};
    // cout << minimumTotal(arr);

    vector<int> nums1 = {1, 3, 5, 0, 0, 0, 0, 0, 0};
    vector<int> nums2 = {2, 2, 2, 2, 2, 2};
    int n = nums2.size();
    int m = nums1.size() - n;
    merge(nums1, m, nums2, n);

    coutVector(nums1);

    return 0;
}