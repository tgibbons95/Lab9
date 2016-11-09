#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2("Thomas");
	string s3 = "Gibbons";
	string s4 = "\nEnter a word:\n";
	string s5;
	
	cout << s4;
	cin >> s1;
	
	cout << s1 << endl			//input
		 << s2 << endl			//Thomas
		 << s3 << endl			//Gibbons
		 << s2 + s3 << endl;	//ThomasGibbons

	cout << s1 << endl;			//input
	if (s1 != (s2+s3)){
		s1=(s2+s3);
		cout << s2 + s3 << endl;//ThomasGibbons
	}
	if (s1 == (s2+s3)){
		s1=s2;
		cout << s1 << endl;		//Thomas
	}
	string line;
	cout << "\nEnter some text, finish it with an &" << endl;
	getline(cin, line, '&');
	cout << line << endl;		//inputed line
	
	int length=line.size();
	while (length>0){
		if (isspace(line[length]))
			line[length]= '.';
		else if (islower(line[length]))
			line[length]=toupper(line[length]);
		else if (isupper(line[length]))
			line[length]=tolower(line[length]);
		length--;
	}
	cout << line << endl;		//edited line
	if (s5.empty()){
		cout 	<< "\nEnter string: ";
		cin 	>> s5;
		cout 	<< "\nLength: " << s5.size() << endl;	//Length of input
	}
	if(s2<s3){
		cout	<<	s2	<<	" comes before " << s3	<< endl;
	}
	if(s2>s3){
		cout	<<	s3	<<	" comes before " << s2	<< endl;
	}
	return 0;
}