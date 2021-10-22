//Дано натуральное число N.Выведите все его цифры по одной,
//в обычном порядке, разделяя их пробелами или новыми строками. (рекурсия!)
#include <iostream>

using namespace std;

void f1(int a){
    if (a / 10 > 0) {
        f1(a / 10);
    }
    cout << a % 10 << " ";
}

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число N ";
    cin >> n;
    f1(n);
}
