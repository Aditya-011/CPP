#include <bits/stdc++.h>
using namespace std;
void decToHexa(int n)
{
    char hexaDeciNum[100];
    int i = 0;
    while (n != 0)
    {
        int temp = 0;
        temp = n % 16;
        if (temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }
    cout << "0x";
    // printing hexadecimal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}
int count(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c;
        int count1;
        cin >> a >> b >> c;
        decToHexa(a);
        cout << endl;
        count1 = count(b);
        count1 = count1 + 3;
        int i = 15 - count1;
        while (count1--)
        {
            cout << "_";
        }
        if (b >= 0)
            cout << "+";
        else
            cout << "-";
        printf("%.2f", b);
        cout << endl;
        int e = count(c);

        double d = c / pow(10, (e - 1));
        printf("%.9f", d);
        cout << "E";
        if ((e - 1) < 10)
            cout << "0";
        cout << (e - 1);
    }
}