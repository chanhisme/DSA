/*
A. Anton and Danik

Time limit: 1 second
Memory limit: 256 MB

Anton likes to play chess, and so does his friend Danik.

Once they have played n games in a row. For each game it's known who was
the winner — Anton or Danik. None of the games ended with a tie.

Now Anton wonders, who won more games, he or Danik?
Help him determine this.

Input:
- First line: integer n (1 <= n <= 100000)
  Number of games played.
- Second line: string s of length n consisting of:
    'A' -> Anton won the game
    'D' -> Danik won the game

Output:
- Print "Anton" if Anton won more games.
- Print "Danik" if Danik won more games.
- Print "Friendship" if both won the same number of games.

Example:
Input:
6
ADAAAA

Output:
Anton
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<char> a(n);
    for (char& x : a) cin >> x;
    int cntA = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 'A') cntA++;
    }
    if (cntA > (n - cntA))
        cout << "Anton";
    else if (cntA < (n - cntA))
        cout << "Danik";
    else {
        cout << "Friendship";
    }

    return 0;
}