// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>

using namespace std;

/*template <typename T>
bool palindrom(T container)
{
	T::iterator ti=container.end();
	for(T::iterator it=container.begin();it!=container.end();it++, ti--)
	{
		if((*it)!=(*ti))
		return false;
	}
	return true;
}*/

bool palindrom(vector<int> container)
{
	vector<int>::iterator ti=container.end();
	for(vector<int>::iterator it=container.begin(); it!=container.end(); it++, ti--)
	{
		if((*it)!=(*ti))
			return false;
	}
	return true;
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector <int> container1(3);
	container1[0]=1;
	container1[1]=2;
	container1[2]=1;
	list <double> container2;
	container2.push_back(5);
	container2.push_back(6);
	container2.push_back(6);
	container2.push_back(7);
	cout<<"Vector is palindrom: "<<palindrom(container1)<<endl;
	cout<<"List is palindrom: ";//<<palindrom(container2)<<endl;
	system("PAUSE");
	return 0;
}
