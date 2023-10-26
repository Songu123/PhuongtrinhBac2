#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c;
    int delta;
    cout << "Nhập a:" << endl;
    cin >> a;
    cout << "Nhập b:" << endl;
    cin >> b;
    cout << "Nhập c:" << endl;
    cin >> c;

    delta = b*b - 4*a*c;
    if(a == 0){
        cout << "Bạn nhập sai dữ liệu!!!" << endl;
    }else{
        if (delta < 0) {
            cout << "Phương trình vô nghiệm!!!" << endl;
        }else if(delta == 0){
            cout << "Phương trình có nghiệm kép: x1 = x2 = " << -b/(2 * a) << endl;
        }else {
            cout << "Phương trình có 2 nghiêm phân biệt:" << endl;
            cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrt(delta)) / (2 * a) << endl;
        }
    }
    return 0;
}
