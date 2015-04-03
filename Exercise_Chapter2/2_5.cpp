#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

inline int max(int t1, int t2)
{
	return t1 > t2 ? t1 : t2;
}
inline float max(float t1, float t2)
{
	return t1 > t2 ? t1 : t2;
}
inline string max(const string &t1, const string &t2)
{
	return t1 > t2 ? t1 : t2;
}
