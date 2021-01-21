#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, z;
    cin >> z;
    for (int t = 0; t < z; t++)
        0

        {
            int n, i, j, k;
            vector<int> v1;
            int x;
            cin >> n;
            cin >> k;
            int min_step = 565454;
            int result = -1;
            int ca = 0;
            for (i = 0; i < n; i++)
            {
                cin >> x;
                v1.push_back(x);
            }
            for (i = 0; i < n; i++)
            {
                if (v1[i] < k && k % v1[i] == 0)
                {
                    result = max(v1[i], result);
                }
            }
            cout << result << endl;
        }
}
