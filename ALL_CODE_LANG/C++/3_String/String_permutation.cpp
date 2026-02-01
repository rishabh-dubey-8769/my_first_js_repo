#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool check_permutation(string s, string part, int count)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        return 1;
        break;
    } 
    if (count != 0)
    {
        return 0;
    }
    reverse(part.begin(), part.end());
    count++;
    return check_permutation(s, part, count);
    return 0;
}
int main()
{
    int count = 0;
    string s = "dorado";
    string part = "or";
    cout << check_permutation(s, part, count);
    cout << endl;
}