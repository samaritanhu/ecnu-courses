// ������Ϸ 
#include <iostream> 
#include <ctime> 
#include <cstdlib>

using namespace std; 

int main() 
{ 
    int x, guess, flag=1;
    int N=7;
    
	srand(time(NULL)); 
	x = rand()%100 + 1;
	
	cout << "��ӭ�μӲ�����Ϸ���㹲�� " << N << "�λ���" << endl;
	cout << "��²�һ�� 1 �� 100 ֮���һ��������\n" << endl;
	for (int k=1; k<=N; k++)
	{
	 	cout << "Input your guess: ";
        cin >> guess ;
	 	if (guess < x) cout << "Smaller\n";
	 	else if (guess > x) cout << "Larger\n";
	 	else
	 	{
		 	cout << "Congratulation, you won!\n" << endl;
		 	flag = 0;
		 	break;
	    }
	    if (k==N) break;
	    cout << "�㻹�� " << N-k << "�λ���!\n" << endl ;
	}
	    
	if (flag == 1) cout << "\nSorry, you lost!\n" << endl; 

    return 0; 
} 
