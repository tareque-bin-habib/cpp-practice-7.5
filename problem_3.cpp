#include <bits/stdc++.h>
using namespace std;
int countWordOccurrence(string sentence, string word)
{
    int count = 0;
    int pos = 0;

    while ((pos = sentence.find(word, pos)) != -1)
    {
        count++;
        pos += word.length();
    }

    return count;
}
int main()
{
    string sentence;
    getline(cin, sentence);

    string word;
    cin >> word;

    int count = countWordOccurrence(sentence, word);
    cout << count << endl;
    return 0;
}