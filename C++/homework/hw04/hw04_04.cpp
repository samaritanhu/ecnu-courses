// �� while ʵ�ֲ�����Ϸ
#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std; 

int main() 
{ 
    int x, guess, flag=1;
    int N=7;
    
	srand(time(NULL)); 
	x = rand()%100 + 1;
	
	cout << "��ӭ�μӲ�����Ϸ���㹲�� " << N << "�λ���" << endl;
	cout << "��²�һ�� 1 �� 100 ֮���һ��������\n" << endl;
	
	int k=1;
	while (k<=N)
	{
	 	cout << "Input your guess: ";
        cin >> guess ;
	 	if (guess < x) cout << "Lower\n";
	 	else if (guess > x) cout << "Higher\n";
	 	else
	 	{
		 	cout << "Congratulation, you won!\n" << endl;
		 	flag = 0;
		 	break;
	    }
	    if (k==N) break;
	    cout << "�㻹�� " << N-k << "�λ���!\n" << endl ;
	    k++;
	}
	    
	if (flag == 1) cout << "\nSorry, you lost!\n" << endl; 

    return 0; 
} 
