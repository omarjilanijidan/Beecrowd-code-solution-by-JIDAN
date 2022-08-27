#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		bool is_prime = true;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				is_prime=false;
				break;
			}

		}
		if(is_prime==0)
            cout << "Not Prime" << endl;
        else
            cout << "Prime" << endl;
	}
	return 0;

}
