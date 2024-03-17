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

//================================================== Bubble Sort
// about bubble sort..
// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
// The pass through the list is repeated until the list is sorted.

// Time Complexity:
// Best Case: O(n) when the list is already sorted.
// Worst Case: O(n^2) when the list is sorted in reverse order.
// Average Case: O(n^2)
// Space Complexity: O(1)

template <class t>
void bubble_sort(t arr[], int n)
{
    bool flag = false;
    for (int i = 0; i < n - 1; i++) // for n-1 passes
    {
        for (int j = 0; j < n - i - 1; j++) // for n-i-1 comparisonsc in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
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

    bubble_sort(arr, n);

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