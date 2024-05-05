#include <iostream>
using namespace std;
#include <vector>
#include <map>

#define vi vector<int>
// #define vii vector<pii>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> freq;
    rep(i, 0, n)
    {
        freq[a[i]]++;
    }
    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); ++it)
    {
        cout << it->ff << " " << it->ss << endl;
    }
    return 0;
}