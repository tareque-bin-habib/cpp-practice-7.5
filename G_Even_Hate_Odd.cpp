// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int b;
//         cin >> b;
//         int e = 0, o = 0, mx;
//         for (int j = 0; j < b; j++)
//         {
//             int y;
//             cin >> y;
//             if (y % 2 == 0)
//             {
//                 e++;
//             }
//             else
//             {
//                 o++;
//             }
//         }
//         if (e > o)
//         {
//             mx = e;
//         }
//         else
//         {
//             mx = o;
//         }
//         if (b % 2 != 0)
//         {
//             cout << "-1" << endl;
//         }
//         else if (e == o)
//         {
//             cout << "0" << endl;
//         }
//         else
//         {
//             cout << mx - (b / 2) << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (even == odd)
        {
            cout << "0" << endl;
        }
        else if ((even - odd) % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            int res = abs(even - odd) / 2;
            cout << res << endl;
        }
    }

    return 0;
}