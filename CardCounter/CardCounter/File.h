#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

class File
{
protected:
	string m_path;
	string m_file = "";
	string line;

public:
	File();
	File(string path);

	void setPath(string path);
	void setFile(string path);

	string getPath() {
		return m_path;
	}

	string getFile() {
		return m_file;
	}

	int elementCounter() {
		return count(m_file.begin(), m_file.end(), ' ');
	}
};


