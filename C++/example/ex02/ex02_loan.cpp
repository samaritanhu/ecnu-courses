// 等额本息
#include <iostream>
#include <cmath> // 数学函数 

using namespace std;

int main()
{
  double Loan, rate_year, rate_month, year;
  double payment_month, payment_total;

  cout << "input loan amount: ";
  cin >> Loan;
  cout << "input yearly interest rate: ";
  cin >> rate_year;
  rate_month = rate_year/1200;
  cout << "input number of years: ";
  cin >> year;

  // 计算每月需还款金额
  double vtmp = pow(1+rate_month,12*year);
  payment_month=Loan*rate_month*vtmp/(vtmp-1);
  payment_total=payment_month*year*12;

  cout << "Monthly payment: " << payment_month << ", ";
  cout << "Total payment: " << payment_total;
  
  return 0;

}

