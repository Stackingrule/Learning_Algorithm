//
// Created by intje on 2019/9/6.
//
#ifndef SORTING_CPP_SHAKERSORT_H
#define SORTING_CPP_SHAKERSORT_H
#include <iostream>
using namespace std;

template <typename T>
void ShakerSort(T A[], int n) {
	int i = 0, lo = 0, hi = n - 1, shift = 0;
	while(lo < hi) {
		for(i = lo; i < hi; i++) {	//向右进行冒泡排序
			if(A[i] > A[i+1]) {
				swap(A[i], A[i+1]);
				shift = i;
			}
		}

		hi = shift;	//记录最后一次所在的状态

		for(i = hi; i > lo; i--) {	//向左进行冒泡排序
			if(A[i-1] > A[i]) {
				swap(A[i-1], A[i]);
				shift = i;
			}
		}

		lo = shift;
	}
}

#endif //SORTING_CPP_SHAKERSORT_H
