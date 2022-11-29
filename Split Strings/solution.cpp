#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> result;
    std::string str(s);
    int pad = str.length() % 2;
    str += std::string("_", pad);
    for (int i = 0; i < str.length(); i += 2)
        result.push_back(str.substr(i, 2));

    return result;
}