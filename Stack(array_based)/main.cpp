//                        "بسم الله"

//    اللهمَّ صَلِّ وَسَلِّمْ وَبَارِكْ عَلَى سَيِّدِنَا مُحَمَّدٍ وَعَلَى آلِهِ عَدَدَ كَمَالِ اللهِ وَكَمَا يَلِيقُ بِكَمَالِهِ

//==================================================include..
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
//==================================================Define..

#define speedy                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define fr1(n) for (ll i = 1; i <= n; ++i)
#define fr(n) for (ll i = 0; i < n; ++i)
#define rfr(n) for (long long i = n - 1; i >= 0; i--)
#define frj(n) for (ll j = 0; j < n; ++j)
#define frj1(n) for (ll j = 1; j <= n; ++j)
#define N << "\n";
#define prefix(arr, n)          \
    for (ll i = 1; i <= n; i++) \
    {                           \
        arr[i] += arr[i - 1];   \
    }
#define all(v) v.begin(), v.end()
typedef vector<ll> vll;
#define pf push_front
#define pb push_back
#define sortt(v) sort(v.begin(), v.end())
#define sortr(v) sort(v.rbegin(), v.rend())
#define sz(x) (ll) x.size()
#define R return;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pi pair<ll, ll>
const ll INF = 100000000000ll, gg = 1e7 + 5, mod = 1e9 + 7;

/* -----------------------------Code Begins from here-------------------------------------------*/

#include "Stack.cpp"

void Khaltbeta_blsalsa()
{
    Stack<char> s;
    s.push('a');
    s.push('b');
    s.print();
    s.pop();
    s.print();
    s.push('c');
    s.push('d');
    cout << s.gettop() << "\n";
}
//==================================================Main..
int main()
{

    speedy
        ll t = 1;
    // cin >> t;
    while (t--)
    {

        Khaltbeta_blsalsa();
    }
}