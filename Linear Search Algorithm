#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Veriable Declaration
    int n, i, x, T, key, flag;
    vector<int> v;
    // Read Count of Test Cases
    cout << "Enter Count of Test Cases: ";
    cin >> T;
    while (T--)
    {
        // Read Array Size
        cout << "Enter Array Size: ";
        cin >> n;
        // Read Array Element
        cout << "Enter " << n << " Elements: ";
        while (n--)
        {
            cin >> x;
            v.push_back(x);
        }
        // Read Key for Look Up
        cout << "Enter Key :";
        cin >> key;
        flag = 0;
        for (auto it : v)
        {
            if (it == key)
            {
                flag = true;
                break;
            }
        }
        // Display Result
        if (flag == true)
            cout << "Key " << key << " Found..." << endl;
        else
            cout << "Key " << key << " Not Found..." << endl;
        // Erase The Dynamic Array Element
        v.clear();
    }
    return 0;
}
