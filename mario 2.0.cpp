#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    do {
        cout << "請輸入台階高度(1~8):";
        cin >> a;
    } while (a > 8 || a < 0);
    for (b = 1; b <= a; b++) {
        
        for (c = 1; c <= (a - b); c++) {
            cout << " ";
        } 
        for (c = 1; c <= b; c++) {
            cout << "#";
        } 
        cout << "  ";
        for (c = 1; c <= b; c++) {
            cout << "#";
            
        }
        cout << "\n";
    }
}
