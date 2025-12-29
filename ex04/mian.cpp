#include <string>
#include <fstream>
#include <iostream>

std::string get_content(std::ifstream &file)
{
    std::string content;
    std::string line;
    while (std::getline(file, line))
    {
        content += line;
        if (!file.eof())
            content += '\n';
    }
    return content;
}

std::string ft_replace(std::string content, std::string s1, std::string s2)
{
    if (s1.empty())
        return content;
        
    size_t pos = content.find(s1);
    while (pos != std::string::npos)
    {
        content.erase(pos, s1.size());
        content.insert(pos, s2);
        pos = content.find(s1, pos + s2.size());
    }
    return content;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./program <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::string file_name = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    std::ifstream file(file_name.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file" << std::endl;
        return 1;
    }
    
    std::string content = get_content(file);
    file.close();
    
    std::ofstream output((file_name + ".replace").c_str());
    if (!output.is_open())
    {
        std::cerr << "Error: could not create output file" << std::endl;
        return 1;
    }
    
    output << ft_replace(content, s1, s2);
    output.close();
    
    return 0;
}
