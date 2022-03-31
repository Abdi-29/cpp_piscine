#include <iostream>
#include <fstream>

std::string	ft_replace(std::string line, std::string const search, std::string const replace)
{
	size_t	pos;

	pos = 0;
	while ((pos = line.find(search, pos) != std::string::npos))
	{
		line.erase(pos - 1, search.length());
		line.insert(pos - 1, replace);
		pos += replace.length();
	}
	return line;
}

int	main(int argc, char **argv)
{
	std::string	search;
	std::string	replace;
	std::string	s3;

	if (argc != 4)
	{
		std::cout << "invalid input" << std::endl;
		return 1;
	}
	s3 = argv[1];
	std::ifstream	file(s3);
	search = argv[2];
	replace = argv[3];
	if (!file)
	{
		std::cout << "invalid input";
		return 1;
	}
	std::ofstream	fileCopy(".replace");
	if (!fileCopy)
	{
		file.close();
		std::cout << "invalid input";
		return 1;
	}
	std::string line;
	while (getline(file, line))
	{
		fileCopy << ft_replace(line, search, replace);
		if (file.eof())
			break;
		fileCopy << std::endl;
	}
	file.close();
	fileCopy.close();
}