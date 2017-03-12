// file1_2.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <string>
#include <iostream> 
#include <fstream> 
using namespace std;



int main()
{
	int i = 0, k = 0;
	string filename1, filename2, s1, s2;
	ifstream fin1, fin2;
	ofstream fout1, fout2;
	cout << "Enter the name of the first file" << endl;
	cin >> filename1;
	cout << "Enter the name of the second file" << endl;
	cin >> filename2;
	/*fout1.open(filename1);
	fout2.open(filename2);
	for (int i = 0; i < 7; ++i)
	{
		cin >> s1;
		fout1 << s1 << endl;
		cin >> s2;
		fout2 << s2 << endl;
	}
	fout1.close();
	fout2.close();
	return 0;*/
	fin1.open(filename1);
	fin2.open(filename2);
	if (!fin1.is_open()) {
		cout << filename1 << "Can't open first file.\n" << endl;
	}
	if (!fin2.is_open()) {
		cout << filename2 << "Can't open second file.\n" << endl;
	}

	if ((fin1.is_open()) && (fin2.is_open())) {
		cout << "Compare files...\n";
		while ((!fin1.eof()) && (!fin2.eof())) {
			i++;
			getline(fin1, s1);
			getline(fin2, s2);

			if (s1 == s2) {
				k = 1;
			}
			if (k == 0) {
				cout << filename1 << " " << i << " " << s1 << endl;
				cout << filename2 << " " << i << " " << s2 << endl;
			}
		}
	}
	fin1.close();
	fin2.close();

	system("pause");
	return 0;
}

