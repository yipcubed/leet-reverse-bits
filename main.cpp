#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <climits>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
      const static uint32_t one = 1;
      uint32_t r{0};
      for (int i = 0; i < 32; ++i) {
        // shift left, multiply by 2
        r <<= 1;
        // is the last bit 1, check using bitwise AND
        // set last bit to 1 using bitwise OR
        if ((n & one) != 0)
          r |= 1;
        // remove 1 bit, divide by 2
        n >>= 1;
      }
      return r;
    }
};

void test1() {
  Solution S;
  uint32_t x;
  x = 43261596;
  cout << "964176192? " << S.reverseBits(x) << endl;
  x = 4294967293;
  cout << "3221225471? " << S.reverseBits(x) << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}