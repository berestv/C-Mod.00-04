#include <iostream>
#include <fstream>

std::string scan_line (const std::string& line, const std::string& s1, const std::string& s2)
{
	std::string newline;
	size_t i = 0;
	size_t pos;

	while ((pos = line.find(s1, i)) != std::string::npos)
	{
		newline.append(line, i, pos - i);
		newline.append(s2);
		i += pos + s1.length();
	}
	newline.append(line, i, line.length() - i);
	return newline;
}

int main (int argc, char **argv) {
	if (argc == 4)
	{
		std::ifstream doc(argv[1]);

		if (doc.is_open())
		{
			std::ofstream out;
			std::string line;
			std::string str = (std::string)argv[1] + (".replace");

			out.open(str.c_str());
			while (std::getline(doc, line))
				out << scan_line(line, argv[2], argv[3]) << std::endl;
			doc.close();
			out.close();
		}
		else
			std::cout << "File does not exist. Please try again." << std::endl;
	}
	else
		std::cout << "Wrong number of arguments!" << std::endl;
}