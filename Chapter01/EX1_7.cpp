#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ifstream infile("data_input.txt");
	vector<string> data_input;
	string data;
	if (!infile)
		cerr << "Unable to open the file" << endl;
	else
	{
		while (infile >> data)
			data_input.push_back(data);
	}

	sort(data_input.begin(), data_input.end());

	ofstream outfile("data_output.txt");
	if (!outfile)
		cerr << "Unable to open the file" << endl;
	else
	{
		for (int i = 0; i < data_input.size(); i++)
			outfile << data_input.at(i) << endl;
	}

	system("pause");
	return 0;
}