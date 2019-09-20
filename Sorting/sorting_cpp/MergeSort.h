//
// Created by intje on 2019/9/20.
//

#ifndef SORTING_CPP_MERGESORT_H
#define SORTING_CPP_MERGESORT_H

namespace MergeSortBasic {
    template<typename T>
    void merge(T A[], int l, int mid, int r) {
        T aux[r-l+1];
        for(int i = l; i <= r; i++)
            aux[i - l] = A[i];

        int i = l, j = mid + 1;
        for(int k = l; k <= r; k++) {
            if(i > mid) {
                A[k] = aux[j-l];
                j++;
            }
            else if(j > r) {
                A[k] = aux[i-l];
                i++;
            }
            else if(aux[i-l] < aux[j-l]) {
                A[k] = aux[i-l];
                i++;
            }
            else {
                A[k] = aux[j-l];
                j++;
            }
        }
    }

    template<typename T>
    void mergeSort(T A[], int l, int r) {
        if(l >= r)
            return;
        int mid = (l + r)/2;
        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, r);
        if(A[mid] > A[mid+1]) {
        	merge(A, l, mid, r);
        }

    }

    template<typename T>
    void MergeSort(T A[], int n) {
        mergeSort(A, 0, n - 1);
    }

};

#endif //SORTING_CPP_MERGESORT_H
