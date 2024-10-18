#include <iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;

int main() {
	typedef map<string,int> mapType;
	mapType populationMap;

	populationMap.insert(pair<string, int>("Maharashtra",7026357));
	populationMap.insert(pair<string, int>("Rajasthan",8347745));
	populationMap.insert(pair<string, int>("Karnataka",4839745));
	populationMap.insert(pair<string, int>("Punjab",4658475));
	populationMap.insert(pair<string, int>("West Bengal",8878654));
	mapType::iterator iter;
	cout<<"=====Population of States in India======";
	cout<<"\nSize of Population map"<<populationMap.size()<<"\n";
	string state_name;
	cout<<"\n Enter the name of the State:";
	cin>>state_name;
	iter=populationMap.find(state_name);
	if(iter!=populationMap.end())
		cout<<state_name<<"s population is"<<iter->second;
	else
		cout<<"key is not in populationMap\n";
	populationMap.clear();

}

