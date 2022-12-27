#include <bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;

class Trie {
  vector<Trie *> alpha;
  bool isEnd;

 public:
  Trie() {
    alpha.resize(26, NULL);
    isEnd = false;
  }
  void insert(string &s) {
    Trie *cur = this;
    int sz = s.size();
    for (int i = 0; i < sz; i++) {
      if (!cur->alpha[s[i] - 'a']) {
        Trie *node = new Trie();
        cur->alpha[s[i] - 'a'] = node;
      }
      cur = cur->alpha[s[i] - 'a'];
    }
    cur->isEnd = true;
  }
  bool search(string &s) {
    Trie *cur = this;
    int sz = s.size();
    for (int i = 0; i < sz; i++) {
      if (!cur->alpha[s[i] - 'a']) return false;
      cur = cur->alpha[s[i] - 'a'];
    }
    if (cur->isEnd) return true;
    return false;
  }
};
int main() { Trie *ob = new Trie(); }