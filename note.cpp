#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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

int main()
{
    cout << "--- running script ---"
         << "\n";

    // isSubsequence(string(""), string("abkemces"));

    vector<vector<int>> arr = {{1}, {3, 2}, {5, 8, 4}};
    // vector<vector<int>> arr = {{-10}};
    cout << minimumTotal(arr);

    return 0;
}