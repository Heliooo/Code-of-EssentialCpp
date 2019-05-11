#include <iostream>
#include <vector>

using namespace std;
int main()
{
	const int seq_size = 10;
	int i = 0;
	double num_array[seq_size];
	double average, sum = 0;
	
	cout << "Please enter some nubers,Enter '$' to stop" << endl;
	while (cin >> num_array[i++]);
	
	vector<double> nums(num_array, num_array + seq_size);
	for (int i = 0; i < nums.size(); i++)
		sum += nums.at(i);
	average = sum / nums.size();

	cout << "the sum of numbers you entered is "
		<< sum << endl 
		<< "the average of the numbers you entered is "
		<< average << endl;

	system("pause");
	return 0;
}