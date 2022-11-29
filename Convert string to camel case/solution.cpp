#include <string>
#include <vector>
#include <cstddef>
#include <algorithm>

std::string to_camel_case(std::string text)
{
    const std::string delimiter = "-_";
    size_t start = 0, pos = 0;
    std::vector<std::string> vs;
    while ((pos = text.find_first_of(delimiter)) != std::string::npos)
    {
        vs.push_back(text.substr(start, pos));
        text = text.substr(pos + 1);
    }

    if (text != "")
        vs.push_back(text);

    for (size_t i = 1; i < vs.size(); i++)
        std::transform(vs[i].begin(), vs[i].begin() + 1, vs[i].begin(), ::toupper);

    std::string res;
    for (const auto &piece : vs)
        res += piece;

    return res;
}