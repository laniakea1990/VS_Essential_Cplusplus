//#include<iostream>
//#include<vector>
//#include<string>
//#include<fstream>
//using namespace std;
//
//void display_elems(vector<int> &vec, const string &title, ostream &os);
//void really_calc_elems(vector<int> &vec, int pos);
//inline bool calc_elements(vector<int> &vec, int pos)
//{
//	if (pos <= 0 || pos > 128)
//	{
//		cerr << "Sorry. Invalid position: " << pos << endl;
//		return false;
//	}
//	if (vec.size() < pos)
//		really_calc_elems(vec, pos);
//	return true;
//}
//int main()
//{
//	//vector<int> pent;
//	const string title("Pentagonal Numeric Series:");
//	ofstream output_file("2_2.txt");
//
//	if (calc_elements(pent, 0))
//		display_elems(pent, title, cout);
//	if (calc_elements(pent, 55))
//		display_elems(pent, title, cout);
//	if (calc_elements(pent, 36))
//		display_elems(pent, title, output_file);
//	if (calc_elements(pent, 139))
//		display_elems(pent, title, output_file);
//	getchar();
//}
//
//
//void display_elems(vector<int> &vec, const string &title, ostream &os = cout)
//{
//	os << '\n' << title << "\n\t";
//	for (vector<int>::iterator ix = vec.begin(); ix != vec.end(); ++ix)
//		os << *ix << ' ';
//	os << endl;
//}
//void really_calc_elems(vector<int> &vec, int pos)
//{
//	for (int ix = vec.size() + 1; ix <= pos; ++ix)
//		vec.push_back((ix * (3 * ix - 1)) / 2);
//}