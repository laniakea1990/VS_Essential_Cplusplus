#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	ifstream infile("jrr.txt");
	ofstream outfile("raiseking.txt", ios_base::app);
	vector<string> vstr;
	string temp_str;

	if (!infile)
		cerr << "Oops! Unable to open the file.\n";
	else
	{
		while (infile >> temp_str)
		{
			vstr.push_back(temp_str);
		}
	}
	for (vector<string>::size_type i = 0; i != vstr.size(); i++)
		cout << vstr[i] << " ";
	sort(vstr.begin(), vstr.end());

	if (!outfile)
		cerr << "Oops! Unable to save session data!\n";
	else{
		for (vector<string>::size_type i = 0; i != vstr.size(); i++)
			outfile << vstr[i] << ' ';
	}
	
	getchar();
	return 0;
}