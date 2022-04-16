
#include <iostream>
using namespace std;

class rekur
{
public:
  int fib(int n)
  {
    if (n == 0)
      return 0;
    else if (n == 1)
      return 1;
    else
      return fib(n - 1) + fib(n - 2);
  }
};

class itter
{
public:
  int fib(int x)
  {
    int a = 0;
    int b = 1;
    int result = 0;
    for (int i = 0; i < x - 1; i++)
    {
      result = a + b;
      a = b;
      b = result;
    }
    return result;
  }
};

int main()
{
  int n;

  itter it;
  cout << "Masukkan Angka: ";
  cin >> n;
  for (int i = 0; i <= n; i++)
    cout << it.fib(i) << ", ";
  cout<<endl;
  cout << "Fibbonacci ke " << n << " adalah " << it.fib(n) << endl;

  rekur rek;
  cout << "Masukkan Angka: ";
  cin >> n;
  cout << "Fibbonacci ke " << n << " adalah " << rek.fib(n) << endl;
  return 0;
}




//#include<iostream>
//using namespace std;
//
//class Operator{
//	friend ostream& operator<<(ostream&,Operator);
//	friend istream& operator<<(istream&,Operator);
//	
//	public:
//		long rek(int n);
//		long iti(int n);
//	
//	private:
//		int n;
//	
//};
//
//
//long Operator::rek(int n){//rekursif
//    if (n == 0 || n ==1){
//    return n;
//  } 
//  else {
//    return (rek(n-1) + rek(n-2));
//  }	
//}
//
//long Operator::iti(int n){//itiratif
//	int a=1;
//    int b=1;
//    int c;
//  
//    cout << a << " " << b;
//  
//    for (int i=1; i<=n-2; i++) {
//        c= a+b;
//        cout<< " "<<c;
//  
//        a=b;
//        b=c;
//    }
//    return 0;
//}
//
//
//int main(){
//	int n;
//	cout<<"angka :";
//	cin>>n;
//	Operator run;
//	cout<<run.rek(n);
//	cout<<endl;
//	cout<<run.iti(n);
//}
