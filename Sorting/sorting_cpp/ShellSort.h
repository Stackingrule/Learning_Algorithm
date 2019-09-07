//
// Created by intje on 2019/9/6.
//

#ifndef SORTING_CPP_SHELLSORT_H
#define SORTING_CPP_SHELLSORT_H

#include <iostream>
using namespace std;

template <typename T>
void ShellSort(T A[], int n) {
	int gap = n/2;
	while(gap) {
		for(int i = gap; i < n; i++) {
			T e = A[i];
			int j = i;
			while(j >= gap && e < A[j-gap]) {
				A[j] = A[j-1];
				j -= gap;
			}
			A[j] = e;
		}
		gap = gap/2;
	}
}

#endif //SORTING_CPP_SHELLSORT_H
