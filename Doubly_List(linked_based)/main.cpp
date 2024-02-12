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

/* -----------------------------Code Begins from here-------------------------------------------*/
#include "List.cpp"
void Khaltbeta_blsalsa()
{
    List<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.print();                // 1 2 3 4 5 6
    cout << l.size() << endl; // 6

    l.pop_back();
    l.pop_back();
    l.print();                // 1 2 3 4
    cout << l.size() << endl; // 4

    l.pop_front();
    l.pop_front();
    l.print();                // 3 4
    cout << l.size() << endl; // 2

    l.push_front(12);
    l.push_front(13);
    l.push_front(14);
    l.print();                // 14 13 12 3 4
    cout << l.size() << endl; // 5

    l.insert(2, 100);
    l.print();                // 14 13 100 12 3 4
    cout << l.size() << endl; // 6

    l.erase(100);
    l.print();                // 14 13 12 3 4
    cout << l.size() << endl; // 5

    l.erase_by_index(2);
    l.print();                // 14 13 3 4
    cout << l.size() << endl; // 4

    l.reverse();
    l.print(); // 4 3 13 14

    l.reverse();
    l.print(); // 14 13 3 4

    l.sort();
    l.print(); // 3 4 13 14

    l.clear();
    cout << l.size() << endl; // 0

    l.push_back(1);
    l.push_back(2);
    l.print();                // 1 2
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