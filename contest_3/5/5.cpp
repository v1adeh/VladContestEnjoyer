#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int a;
    cin >> a;
    map<string, int> freq;
    for (int i = 0; i < a; ++i) {
        string word;
        cin >> word;
        freq[word] += 1;
    }
    int maxfreq;
    set <string> MostFreqWord;
    for (auto& pair : freq) {
        if (pair.second > maxfreq) {
            maxfreq = pair.second;
            MostFreqWord = {pair.first};
        } 
		if (pair.second == maxfreq) {
            MostFreqWord.insert(pair.first);
        }
    }	
    for (auto i : MostFreqWord) {
        cout << i << " ";
    }
}
