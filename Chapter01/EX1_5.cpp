#include <iostream>
#include <string>
using namespace std;
int main()
{
	/*string user_name;
	cout << "Please enter you name" << endl;
	cin >> user_name;

	if (user_name.size() < 2)
		cout << "Enter name failed!" << endl;
	else
		cout << "Enter name successfully" << endl;
	*/

	int len = 0;
	char user_name[10];
	char* char_ptr = user_name;
	char* user = user_name;
	cout << "Please enter your name" << endl;
	cin >> user_name;
	 
     
	cout << len << endl;
	cout << strlen(user_name) << endl;
	system("pause");
	return 0;
}