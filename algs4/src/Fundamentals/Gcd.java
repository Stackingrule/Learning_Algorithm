package Fundamentals;

public class Gcd {

    public static int gcd(int p, int q) {
        if (q == 0) return p;
        int r = p % q;
        return gcd(p, r);
    }

    public static void main(String[] args) {
        int p = 120, q = 31;
        int result = gcd(p, q);
        System.out.println(result);
    }
}
