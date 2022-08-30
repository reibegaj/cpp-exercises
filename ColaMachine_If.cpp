#include <iostream>

using namespace std;

int main()
{
	int x;
	string drink[5] = {"1.coke", "2.water", "3.sprite", "4.beer", "5.vodka"};
	cout <<"Select a beverage: \n";
	for (int i = 0; i <=4; i++){
		cout << drink[i] << "\n";
	};

	cout << "\n";	
	cin >> x;
	
	if (x == 1){
		cout << "Here's your Coke \n";
	}
	
	else if (x == 2){
		cout << "Here's your Water \n";
	}

	else if (x == 3){
		cout << "Here's your Sprite \n";
	}

	else if (x == 4){
		cout << "Here's your Beer \n";
	}

	else if (x == 5){
		cout << "Here's your Vodka \n";
	}	

	else {
		cout << "Incorrect number, please rerun and input a number between 1 and 5.";
	};
}