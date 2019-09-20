//
// Created by intje on 2019/9/20.
//

#ifndef SORTING_CPP_MERGESORTBOTTOMUP_H
#define SORTING_CPP_MERGESORTBOTTOMUP_H

#include <iostream>

using namespace std;

namespace MergeSortBottomUp {

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
	void MergeSort(T A[], int n) {
		for(int size = 1; size <= n; size += size) 
			for(int i = 0; i + size < n; i++) {
				merge(A, i, i + size - 1, min(i + size + size - 1, n - 1));
			}
	}

};

#endif //SORTING_CPP_MERGESORTBOTTOMUP_H
