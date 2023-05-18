#include <iostream>
using namespace std;

int main() {
    int n = 0, a = 1, b = 1;
    cin >> n;
    if(n<2){
        cout << "errore" <<endl;
    }else {
        cout << "1" << endl;
        for (int i = 1; i < n; i++) {
            cout << a << endl;
            int c = a;
            a = a + b;
            b = c;
        }
    }
    return 0;
}
