#include <vector>

int score(const std::vector<int> &dice)
{
    auto score = 0;
    int count[] = {0, 0, 0, 0, 0, 0};
    int score_arr[] = {1000, 200, 300, 400, 500, 600};
    int bonus[] = {100, 0, 0, 0, 50, 0};
    for (auto d : dice)
        count[d - 1] += 1;

    auto idx = 0;
    for (auto x : count)
    {
        score += ((x >= 3) ? 1 : 0) * score_arr[idx] + bonus[idx] * (x % 3);
        idx++;
    }

    return score;
}