#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>

using namespace std;

bool dc(string s)
{
    int len = s.length();
    bool flag = true;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i]) { flag = false; break; }
    }
    return flag;
}

void solve(string s)
{
    int len = s.length();
    bool flag = false;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != 'a') { flag = true; break; }
    }
    if (!flag)cout << "NO" << '\n';
    else
    {
        if (dc(s))
        {
            cout << "YES" << '\n';
            cout << "a" + s << '\n';
        }
        else
        {
            int len = s.length();
            string s1 = s.insert(len / 2, 1, 'a');
            cout << "YES" << '\n';
            cout << s1 << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
