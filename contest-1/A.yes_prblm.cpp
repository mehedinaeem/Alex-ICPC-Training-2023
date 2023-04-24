#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int i = 0; i < 3; i++)
        {

            if (s[0] == 'y' || s[0] == 'Y')
            {
                if (s[1] == 'e' || s[1] == 'E')
                {
                    if (s[2] == 's' || s[2] == 'S')
                    {
                        cout << "YES" << endl;
                        break;
                    }
                    else
                    {
                        cout << "NO" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
    return 0;
}