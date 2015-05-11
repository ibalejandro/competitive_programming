#include <bits/stdc++.h>

using namespace std;

struct card {
  int val;
  char suit;
  card(int _val, char _suit) : val(_val), suit(_suit) { }
  int cost() {
    return val >= 10 ? 0 : val; 
  }
};

vector <card> hand;

int
value() {
  if (hand[0].suit == hand[1].suit && hand[1].suit == hand[2].suit) {
    vector <int> nums;
    nums.push_back(hand[0].cost());
    nums.push_back(hand[1].cost());
    nums.push_back(hand[2].cost());
    sort(nums.rbegin(), nums.rend());
    return 20 + nums[0] + nums[1];
  }
  if (hand[0].suit == hand[1].suit) {
    return 20 + hand[0].cost() + hand[1].cost();
  }
  else if (hand[0].suit == hand[2].suit) {
    return 20 + hand[0].cost() + hand[2].cost();
  }
  else if (hand[1].suit == hand[2].suit) {
    return 20 + hand[1].cost() + hand[2].cost();
  }
  else {
    return max(hand[0].cost(), max(hand[1].cost(), hand[2].cost()));
  }
}

int
solve() {
  int oldVal = value();
  vector <int> nums;
  nums.push_back(hand[0].cost());
  nums.push_back(hand[1].cost());
  nums.push_back(hand[2].cost());
  sort(nums.rbegin(), nums.rend());
  if (nums[0] != 7) nums[1] = 7;
  else nums[1] = 6;
  return (20 + nums[0] + nums[1]) - oldVal;
}

int
main() {
  while (true) {
    hand.clear();
    int val;
    string suit;
    for (int i = 0; i < 3; ++i) {
      cin >> val >> suit;
      card c(val, suit[0]);
      hand.push_back(c);
    }
    if (val == -1) break;
    cout << solve() << endl;
  }
  return 0;
}
