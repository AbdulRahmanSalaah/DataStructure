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
#include "Tree.cpp"
void Khaltbeta_blsalsa()
{

    Tree<int> t;
    t.insert(5);
    t.insert(3);
    t.insert(7);
    t.insert(2);
    t.insert(4);
    t.insert(6);
    t.insert(8);

    t.print();                // 2 3 4 5 6 7 8 (inorder traversal)
    cout << t.size() << "\n"; // 7

    t.search(5) ? cout << "5 is found\n" : cout << "5 is not found\n";    // 5 is found
    t.search(10) ? cout << "10 is found\n" : cout << "10 is not found\n"; // 10 is not found

    cout << t.LeavesCount() << "\n"; // 4

    t.remove(5);
    t.print();                       // 2 3 4 6 7 8 (inorder traversal)
    cout << t.size() << "\n";        // 6
    cout << t.depth() << "\n";       // 3
    cout << t.LeavesCount() << "\n"; // 3

    t.insert(9);
    cout << t.depth() << "\n";       // 4
    cout << t.LeavesCount() << "\n"; // 3

    t.clear();
    cout << t.size() << "\n"; // 0
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