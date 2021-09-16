#include <iostream>
#include "longint.h"

using namespace std;

int main( ) {
  LongInt a, b, c, d, e( "-0099999999999999999999999999999999x" );
  cout << "enter for a: ";
  cin >> a;
  cout << "enter for b: ";
  cin >> b;
  cout << "enter for c: ";
  cin >> c;
  cout << "enter for d: ";
  cin >> d;
  // LongInt a("000123456789012345678901234567890"), b("-000123456789012345678901234567889"), c("-000000000000000000000000000000001"), d("000123456789012345678901234567889"), e( "-0099999999999999999999999999999999x");
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  cout << "e = " << e << endl;


  LongInt f = e;
  cout << "f = " << f << endl;

  LongInt g("-12345678901234567890123456789001"), h("00000000000000000000000000000002"), i("12345678901234567890123456789002"), j("-00000000000000000000000000000000"), k("00000000000000000000000000000000");
  cout << "g = " << g << endl;
  cout << "h = " << h << endl;
  cout << "i = " << i << endl;
  cout << "j = " << j << endl;
  cout << "k = " << k << endl;
  LongInt m("0"); //created just so I can test with complex test cases
  cout << "-(g + h) = " << m - (g + h) << endl; 
  cout << a << " + " << b << " =  " << ( a + b ) << endl;
  cout << "c + a = " << (c + a) << endl;
  cout << "b + c = " << (b + c) << endl;
  cout << "a + b + c = " << (a + b + c) << endl;
  cout << "g + i = " << (g + i) << endl;
  cout << "g + h + i = " << (g + h + i) << endl;
  cout << "g + i - h = " << (g + i - h) << endl;
  cout << a << " - " << b << " =  " << ( a - b ) << endl;
  cout << "a - b + c = " << (a - b + c) << endl; 
  cout << "b - c = " << (b - c) << endl;
  cout << "-(b - c) = " << m - (b - c) << endl;
  cout << "a - b - c = " << (a - b - c) << endl;
  cout << b << " - " << a << " = " << ( b - a ) << endl;
  cout << b << " + " << a << " = " << ( b + a ) << endl;
  cout << a << " == " << c << " = " << ( a == c ) << endl;
  cout << j << " == " << k << " = " << (j == k) << endl;
  cout << k << " != " << k << " = " << (k!=j) << endl;
  cout << a << " != " << c << " =  " << ( a != c ) << endl;
  cout << a << " > " << d << " =  " << ( a > d ) << endl;
  cout << a << " >= " << d << " =  " << ( a >= d ) << endl;
  cout << a << " < " << d << " =  " << ( a < d ) << endl;
  cout << g << " > " << h << " = " << (g > h) << endl;
  cout << j << " <= " << k << " = " << (j <= k) << endl;
  cout << k << " >= " << k << " = " << (k >= j) << endl;
  cout << a << " <= " << d << " =  " << ( a <= d ) << endl;
  cout << "f = f - 1 = " << ( f = f + *( new LongInt( "-1" ) ) ) << endl;
  cout << "e = " << e << endl;
  cout << "g - h + c + d - k - b + a = " << (g - h + c + d - k - b + a) << endl;
  cout << "-(g - h + c + d - k - b + a) = " << m - (g - h + c + d - k - b + a) << endl;
  cout << "a + (b - c) = " << a + (b - c) << endl;
  cout << "b - (a + c) = " << b - (a + c) << endl;
  cout << "(a + b + c + d + e + f) - (g + h + i + j + k) = " << (a + b + c + d + e + f) - (g + h + i + j + k) << endl; 

  LongInt n = a + b + c + d + e + f;
  LongInt o = g + h + i + j + k;
  LongInt p = d + e;
  LongInt q = a + b + c;
  cout << "n = " << n << endl;
  cout << a << " + " << b << " + " << c << " = " << q << endl;
  cout << q << " + " << p << " = " << q + p << endl;
  cout << p << " + " << f << " = " << (p + f) << endl;
  cout << n << " - " << o << " = " << (n - o) << endl;
  cout << "(a - b - c - d - e - f) + (g - h - i - j - k) = " << (a - b - c - d - e - f) + (g - h - i - j - k) << endl;

  LongInt r = a - b - c - d - e - f;
  LongInt s = g - h - i - j - k;
  LongInt t = a - b - c;
  LongInt u = d + e + f;
  cout << "t = " << t << endl;
  cout << t << " - " << u << " = " << (t - u) << endl;
  cout << t << " - " << d << " - " << e << " - " << f << " = " << (t - d - e - f) << endl;
  cout << "r = " << r << endl;
  cout << "s = " << s << endl;
  cout << r << " + " << s << " = " << (r + s) << endl;
  cout << "-a = " << m - a << endl;

  LongInt v("ffffffffffffffffffffffffffffffff"), w("1111111111111111f111111111111111"), x; 
  cout << "v = " << v << endl;    //should print 0
  cout << "w = " << w << endl;    //should print 31 1s
  cout << "x = " << x << endl;    //should print 0 since its not initialized

  LongInt y, z;
  cout << "enter for y: ";    //input: 10000000f05678901r34h67u78392012 output: 1000000005678901346778392012
  cin >> y;
  cout << "enter for z: ";    //input: qwertyuiopasdfgh6jklzxcbvnmqwert output: 6
  cin >> z;
  cout << "y = " << y << endl; 
  cout << "z = " << z << endl;
}
