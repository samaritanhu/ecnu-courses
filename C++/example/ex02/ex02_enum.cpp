// √∂æŸ¿‡–Õ 
#include<iostream>

using namespace std; 

int main()
{
    enum weekday {sun, mon, tue, wed, thu, fri, sat}; 
    weekday today, tomorrow;

    today = wed;    
    cout << "today=" << today << endl;
    
    tomorrow = weekday(4);
    cout << "tomorrow=" << tomorrow << endl;
    
    return 0; 
}
