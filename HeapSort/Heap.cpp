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

//==================================================Heap Sort.. O(nlogn).. O(1) space..
// Heap Sort is a comparison-based sorting technique based on Binary Heap data structure.
// It is similar to selection sort where we first find the maximum element and place the maximum element at the end.
// We repeat the same process for the remaining elements.

void Heapify(int arr[], int n, int i) // Max Heap for a given node i
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        Heapify(arr, n, largest);
    }
}
void BuildHeap(int arr[], int n) // Max Heap for the entire array
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        Heapify(arr, n, i);
    }
}
void HeapSort(int arr[], int n)
{
    BuildHeap(arr, n); // sorted in descending order (Max Heap)
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]); // swap the root with the last element
        Heapify(arr, i, 0);   // heapify the reduced heap
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Khaltbeta_blsalsa()
{
    int arr[] = {12, 11, 13, 5, 6, 7, 15, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    HeapSort(arr, n);
    print(arr, n);
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