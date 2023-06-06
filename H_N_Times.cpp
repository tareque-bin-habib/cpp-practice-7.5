#include <bits/stdc++.h>
using namespace std;
void printCharacter(int N, char C)
{
    for (int i = 0; i < N; i++)
    {
        cout << C << " ";
    }
    cout << endl;
}
int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        char C;
        cin >> N >> C;
        printCharacter(N, C);
    }
    return 0;
}