#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long int l;
    char ch;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",i,l,ch,f,d);
    /*cin >> i >> l >> ch >> f >> d;
    cout << i << "\n" << l << "\n" << ch << "\n";
    cout.precision(4);
    cout << f << endl;
    cout.precision(10);
    cout << d << endl;*/
    return 0;
}
