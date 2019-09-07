//
// Created by intje on 2019/9/6.
//

#ifndef SORTING_CPP_INSERTSORT_H
#define SORTING_CPP_INSERTSORT_H

#include <iostream>
using namespace std;

template <typename T>
void InsertSort(T A[], int n) {
	for(int i = 1; i < n; i++) {
		T e = A[i];
		int j;
		for(j = i; j > 0 && A[j-1] > e; j--) {
			A[j] = A[j-1];
		}
		A[j] = e;
	}
}

template <typename T>
void BinaryInsertSort(T A[], int n) {
	int mid;
	for(int i = 0; i < n; i++) {
		T e = A[i];
		int lo = 0, hi = i - 1;
		while(lo <= hi) {
			mid = (lo + hi)/2;
			if(e > A[mid])
				lo = mid + 1;
			else
				hi = mid - 1;
		}
		for(int j = i; j > lo; j--) {
			A[j] = A[j-1];
		}
		A[lo] = e;
	}
}
#endif //SORTING_CPP_INSERTSORT_H
