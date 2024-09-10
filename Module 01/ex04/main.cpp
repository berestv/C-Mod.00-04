#include <iostream>
#include <fstream>

std::string scan_line (std::string line, char *s1, char *s2)
{
	std::string newline;
	int find = ((line.find(s1, s2)) != std::string::npos);
	while (std::string)
	{

	}
	return line;
}

int main (int argc, char **argv) {
	if (argc == 4)
	{
		std::string str;
		std::ifstream doc(argv[1]);

		if (doc.is_open())
		{
			str = (std::string)argv[1] + (".replace");
			std::ofstream out(str);
			std::string line;

			out.open(str);
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