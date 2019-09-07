//
// Created by intje on 2019/9/7.
//

#ifndef SORTING_CPP_SELECTIONSORT_H
#define SORTING_CPP_SELECTIONSORT_H

#include <iostream>
using namespace std;

template <typename T>
void SelectionSort(T A[], int n) {
	int k;
	for(int i = 0; i < n; i++) {
		k = i;
		for(int j = i + 1; j < n; j++) {
			if(A[j] < A[k]) {
				k = j;
				swap(A[i], A[k]);
			}
		}
	}
}

#endif //SORTING_CPP_SELECTIONSORT_H
