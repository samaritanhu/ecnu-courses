// 用 while 实现猜数游戏
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
	
	cout << "欢迎参加猜数游戏！你共有 " << N << "次机会" << endl;
	cout << "请猜测一个 1 到 100 之间的一个整数。\n" << endl;
	
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
	    cout << "你还有 " << N-k << "次机会!\n" << endl ;
	    k++;
	}
	    
	if (flag == 1) cout << "\nSorry, you lost!\n" << endl; 

    return 0; 
} 
