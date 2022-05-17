#include <iostream>
#include <cmath>
using namespace std;


float f(float x){
	//Define the function.
	return sin(x)-cos(x) ;
}

int main(){
	float a, b, c;
	cout << "Guess the interval entering two number: " <<"\n";
	cin >> a >> b;
	int N;
	cout << "Enter the limit of number of iteration ";
	cin >> N;
	bool flag = false;
	for(int i = 1; i <= N; i++){
		if(f(a)*f(b) < 0){
		c = (a+b)/2;
			if(f(a)*f(c) < 0){
				b = c;
			}
			else if(f(a)*f(c) > 0){
				a = c;
			}
			else{
				cout << "\nThe root before complete the full iteration is " << c << endl;
				break;
			}
		cout << i << ")\tThe root is " << c << endl;
		flag = true;
		}
		else if(f(a)*f(b) > 0){
			cout << "\nGuess new numbers. You may use your calculator." << endl;
			break;
		}
		else{
			cout << "You have entered the root." << endl;
		}
	}
	if (flag){
		cout << "\nThe final root is after complete the " << N << " iteration is " << c << endl;
	}
	return 0;
}
