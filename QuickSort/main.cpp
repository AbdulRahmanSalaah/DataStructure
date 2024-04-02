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

//================================================== queckSort..

//
// 1. The key process in quickSort is partition().
// given an array and an element x of array as pivot,
// put x at its correct position in sorted array and put all smaller elements (smaller than x) before x,
// and put all greater elements (greater than x) after x.

// 2. pick the middle element as pivot element. This is the best way to choose pivot element in quick sort.
// 3. The worst case time complexity of quick sort is O(n^2) which is the case when the array is already sorted in ascending or descending order.
// 4. The best case time complexity of quick sort is O(n log n) which is the case when the array is divided into two equal halves at each step of its execution.
// 5. The average case time complexity of quick sort is O(n log n) which is the case when the array is divided into two halves at each step of its execution.
// 6. The space complexity of quick sort is O(1) because it does not require any extra space.
// 7. Quick sort is an in-place sorting algorithm which means it does not require any extra space.
// 8. Quick sort is not a stable sorting algorithm.

template <class t>
int partition(t *arr, int l, int r)
{
    // This is the best way to choose pivot element in quick sort.
    int mid = (l + r) / 2;
    t pivot = arr[mid]; // pivot
    int i = l;
    int j = r;
    while (i <= j)
    {
        while (arr[i] < pivot) // find element which is greater than or equal to pivot
        {
            i++;
        }
        while (arr[j] > pivot) // find element which is smaller than or equal to pivot
        {
            j--;
        }

        if (i <= j) // if i is less than or equal to j then swap the elements
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return i; // return the partitioning index
}

template <class t>
void quickSort(t *arr, int l, int r)
{
    if (l < r)
    {

        int pi = partition(arr, l, r); // pi is partitioning index, arr[pi] is now at right place
        quickSort(arr, l, pi - 1);     // Recursively sort elements before partition
        quickSort(arr, pi, r);         // Recursively sort elements after partition
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

    quickSort(arr, 0, n - 1);

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