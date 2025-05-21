#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Veriable Declaration
    int n, x, T, key, flag, low, mid, high;
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

        low = 0;
        high = v.size() - 1;
        flag = 0;

        while (low <= high)
        {
            mid = (low + high) / 2;

            if (v[mid] == key)
            {
                flag = 1;
                break;
            }
            else if (v[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }

        // Display Result
        if (flag == 1)
            cout << "Key " << key << " Found at " << mid << " index position..." << endl;
        else
            cout << "Key " << key << " Not Found..." << endl;
        // Erase The Dynamic Array Element
        v.clear();
    }
    return 0;
}
