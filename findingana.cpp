// https://acpc21d2.kattis.com/problems/findingana

#include <bits/stdc++.h>
using namespace std;

string solve(string word){
    for (string::size_type i = 0; i < word.size(); i++) {
        if (word[i] == 'a'){
            word.erase(0,i);
            return word;
        }
    }
    return "0";
}

int main()
{
    string word;
    cin >> word;
    cout << solve(word) << endl;
	return 0;
}