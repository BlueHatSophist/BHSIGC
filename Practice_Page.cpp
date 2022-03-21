#include <iostream>
using namespace std;

int main() {
  cout << "\nC++ Practice What I Learn Here Display Output There" << endl;
  int a,b;
  a= 3;
  b= 5;
  bool result;

  cout << "\n";
  cout << "Value a=  " << a << endl;
  cout << "Value b=  " << b << endl;
  cout << "\n";
  //Operations +,-,*,/,%
  cout << "  //Operations +,-,*,/,%" << endl;
  cout << "a+b= " << (a+b) << endl;
  cout << "a-b= " << (a - b) << endl;
  cout << "a/b= " << (a / b) << endl;
  cout << "a*b= " << (a * b) << endl;
  cout << "a%b= " << (a % b) << endl;
  cout << "\n";
  //asighning Operatiors to Operations =
  cout << "  //asighning Operatiors to Operations =" << endl;
  cout << "(a +=b) (a=a+b)" << endl;
  cout << "(a -=b) (a=a-b)" << endl;
  cout << "(a /=b) (a=a/b)" << endl;
  cout << "(a *=b) (a=a*b)" << endl;
  cout << "(a %=b) (a=a%b)" << endl;
  cout << "\n";
  cout << "a= " << a << endl;
  cout << "b= " << b << endl;
  cout << "\nafter a+=b; = 8" << endl;
  cout << "\n";
  //relational Operators
  cout << "  //relational Operators ==,!=,>,<,>=,<=" << endl;
  result = (a == b);
  cout << "3 == 5 is " << result << endl;
  result = (a != b);
  cout << "3 != 5 is " << result << endl;
  result = (a > b);
  cout << "3 > 5 is " << result << endl;
  result = (a < b);
  cout << "3 < 5 is " << result << endl;
  result = (a >= b);
  cout << "3 >= 5 is " << result << endl;
  result = (a <= b);
  cout << "3 <= 5 is " << result << endl;
  cout <<"\n";
  /*if... statement trying to get a simple converstion going. 0-15 0-f with the 
  outputs being defined and the input being read if not 1 then should test 2 and so on.
  0=0000 1=0001 2=0010 3=0011 4=0100 5=0101 6=0110 7=0111 8=1000 9=1001 10(a)=1010 
  11(b)=1011 12(c)1100 13(d)1101 14(e)=1110 15(f)=1111*/
  cout << "//binary converstion enter any number between 0-15" << endl;
  int number;
  cin >> number;
  if (number == 0) {
    cout << "0000 =" << number << endl;
  }
  else if (number == 1) {
    cout << "0001 =" << number << endl;
  }
  else if (number == 2) {
    cout << "0010 =" << number << endl;
  }
  else if (number == 3) {
    cout << "0011 =" << number << endl;
  }
  else if (number == 4) {
    cout << "0100 =" << number << endl;
  }
  else if (number == 5) {
    cout << "0101 =" << number << endl;
  }
  else if (number == 6) {
    cout << "0110 =" << number << endl;
  }
  else if (number == 7) {
    cout << "0111 =" << number << endl;
  }
  else if (number == 8) {
    cout << "1000 =" << number << endl;
  }
  else if (number == 9) {
    cout << "1001 =" << number << endl;
  }
  else if (number == 10) {
    cout << "1010 =Hex(a)=" << number << endl;
  }
  else if (number == 11) {
    cout << "1011 =Hex(b)=" << number << endl;
  }
  else if (number == 12) {
    cout << "1100 =Hex(c)=" << number << endl;
  }
  else if (number == 13) {
    cout << "1101 =Hex(d)=" << number << endl;
  }
  else if (number == 14) {
    cout << "1110 =Hex(e)=" << number << endl;
  }
  else if (number == 15) {
    cout << "1111 =Hex(f)=" << number << endl;
  }
  cout << "\n";
  /* this is the hex representation just in case you enter a hex letter to represent a number it would be correct as well like 10=a or a=10
  else if (char == a) {
    cout << "1010 =Hex(a)=" << number << endl;
  }
  else if (char == b) {
    cout << "1011 =Hex(b)=" << number << endl;
  }
  else if (char == c) {
    cout << "1100 =Hex(c)=" << number << endl;
  }
  else if (char == d) {
    cout << "1101 =Hex(d)=" << number << endl;
  }
  else if (char == e) {
    cout << "1110 =Hex(e)=" << number << endl;
  }
  else if (char == f) {
    cout << "1111 =Hex(f)=" << number << endl;
  }
*/
//looping starting with (for) 
  for (int i = 0; i<=number; ++i)
  cout << i << " ";
  cout << "\n this shows the 0-input value" << endl;
        return 0;
}
