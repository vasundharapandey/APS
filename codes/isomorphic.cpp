#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, char> s2t;
        unordered_map<char, bool> tVisited;

        for (int i = 0; i < s.length(); ++i) {
            char charS = s[i];
            char charT = t[i];

            if (s2t.find(charS) != s2t.end()) {
                if (s2t[charS] != charT) {
                    return false;
                }
            } else {
                if (tVisited[charT]) {
                    return false;
                }

                s2t[charS] = charT;
                tVisited[charT] = true;
            }
        }

        return true;
    }

    vector<string> findIsomorphicCandidates(string word, vector<string>& validWords) {
        vector<string> candidates;
        for (const string& validWord : validWords) {
            if (isIsomorphic(word, validWord)) {
                candidates.push_back(validWord);
            }
        }
        return candidates;
    }
};

int main() {
    Solution solution;

    // Example usage
    string word = "Novea";
    vector<string> validWords = {"Nivea", "Nivee", "Novaa", "Navee"};
    vector<string> candidates = solution.findIsomorphicCandidates(word, validWords);

    cout << "Candidates for the word '" << word << "':" << endl;
    for (const string& candidate : candidates) {
        cout << candidate << endl;
    }

    return 0;
}
