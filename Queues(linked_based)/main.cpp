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

#include "Queue.cpp"
void Khaltbeta_blsalsa()
{
    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.print();
    cout << q.frontElement() << endl;
    cout << q.rearElement() << endl;
    q.dequeue();

    q.print();
    cout << q.size() << endl;

    q.clear();  
    q.print();
    cout << q.size() << endl;


    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.print();
    cout << q.serach(2) << endl;
    q.clear();
    if (q.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
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