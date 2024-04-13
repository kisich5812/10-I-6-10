#include <iostream>

using namespace std;

int factorial(int n) {
  	if(n<0) 
		return -1;
	if(n==1 || n==0)
	       	return 1;
   	return n*factorial(n-1);
}

int main() {
	int n;
	long long int s = 0;
	cin >> n;
	for(int i = n; i>0; i--)
		s+=factorial(i);
	cout << s << endl;
	return 0;
}
