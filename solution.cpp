#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <bitset>
using namespace sol1032;
using namespace std;

/*takeaways
  - use Trie tree but record the word backward
    in the tree
  - use a string to accumulate the incoming
    query chars
*/

StreamChecker::StreamChecker(vector<string> &words)
{
  for (auto w : words)
  {
    auto visit = root;

    /* this is important that n is cast to an integer
       - have made the same mistakes repeatedly
       - it will become an infinite loop if you don't cast
         it to an integer
    */
    int n = w.size();

    /* we will search the word backward */
    for (auto i = n - 1; i >= 0; i--)
    {
      auto c = w[i] - 'a';
      if (visit->next[c] == nullptr)
        visit->next[c] = new Node();
      visit = visit->next[c];
    }
    visit->isWord = true;
  }
}

bool StreamChecker::query(char c)
{
  chars.push_back(c);
  auto visit = root;
  /* query the tree by the prefixes of query string but
     in a backward manner
     - if chars = "abcd"
     - we are querying the prefixes in this order
     - d, dc, dcb, dcba
  */
  int n = chars.size(); /* n has to be type int!! */
  for (auto i = n - 1; i >= 0 && visit != nullptr; i--)
  {
    auto pos = chars[i] - 'a';
    visit = visit->next[pos];
    if (visit != nullptr && visit->isWord)
      return true;
  }

  return false;
}