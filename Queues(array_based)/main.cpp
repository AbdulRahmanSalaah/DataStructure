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
/* -----------------------------Code Begins from here-------------------------------------------*/
#include "Queue.cpp"
void Khaltbeta_blsalsa()
{
    Queue<char> q(7); // create a queue of size 7
    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.enqueue('d');
    q.enqueue('e');
    q.enqueue('f');
    q.enqueue('g');

    q.dequeue();
    q.dequeue();
    q.print(); // c d e f g

    cout << q.frontElement() << " " << q.rearElement() << "\n"; // c g
    cout << q.size() << "\n";                                   // 5
    q.clear();                                                  // clear the queue

    cout << q.size() << "\n"; // 0

    ////////////////////////////////////////////////////////////////////////////////////////////////

    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.enqueue('d');
    q.enqueue('e');
    q.enqueue('f');
    q.enqueue('g');
    q.enqueue('h');

    q.print(); // a b c d e f g

    cout << q.serach('a') << "\n"; // 0
    cout << q.serach('b') << "\n"; // 1
    cout << q.serach('h') << "\n"; // -1 not found in the queue
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