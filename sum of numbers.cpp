#include<iostream>
 using namespace std;
  
 int main(){
 	 
  int i,sum = 0, num ,x;
  //int num;
  
  cout << " enter a num:"<<endl;
  cin >> num ;
  cout << "enter x "<< endl;
  cin >> x;
  
  for(i=x; i<=num ;i=i+2){
  cout<< i << endl;
  sum = sum + i;
  }
 
 
  cout << "sum" << sum << endl;

  return 0;
 } 	
