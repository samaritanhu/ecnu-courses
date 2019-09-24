// 交换两个双精度变量的值，分别用引用和指针实现
#include <iostream>

using namespace std;

void swap_ref(double & ra, double & rb); // 通过引用实现
void swap_pointer(double * pa, double * pb);  // 通过指针实现

int main()
{
    double a, b;

    cout << "Input a and b: ";
    cin >> a >> b;

    cout << "调用 swap_ref 前：a=" << a << ", b=" << b << "\n";
    swap_ref(a, b);
    cout << "调用 swap_ref 后：a=" << a << ", b=" << b << "\n\n";

    cout << "调用 swap_pointer 前：a=" << a << ", b=" << b << "\n";
    swap_pointer(&a, &b);
    cout << "调用 swap_pointer 后：a=" << a << ", b=" << b << "\n";

	cout << endl;

	return 0;
}

void swap_ref(double & ra, double & rb) // 通过引用实现
{
    double t;
    t = ra;
    ra = rb;
    rb = t;
}

void swap_pointer(double * pa, double * pb) // 通过指针实现
{
    double t;
    t = *pa;
    *pa = *pb;
    *pb = t;
}
