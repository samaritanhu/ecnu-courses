// ��������˫���ȱ�����ֵ���ֱ������ú�ָ��ʵ��
#include <iostream>

using namespace std;

void swap_ref(double & ra, double & rb); // ͨ������ʵ��
void swap_pointer(double * pa, double * pb);  // ͨ��ָ��ʵ��

int main()
{
    double a, b;

    cout << "Input a and b: ";
    cin >> a >> b;

    cout << "���� swap_ref ǰ��a=" << a << ", b=" << b << "\n";
    swap_ref(a, b);
    cout << "���� swap_ref ��a=" << a << ", b=" << b << "\n\n";

    cout << "���� swap_pointer ǰ��a=" << a << ", b=" << b << "\n";
    swap_pointer(&a, &b);
    cout << "���� swap_pointer ��a=" << a << ", b=" << b << "\n";

	cout << endl;

	return 0;
}

void swap_ref(double & ra, double & rb) // ͨ������ʵ��
{
    double t;
    t = ra;
    ra = rb;
    rb = t;
}

void swap_pointer(double * pa, double * pb) // ͨ��ָ��ʵ��
{
    double t;
    t = *pa;
    *pa = *pb;
    *pb = t;
}
