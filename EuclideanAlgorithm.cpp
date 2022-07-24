// C++ program to demonstrate
// Basic Euclidean Algorithm

#include <bits/stdc++.h>
using namespace std;

// Function to return
// gcd of a and b
int gcd(int a, int b) {
	
	if (a == 0) {
		return b;
	} else {
		return gcd(b % a, a);
	}
	
}

// Driver Code
int main() {
	
	int a = 4, b = 16;
	
	cout << "GCD(" << a << ", "
		<< b << ") = " << gcd(a, b)
						<< endl;
	
	return 0;

} // End driver

