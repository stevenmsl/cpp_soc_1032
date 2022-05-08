#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1032;

/*
StreamChecker streamChecker = new StreamChecker(["cd","f","kl"]); // init the dictionary.
streamChecker.query('a');          // return false
streamChecker.query('b');          // return false
streamChecker.query('c');          // return false
streamChecker.query('d');          // return true, because 'cd' is in the wordlist
streamChecker.query('e');          // return false
streamChecker.query('f');          // return true, because 'f' is in the wordlist
streamChecker.query('g');          // return false
streamChecker.query('h');          // return false
streamChecker.query('i');          // return false
streamChecker.query('j');          // return false
streamChecker.query('k');          // return false
streamChecker.query('l');          // return true, because 'kl' is in the wordlist
*/

void test1()
{
  auto words = vector<string>{"cd", "f", "kl"};
  StreamChecker streamChecker = StreamChecker(words);

  cout << "Expect to see 0:" << streamChecker.query('a') << endl;
  cout << "Expect to see 0:" << streamChecker.query('b') << endl;
  cout << "Expect to see 0:" << streamChecker.query('c') << endl;
  cout << "Expect to see 1:" << streamChecker.query('d') << endl;
  cout << "Expect to see 0:" << streamChecker.query('e') << endl;
  cout << "Expect to see 1:" << streamChecker.query('f') << endl;
  cout << "Expect to see 0:" << streamChecker.query('g') << endl;
  cout << "Expect to see 0:" << streamChecker.query('h') << endl;
  cout << "Expect to see 0:" << streamChecker.query('i') << endl;
  cout << "Expect to see 0:" << streamChecker.query('j') << endl;
  cout << "Expect to see 0:" << streamChecker.query('k') << endl;
  cout << "Expect to see 1:" << streamChecker.query('l') << endl;
}

main()
{
  test1();

  return 0;
}