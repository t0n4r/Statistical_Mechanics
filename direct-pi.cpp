#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int n_trials, n_hits = 0;
    
    cin >> n_trials;
    
    for (int i = 1; i < n_trials; i++)
    {
        float x = 2.0 * drand48() + (-1);
        float y = 2.0 * drand48() + (-1);

        if (pow(x, 2) + pow(y, 2) <= 1)
        {
            n_hits = n_hits + 1;
        }
    }
    
    cout << "Pi is approx. " << (4.0 * n_hits) / n_trials << endl;

    return 0;
}
