//                        "بسم الله"

//    اللهمَّ صَلِّ وَسَلِّمْ وَبَارِكْ عَلَى سَيِّدِنَا مُحَمَّدٍ وَعَلَى آلِهِ عَدَدَ كَمَالِ اللهِ وَكَمَا يَلِيقُ بِكَمَالِهِ

//==================================================include..
#include "Tree.h"
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

void Khaltbeta_blsalsa()
{

    Tree<int> t1;
    t1.insert(10);
    t1.insert(20);
    t1.insert(30);
    t1.insert(5);
    t1.insert(3);

    t1.preorder();                                        // 20 5 3 10 30
    t1.print();                                           // 3 5 10 20 30
    t1.postorder();                                       // 3 10 5 30 20
    cout << "Depth: " << t1.depth() << endl;              // 3
    cout << "Leaves Count: " << t1.LeavesCount() << endl; // 3

    t1.remove(30);
    t1.preorder();                                        // 5 3 20 10
    t1.print();                                           // 3 5 10 20
    t1.postorder();                                       // 3 10 20 5
    cout << "Depth: " << t1.depth() << endl;              // 3
    cout << "Leaves Count: " << t1.LeavesCount() << endl; // 2

    t1.insert(12);

    t1.preorder();                                        // 5 3 12 10 20
    t1.print();                                           // 3 5 10 12 20
    t1.postorder();                                       // 3 10 20 12 5
    cout << "Depth: " << t1.depth() << endl;              // 3
    cout << "Leaves Count: " << t1.LeavesCount() << endl; // 3
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