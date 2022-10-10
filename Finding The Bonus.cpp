 // the net bonus amount
 # include <iostream>

  using namespace std;
 
 int main ()
 {
  int time; 
  int salary;
  int bonus;
  float total;
  
  cout <<" enter time of work : ";
  cin >> time;
  cout<< " enter amount of salary : ";
  cin>> salary;
  
  if ( time >=10)
  {
  	bonus= 10/100* salary;
  }
  else if ( time>=6)	 
  {
  	bonus = 8/100* salary;
  }	 
  else 	 
  {
  	bonus = 5/100* salary;
  } 	 
	 
   total = bonus + salary;
   
   
   cout << "Net bonus is " << bonus<< endl;
   cout << " Total salary is "<< total<< endl;	 
	 
	 
    return 0;	 
	 
	 	
 }
