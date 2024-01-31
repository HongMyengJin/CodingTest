#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    if(arr1.size() != arr2.size())
        return arr1.size() > arr2.size() ? 1 : -1;
    else
        if((accumulate(arr1.begin(), arr1.end(), 0) - accumulate(arr2.begin(), arr2.end(), 0)) == 0)
            return 0;
        return accumulate(arr1.begin(), arr1.end(), 0) > accumulate(arr2.begin(), arr2.end(), 0) ? 1 : -1;
}