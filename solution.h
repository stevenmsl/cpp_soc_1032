
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol1032
{

  class StreamChecker
  {
  private:
    Node *root = new Node();
    string chars;

  public:
    StreamChecker(vector<string> &words);
    bool query(char c);
  };

  class Solution
  {
  private:
  public:
  };
}
#endif