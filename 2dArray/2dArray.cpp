// 2dArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char TDArray[5][7] = {
		{ ' ','/','\\','_','/','\\',' ' },{ '/',' ','D',' ', 'D',' ','\\' },
	{ '(','=','=','O','=','=',')' },{ '\\',' ',' ','~', ' ',' ','/' },
	{ ' ','-','-','-', '-','-',' ' } };

	// finish this code!  – display TD array to console
	int r, c;
	for (r = 0; r < 5; r++) {
		for (c = 0; c < 7; c++) {
			cout << TDArray[r][c];
		}
		cout << endl;
	}

	return 0;
}


