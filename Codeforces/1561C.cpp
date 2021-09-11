#include <bits/stdc++.h>
using namespace std;
struct member
{
    int first, second, index;
};

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<member> vec;
        for (int i = 0; i < n; i++)
        {
            int k, maxE = INT_MIN, index = 0;
            cin >> k;
            int arr[k];
            for (int j = 0; j < k; j++)
            {
                cin >> arr[j];
                if (maxE < arr[i])
                    {index = i;
                    maxE= arr[i];}
            }
            member m1;
            cout<<maxE<<endl;
            m1.first = maxE;
            m1.second = k;
            m1.index = index;
            vec.push_back(m1);
        }
        /* for (int i = 0; i < vec.size(); i++)
        {
            cout<<vec[i].first<<" "<<vec[i].second<<endl;
        }*/
        //sort(vec.begin(),vec.end());
        /* vec[vec.size()-1].second--;
        int count =0;
        for (int i = 0; i < vec.size()-1; i++)
        {
            count += vec[i].second;
        }
        count = vec[vec.size()-1].first+1 - count- vec[vec.size()-1].second;
        cout<<count<<endl;*/
        member m2;
        int maxE = INT_MIN;
        for (int i = 0; i < vec.size(); i++)
        {
            if (maxE < vec[i].first)
            {
                m2.first = vec[i].first;
                m2.second = vec[i].second;
                m2.index = vec[i].index;
                maxE = vec[i].first;  cout<<maxE<<endl;

            }
        }
        cout<<maxE<<endl;
        int sum = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i].first != m2.first)
            {
                sum += vec[i].second;
            }
        }
        cout<<m2.first <<endl;
    }
}