#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2("Thomas");
	string s3 = "Gibbons";
	string s4 = "\nEnter a word:\n";
	
	cout << s4;
	cin >> s1;
	
	string s5(s1);
	
	cout << s1 << endl
		 << s2 << endl
		 << s3 << endl
		 << s4 << endl
		 << s5 << endl;
	s1 = s2 + s3;
	cout << s1 << endl;

	string line;
	cout << "\nEnter some text, finish it with an &" << endl;
	getline(cin, line, '&');
	cout << line << endl;
		
	return 0;
}