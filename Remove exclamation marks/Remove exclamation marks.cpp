#include<iostream>
#include <string>
using namespace std;

std::string removeExclamationMarks(std::string str) {
	std::string clean;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '!')
			continue;
		else
			clean +=str[i] ;

		 
	}  
	//str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
	//return str ;
	return clean; 
}  
int main()
{
	
	cout << removeExclamationMarks("Welcome,,! Hallo!!! leute!!");
	return 0;
}