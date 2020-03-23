#include<iostream>
#include<tuple>
#include<utility>
using namespace std;
tuple<int, string, char> my_function_tuple(int x, string y) {
   return make_tuple(x, y, 'A'); // make tuples with the values and return
}
std::pair<int, string> my_function_pair(int x, string y) {
   return std::make_pair(x, y); // make pair with the values and return
}
int main() {
   int a;
   string b;
   char c;
   tie(a, b, c) = my_function_tuple(48, "Hello"); //unpack tuple
   pair<int, string> my_pair = my_function_pair(89,"World"); //get pair from function
   cout << "Values in tuple: ";
   cout << "(" << a << ", " << b << ", " << c << ")" << endl;
   cout << "Values in Pair: ";
   cout << "(" << my_pair.first << ", " << my_pair.second << ")" << endl;
}
