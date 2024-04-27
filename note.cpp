#include <iostream>
#include <string>

// using namespace std;

void isSubsequence(std::string s, std::string t)
{
    std::cout << s;
}

int main()
{
    std::cout << "--- running script ---"
              << "\n";
    std::string s = "test";

    isSubsequence(s, std::string("bogus"));
    return 0;
}