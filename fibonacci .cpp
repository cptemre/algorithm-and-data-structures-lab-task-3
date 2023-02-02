#include <iostream>
using namespace std;
int fibonacci(int result1, int result2, int result3, int n) {
	result3 = result1 + result2;
	result1 = result2;
	result2 = result3;
	if (n <= 2)
	{
		return result3;
	}
	fibonacci(result1, result2, result3, n - 1);

}
int main() {
	int result1 = 0;
	int result2 = 1;
	int result3 = 0;
	int n;
	cout << "Type your number\n";
	cin >> n;
	cout << fibonacci(result1, result2, result3, n);
}