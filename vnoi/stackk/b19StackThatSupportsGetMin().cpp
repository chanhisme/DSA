#include <bits/stdc++.h>
using namespace std;

// Design a SpecialStack that supports push(x), pop(), peek(), and getMin() in O(1) time.

// push(x) → add element x
// pop() → remove top element
// peek() → return top element without removing; -1 if empty
// getMin() → return minimum element; -1 if empty
// All operations run in O(1).

struct spe
{
    stack<int> st, minVal;
    int bad = INT_MAX;
    void push(int x)
    {
        st.push(x);
        bad = min(bad, x);
        minVal.push(bad);
    }
    void pop()
    {
        if (st.empty())
            return;
        st.pop();
        minVal.pop();
        if (minVal.empty())
            bad = INT_MAX;
        else
            bad = minVal.top();
    }
    int peek()
    {
        if (st.empty())
            return -1;
        return st.top();
    }
    int getMin()
    {
        if (st.empty())
            return -1;
        return minVal.top();
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    spe s;

    cout << "===== TEST 1 =====\n";
    s.push(10);
    s.push(20);
    s.push(5);

    cout << s.peek() << '\n';   // 5
    cout << s.getMin() << '\n'; // 5

    s.pop();

    cout << s.peek() << '\n';   // 20
    cout << s.getMin() << '\n'; // 10

    cout << "\n===== TEST 2 =====\n";

    s.push(3);
    cout << s.getMin() << '\n'; // 3

    s.push(2);
    cout << s.getMin() << '\n'; // 2

    s.push(1);
    cout << s.getMin() << '\n'; // 1

    s.pop();
    cout << s.getMin() << '\n'; // 2

    s.pop();
    cout << s.getMin() << '\n'; // 3

    cout << "\n===== TEST 3 =====\n";

    spe s2;

    s2.push(5);
    s2.push(5);
    s2.push(5);

    cout << s2.getMin() << '\n'; // 5

    s2.pop();
    cout << s2.getMin() << '\n'; // 5

    s2.pop();
    cout << s2.getMin() << '\n'; // 5

    cout << "\n===== TEST 4 =====\n";

    spe s3;

    s3.push(-1);
    s3.push(-10);
    s3.push(3);

    cout << s3.getMin() << '\n'; // -10

    s3.pop();
    cout << s3.getMin() << '\n'; // -10

    s3.pop();
    cout << s3.getMin() << '\n'; // -1

    cout << "\n===== TEST 5 =====\n";

    spe s4;

    s4.push(42);

    cout << s4.peek() << '\n';   // 42
    cout << s4.getMin() << '\n'; // 42

    s4.pop();

    cout << s4.peek() << '\n';   // -1
    cout << s4.getMin() << '\n'; // -1
    return 0;
}