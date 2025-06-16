#include <iostream>
#include "PPPheaders.h"

int main() {
    int num_words = 0;
    string previous;
    string current;
    while (cin>>current) {
        ++num_words;
        if (previous == current)
            cout << "word number " << num_words << " repeated word: " << current << '\n';
        previous = current;
    }
}