#include <iostream>
#include <vector>
#include <list>
#include <utility>

using namespace std;

vector < list < pair<int ,int> > > vec;

vec.back().push_back(5);
vec[0].push_back(1,5)

list< pair<int, int> >::iterator itr = vec[0].begin();

int main()
{
	cout<<itr.first;
	return 0;
}

