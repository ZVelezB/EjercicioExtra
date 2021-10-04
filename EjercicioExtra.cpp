#include <iostream>

using namespace std;

int sort (int n) {
    int n2 = n, n1=n, a, mini=9, maxi=0,r=0;
    while (n1 != 0) {
        while (n2 != 0) {
            a = n2 % 10;
            n2 = n2 / 10;
            if (a < mini && a > maxi) {
                mini = a;
            }
        }
        maxi = mini;
        r = r + mini; r = r *10;
        mini = 9;
        n2 = n;
        n1 = n1 / 10;
    }
    r /= 10;
    return r;
}

int main() {
    int a;
    printf("Hello World");
    printf("Commit 2");
    cin >> a;
    cout << sort(a) << "\n";
}
