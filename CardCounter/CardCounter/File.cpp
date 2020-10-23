#include "File.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

File::File(string path) {
	setPath(path);
	setFile(path);
}

void File::setPath(string path) {
	m_path = path;
}

void File::setFile(string path) {
	ifstream file(path);

	while (getline (file, line)) {
		m_file += line;
	}
}

