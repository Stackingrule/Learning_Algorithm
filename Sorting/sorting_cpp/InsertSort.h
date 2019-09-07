//
// Created by intje on 2019/9/6.
//

#ifndef SORTING_CPP_INSERTSORT_H
#define SORTING_CPP_INSERTSORT_H

#include <iostream>
using namespace std;

template <typename T>
void InsertSort(T A[], int n) {
	int insertNum;
	for(int i = 1; i < n; i++) {
		insertNum = A[i];
		int j = i;
		while(j > 0 && insertNum < A[j-1]) {
			A[j] = A[j-1];
			j--;
		}
		A[j] = insertNum;
	}
}

template <typename T>
void BinaryInsertSort(T A[], int n) {
	int mid;
	for(int i = 0; i < n; i++) {
		int insertNum = A[i];
		int lo, hi = i - 1;
		while(lo <= hi) {
			mid = (lo + hi)/2;
			if(insertNum > A[mid])
				lo = mid + 1;
			else
				hi = mid - 1;
		}

		for(int j = i; j > lo; j--) 
			A[j] = A[j-1];
		A[lo] = insertNum;
	}
}
#endif //SORTING_CPP_INSERTSORT_H
