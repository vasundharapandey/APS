#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <set>

using namespace std;

struct TrieNode {
    unordered_map<char, int> children;
    bool isEndOfWord = false;
    int parent = -1;
    char parentChar;
    int suffixLink = -1;
    unordered_map<char, int> transitions;

    TrieNode(int parent = -1, char ch = '\0') : parent(parent), parentChar(ch) {}
};

vector<TrieNode> trie;

void initializeTrie() {
    trie.clear();
    trie.emplace_back(TrieNode());
}

void addKeyword(const string& keyword) {
    int nodeIndex = 0;
    for (char ch : keyword) {
        if (trie[nodeIndex].children.count(ch) == 0) {
            trie[nodeIndex].children[ch] = trie.size();
            trie.emplace_back(nodeIndex, ch);
        }
        nodeIndex = trie[nodeIndex].children[ch];
    }
    trie[nodeIndex].isEndOfWord = true;
}

int getTransition(int nodeIndex, char ch);

int getSuffixLink(int nodeIndex) {
    if (trie[nodeIndex].suffixLink == -1) {
        if (nodeIndex == 0 || trie[nodeIndex].parent == 0)
            trie[nodeIndex].suffixLink = 0;
        else
            trie[nodeIndex].suffixLink = getTransition(getSuffixLink(trie[nodeIndex].parent), trie[nodeIndex].parentChar);
    }
    return trie[nodeIndex].suffixLink;
}

int getTransition(int nodeIndex, char ch) {
    if (trie[nodeIndex].transitions.count(ch) == 0) {
        if (trie[nodeIndex].children.count(ch) != 0)
            trie[nodeIndex].transitions[ch] = trie[nodeIndex].children[ch];
        else
            trie[nodeIndex].transitions[ch] = nodeIndex == 0 ? 0 : getTransition(getSuffixLink(nodeIndex), ch);
    }
    return trie[nodeIndex].transitions[ch];
}

int searchKeywords(const string& text) {
    int nodeIndex = 0;
    int matchCount = 0;
    for (char ch : text) {
        nodeIndex = getTransition(nodeIndex, ch);
        int checkNode = nodeIndex;
        while (checkNode != 0) {
            if (trie[checkNode].isEndOfWord) {
                matchCount++;
            }
            checkNode = getSuffixLink(checkNode);
        }
    }
    return matchCount;
}

int countMatches(const set<string>& patterns) {
    int totalMatches = 0;
    for (const auto& pattern : patterns) {
        totalMatches += searchKeywords(pattern);
    }
    return totalMatches;
}

double calculateSimilarity(const set<string>& keywords, const set<string>& customerMessage) {
    initializeTrie();
    for (const auto& keyword : keywords) {
        addKeyword(keyword);
    }

    int matches = countMatches(customerMessage);
    int totalKeywords = keywords.size() + customerMessage.size();
    
    return static_cast<double>(matches) / totalKeywords;
}

int main() {
    set<string> keywords = {"help", "support", "refund", "return", "order", "shipping"};
    set<string> customerMessage = {"I need help with my order. I want to request a refund for the item."};

    double similarityScore = calculateSimilarity(keywords, customerMessage);
    cout << "Similarity score: " << similarityScore << endl;

    return 0;
}
