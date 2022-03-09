// https://acpc21d2.kattis.com/problems/simone

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=0, k=0;
    cin >> n >> k;
    int sequence[n], occurrence[k], whatColours[k];
    for (int i = 0; i < k; i++)
    {
        occurrence[i] = 0;
        whatColours[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> sequence[i];
        occurrence[sequence[i] - 1]++;
    }
    int smallestOccurrence = occurrence[0];
    for (int i = 0; i < k; i++)
    {
        if (occurrence[i] <= smallestOccurrence){
            smallestOccurrence = occurrence[i];
        }
    }
    int totalColours = 0;

    for (int i = 0; i < k; i++)
    {
        if (occurrence[i] == smallestOccurrence){
            whatColours[totalColours] = i + 1;
            totalColours++;
        }
    }

    cout << totalColours << endl;
    for (int i = 0; i < k; i++)
    {
        if (whatColours[i] != 0){
            cout << whatColours[i] << ' ';
        }
        else {
            return 0;
        }
    }
    return 0;
}
