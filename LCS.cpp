#include<iostream>
#include<cstring>
using namespace std;

int lcs(string s, string t){

    if(s.size() == 0 || t.size() == 0) {
        return 0;
    }

    if(s[0] == t[0]) {
        return 1 + lcs(s.substr(1), t.substr(1));
    }
    else {
        int x = lcs(s, t.substr(1));
        int y = lcs(s.substr(1), t);

        return max(x, y);
    }


}
int main(){

  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  cout << lcs(s1,s2) << endl;

}
