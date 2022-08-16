#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int fnumber;
	int snumber;
	int sum;
	int diff;
	int prod;
	int quot;
	
	cout << "Enter the first value" <<endl; 
	cin >> fnumber ; 
	
	cout << "Enter the second value" <<endl; 
	cin >> snumber; 
	
	sum= fnumber + snumber; 
	cout <<"The sum is: " <<sum <<endl ; 
	
	diff= fnumber - snumber; 
	cout <<"The difference is: " <<diff <<endl ; 
	
	prod= fnumber * snumber; 
	cout <<"The product is: " <<prod <<endl ; 
	
	quot= fnumber / snumber; 
	cout <<"The quotient is: " <<quot <<endl ; 
	
	return 0;
}

