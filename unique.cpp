#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 5, 6, 7, 7, 7};
    vector<int> v2 = {6, 5, 7, 4, 3, 7, 1, 2, 7, 5};
    vector<int> v3 = {6, 5, 7, 4, 3, 7, 1, 2, 7, 5};

    /// *********** already sorted *********** ///
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0; i<v.size(); i++)
        cout << v.at(i) << endl;

    cout << endl << endl;

    /// *********** Not sorted *********** ///
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for(int i=0; i<v2.size(); i++)
        cout << v2.at(i) << endl;

    cout << endl << endl;

    /// *********** after being sorted *********** ///
    sort(v3.begin(), v3.end());
    v3.erase(unique(v3.begin(), v3.end()), v3.end());

    for(int i=0; i<v3.size(); i++)
        cout << v3.at(i) << endl;

    return 0;
}
