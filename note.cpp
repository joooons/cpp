#include <iostream>
#include <string>

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

int main()
{
    cout << "--- running script ---"
         << "\n";
    // string s = "test";
    isSubsequence(string(""), string("abkemces"));
    return 0;
}