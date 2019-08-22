#include <iostream>
#include <map>
#include <sstream> 
using namespace std;

int main() {
    map<string,int> conquests;
    string line, country;
    int N;
    cin >> N;
    getline(cin,line);
    for(int i = 0; i < N; ++i) {
        getline(cin,line);
        istringstream iss(line);
        iss >> country;
        conquests[country] = conquests.count(country) ? conquests[country] + 1 : 1;
    }
    for(map<string,int>::iterator it = conquests.begin(); it != conquests.end(); it++)
        cout << it->first << " " << it->second << endl;
	return 0;
}
