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

//================================================== merge sort
// about merge sort..
// 1. it is a divide and conquer algorithm
// 2. it divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves
// 3. it is a stable sort
// 4. it is not an in-place sort
// 5. it is a comparison sort
// 6. it has a time complexity of O(nlogn)
// 7. it has a space complexity of O(n)

template <class t>
void merge(t *arr, int l, int r, int mid) 
{

    int n1 = mid - l + 1; // size of left array
    int n2 = r - mid;     // size of right array

    t L[n1], R[n2]; // temp arrays

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i]; // copy left array

    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i]; // copy right array

    int i = 0, j = 0, k = l; // i for left array , j for right array , k for main array

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) // if left array element is smaller than right array element
        {
            arr[k] = L[i]; // copy left array element to main array
            i++;           // move to next element in left array
        }
        else
        {
            arr[k] = R[j]; // copy right array element to main array
            j++;           // move to next element in right array
        }
        k++; // move to next element in main array
    }

    while (i < n1) // if left array has remaining elements
    {
        arr[k] = L[i]; // copy remaining elements to main array
        i++;           // move to next element in left array
        k++;           // move to next element in main array
    }

    while (j < n2) // if right array has remaining elements
    {
        arr[k] = R[j]; // copy remaining elements to main array
        j++;           // move to next element in right array
        k++;           // move to next element in main array
    }
}

template <class t>
void mergeSort(t *arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2; // find mid index

        mergeSort(arr, l, mid);     // sort left array
        mergeSort(arr, mid + 1, r); // sort right array

        merge(arr, l, r, mid); // merge left and right array
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

    mergeSort(arr, 0, n - 1);

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