vector<int> leaders(int a[], int n)
{
    // code here
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = i; j < n; j++)
        {

            if (a[i] < a[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            vec.push_back(a[i]);
        }
    }
    return vec;
}