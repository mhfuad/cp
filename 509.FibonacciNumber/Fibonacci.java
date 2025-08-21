public class Main {

    static void fib(int a, int b, int i, int n){
        if(i == n)return;
        
        System.out.println(a);
        i = i+1;
        
        int x = a+b;
        int y = b;
        fib(y, x, i, n);
    }

    static int fibonacci(int n){
        if(n == 0 || n == 1)return n;
        int res = fib(n - 1) + fib(n - 2);
        return res;
    }

    public static void main(String[] args) {
        fib(0, 1, 0, 10);
        System.out.println("Hello, World!");
    }
}