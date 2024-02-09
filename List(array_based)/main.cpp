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

    // List<int> l1(10);
    // l1.insert(1, 10);
    // l1.insert(2, 20);
    // l1.insert(3, 30);
    // l1.insert(4, 40);
    // l1.insert(5, 50);

    // l1.print();                // 10 20 30 40 50
    // cout << l1.size() << endl; // 5
    // l1.insert(3, 100);
    // l1.print();                // 10 20 100 30 40 50
    // cout << l1.size() << endl; // 6

    // l1.remove(1);
    // l1.remove(3);
    // l1.print();                // 20 100 40 50
    // cout << l1.size() << endl; // 4

    // l1.clear();
    // cout << l1.size() << endl; // 0
    // l1.insert(1, 8);
    // l1.insert(2, 88);
    // l1.insert(3, 888);
    // l1.insert(4, 8888);
    // l1.print();                // 8 88 888 8888
    // cout << l1.size() << endl; // 4

    List<string> l2;
    l2.insert(1, "Afsdf");
    l2.insert(2, "Bbbcxb");
    l2.insert(3, "Ccxv");
    l2.insert(4, "Ddfg");
    l2.print(); // Afsdf Bbbcxb Ccxv Ddfg
    l2.insert(3, "inserted");
    l2.print();                // Afsdf Bbbcxb 100 Ccxv Ddfg
    cout << l2.size() << endl; // 5
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