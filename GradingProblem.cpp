#include <iostream>
 
using namespace std;
 
int main()
{
	int score = 0;
	cout<<"What's your score out of 100? \n";
	cin>> score;
  
    if (score == 100){
		cout<<"You got a perfect score! \n";
	}
	else if (score >= 90 && score <100){
		cout<<"You scored an A \n";
	}	
	else if (score >= 80 && score <90){
		cout<<"You scored an B \n";
	}	 
	else if (score >= 70 && score <80){
		cout<<"You scored an C \n";
	}
	else if (score >= 60 && score <70){
		cout<<"You scored an D \n";
	}	 		   	     
	else if (score >= 0 && score <60){
		cout<<"You scored an F \n";
	}	 	
	else {
		cout<<"Did you enter a number between 0-100? \n";
	}
 
	
}
