#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int a[100];

    cin >> n;

    int i;
    for(i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a,a+n);
    for(i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}