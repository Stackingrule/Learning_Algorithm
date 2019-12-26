package Fundamentals;

import java.util.Arrays;

public class BinarySearch {

    public static int rank(int key, int[] a) {
        int lo = 0;
        int hi = a.length - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo)/2;
            if (key < a[mid]) hi = mid - 1;
            else if (key > a[mid]) lo = mid + 1;
            else return mid;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {10, 11, 23, 10, -1, 3, 50, 5, 6};
        Arrays.sort(arr);
        int key = 2;
        if (rank(key, arr) == -1)
            System.out.println(key);
    }
}
