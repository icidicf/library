#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class print
{
    public:
        void operator() (const T& elem) {
            cout << elem <<' ';
        }
};
int main(void)
{
    int ia[6] = {1, 2, 3, 4, 5, 6};
    vector<int> iv (ia, ia+6);
    for_each(iv.begin(), iv.end(), print<int>());
    cout << endl;
    return 0;
}
