//                        "بسم الله"

//    اللهمَّ صَلِّ وَسَلِّمْ وَبَارِكْ عَلَى سَيِّدِنَا مُحَمَّدٍ وَعَلَى آلِهِ عَدَدَ كَمَالِ اللهِ وَكَمَا يَلِيقُ بِكَمَالِهِ

//==================================================include..
#include "PriorityQueue.h"
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

    PriorityQueue<int> pq;
    pq.push(12);
    pq.push(7);
    pq.push(6);
    pq.push(10);
    pq.print();               // 6 10 7 12
    cout << pq.top() << endl; // 6
    pq.pop();
    pq.print();                // 7 10 12
    cout << pq.top() << endl;  // 7
    cout << pq.size() << endl; // 3
    pq.clear();
    cout << pq.size() << endl; // 0
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