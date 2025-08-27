#include <iostream>
using namespace std;
#include "clsString.h"
#include "clsChar.h"

int main()
{
	clsString string1("Mohammed  adel najjar");

	cout << string1.Length() <<endl;
	cout << clsString::Length("muhammed neccar") <<endl;

		


	return 0;
}


