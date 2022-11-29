#include <string>

using namespace std;

bool vowels(char c)
{
    char ch = std::tolower(c);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int getCount(const string &inputStr)
{
    int num_vowels = 0;
    for (auto c : inputStr)
    {
        if (vowels(c))
            num_vowels++;
    }
    return num_vowels;
}