#include "replace.hpp"
#include <fstream>
#include <iostream>

static std::string	replaceAll(const std::string& content,
					const std::string& s1,
					const std::string& s2)
{
	std::string	result;
	size_t		start = 0;
	size_t		pos;

	while ((pos = content.find(s1, start)) != std::string::npos)
	{
		result += content.substr(start, pos - start);
		result += s2;
		start = pos + s1.length();
	}
	result += content.substr(start);
	return (result);
}

bool	processFile(const std::string& filename,
				const std::string& s1,
				const std::string& s2)
{
	std::ifstream	infile(filename.c_str()); 
	std::string 	content;
	char			c;

	if (!infile.is_open())
	{
		std::cerr << "Error: cannot open file " << filename << std::endl;
		return (false);
	}
	while (infile.get(c))
		content += c;
	infile.close();

	std::ofstream	outfile((filename + ".replace").c_str());

	if (!outfile.is_open())
	{
		std::cerr << "Error: cannot create file " << filename << ".replace" << std::endl;
		return (false);
	}
	outfile << replaceAll(content, s1, s2);
	outfile.close();
	return (true);
}
	