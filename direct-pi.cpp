#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int n_trials = 400, n_hits = 0;
   
    for (int i = 1; i < n_trials; i++)
    {
        float x = rand() % 3 + (-1);
        float y = rand() % 3 + (-1);

        if (pow(x, 2) + pow(y, 2) < 1)
        {
            n_hits = n_hits + 1;
        }
    }
    
    cout << "Pi is approx. " << (4.0 * n_hits) / 400 << endl;

    return 0;
}
