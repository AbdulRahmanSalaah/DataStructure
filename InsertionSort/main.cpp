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

//==================================================insertion sort..
// about insertion sort
// 1. It is a simple sorting algorithm that works the way we sort playing cards in our hands.
// 2. It is efficient for smaller data sets, but very inefficient for larger lists.
// 3. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.
// 4. Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time.

// Time Complexity: O(n^2) as there are two nested loops.
// The best case is O(n), which occurs when the array is already sorted.
// The worst case is O(n^2), which occurs when the array is reverse sorted.
// The average case is O(n^2).
// Auxiliary Space: O(1)

template <class t>
void insertion_sort(t arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        t key = arr[i];                // key is the element to be compared
        int j = i - 1;                 // j is the index of the previous element
        while (j >= 0 && arr[j] > key) // while the previous element is greater than the key shift the previous element to the right
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // place the key at the correct position
    }
}

/* -----------------------------Code Begins from here-------------------------------------------*/

void Khaltbeta_blsalsa()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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