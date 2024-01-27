#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    for(int i = 0; i < str_list.size(); i++)
    {
        if(str_list[i] == "l")
        {
            str_list.erase(str_list.begin() + i, str_list.end());
            break;
        }
        else if(str_list[i] == "r")
        {
            str_list.erase(str_list.begin(), str_list.begin() + i + 1);
            break;
        }
        else if(i == str_list.size() - 1)
            return vector<string>();
    }
    return str_list;
}