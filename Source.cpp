#include<iostream>
using namespace std;

int square_sum(int numb) {
	int sum = 0;

	while (numb > 0)
	{
		sum += (numb % 10) * (numb % 10);
		numb /= 10;
	}

	return sum;
}

bool is_happy_num(int num) {
	int slow = num;
	int fast = num;
	do
	{

		slow = square_sum(slow);
		fast = square_sum(square_sum(fast));

	} while (slow != fast);
	return slow == 1;
}


int main() {
	
	char next;
	do
	{
		int numb;
		cout << "Insert number you want to check: ";
		cin >> numb;

	if (is_happy_num(numb))
	{
		cout << numb << " is happy number :)" << endl;
	}
	else
	{
		cout << numb << " isn't happy number :(" << endl;
	}
	cout << "Do you want check new number [y-yes n-no]: ";
	cin >> next;
	} while (next == 'y');
	return 0;
}