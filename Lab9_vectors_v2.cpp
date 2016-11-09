#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//initialize in every way
	vector<int> ivec1(5), ivec2;				
	vector<double> dvec1{5.1}, dvec2(5,1.5);
	vector<string> svec1 = {"hello", "world"};
	vector<string> svec2{"hello", "world"};
	vector<int> ivec3=ivec1;
	vector<int> ivec4(ivec3);
	
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:ivec1)	//print ivec1
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:ivec3)	//print ivec3 which is copy of ivec1
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:ivec4)	//print ivec4 which is copy of ivec3
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:dvec1)	//print dvec1
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:dvec2)	//print dvec2
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:svec1)	//print svec1
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:svec2)	//print svec2
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
		
	cout << "Original size: " << ivec2.size() << endl;
	ivec2.push_back(50);
	cout << "New size: " << ivec2.size() << "\nAdded element: " << ivec2[0] << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	//Take in ints from cin
	//EXERCISE 3.14
	vector<int> input;
	int num;
	
	cout 	<< "\nEnter numbers for vector (enter -1 to quit)\n"
			<< "? ";
	cin		>> num;
	while(num!=-1){
		input.push_back(num);
		cout 	<< "? ";
		cin		>> num;
	}
	for(auto i:input)	//print input
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;

	//Take in strings from cin
	//EXERCISE 3.15
	vector<string> input2;
	string word;
	string end="DONE";
	
	cout 	<< "\nEnter strings for vector (enter DONE to quit)\n"
			<< "? ";
	cin		>> word;
	while(word!=end){
		input2.push_back(word);
		cout 	<< "? ";
		cin		>> word;
	}
	for(auto i:input2)	//print input
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;

	//USE OPERATIONS FROM TABLE 3.5
	cout	<<	"\nempty?\t" 	<< ivec2.empty()
			<<	"\nsize?\t"		<< ivec2.size()
			<<	"\nivec2[0]=\t" << ivec2[0]<<endl;
	ivec2=ivec1;
	cout	<<	"\nempty?\t" 	<< ivec2.empty()
			<<	"\nsize?\t"		<< ivec2.size()
			<<	"\nivec2[0]=\t" << ivec2[0]	<<endl;
	
	cout	<<	"\nivec1=ivec2?\t";
	if (ivec1==ivec2)
		cout << "TRUE" <<endl;
	else
		cout << "FALSE" <<endl;
	
	return 0;
}