#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int number;
ifstream inFile("file.in",ios::in);
inFile>>number;
vector <int> v(number+1);
	for(int i=0;i<number;i++)
	{
	inFile>>v.at(i);
	}
	sort(v.begin(),v.end());
	int total=0;
	for(int k=0;k<5;k++)
	{
	total=total+v.at(number-k);
	}
cout<<total<<endl;
}
