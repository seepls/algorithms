#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(10);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

  cout << v.size() << endl;

  // remove last element
  v.pop_back();

  // remove first element
  v.erase(v.begin());

  for (int i = 0; i < v.size(); i++)
    cout << v[i] << endl;

  cout << v.size() << endl;

	return 0;
}