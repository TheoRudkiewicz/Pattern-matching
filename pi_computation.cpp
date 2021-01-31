// #include <bits/stdc++.h>
#include <iostream>
// #include <cmath>
// #include <algorithm>
#include <string>
// #include <set>
#include <vector>
// #include <queue>
#define repeat(nb) for (unsigned _loop = 1, _max = (nb); _loop <= _max; _loop++)
#define fori(nb) for (unsigned i(0), _max = (nb); i < _max; i++)
#define init_tab(tab, n) fori(n){cin >> tab[i];}
#define print_tab(tab, n) fori(n){printf("%d ", tab[i]);}


using namespace std;


vector<int> pi(string pattern)
{
    unsigned complexity(0);
    vector<int> pi_value(pattern.length(), 0);
    unsigned j(0);

    for(int i(1); i < pattern.length(); i++)
    {
        complexity++;
        while (j > 0 && pattern[j] != pattern[i])
        {
            j = pi_value[j - 1];
            complexity++;
        }
        
        if(pattern[j] == pattern[i])
        {
            j++;
        }
        pi_value[i] = j;
    }
    printf("complexité: %u \t m: %u\n", complexity, (unsigned) pattern.length());
    return pi_value;
}


int main()
{
    string p;
    getline(cin, p);
    p = "ababaca";
    vector <int> piv(pi(p));

    print_tab(piv, p.length());
}
