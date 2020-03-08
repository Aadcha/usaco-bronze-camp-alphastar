#include <iostream>
#include <fstream>
using namespace std;
char a[3][3];
int onecow(char ch)
{
  if (a[0][0] == ch && a[1][1] == ch && a[2][2] == ch) return 1;
  if (a[0][2] == ch && a[1][1] == ch && a[2][0] == ch) return 1;
  for (int i=0; i<3; i++) {
    if (a[0][i] == ch && a[1][i] == ch && a[2][i] == ch) return 1;
    if (a[i][0] == ch && a[i][1] == ch && a[i][2] == ch) return 1;
  } 
  return 0; 
}
bool check(char ch1, char ch2, char a, char b, char c) 
{
  if (a != ch1 && a != ch2) return false;
  if (b != ch1 && b != ch2) return false;
  if (c != ch1 && c != ch2) return false;
  if (a != ch1 && b != ch1 && c != ch1) return false;
  if (a != ch2 && b != ch2 && c != ch2) return false;
  return true;
}
int morecows(char ch1, char ch2)
{
  if (check(ch1, ch2, a[0][0], a[1][1], a[2][2])) return 1;
  if (check(ch1, ch2, a[0][2], a[1][1], a[2][0])) return 1;
  for (int i=0; i<3; i++) {
    if (check(ch1, ch2, a[0][i], a[1][i], a[2][i])) return 1;
    if (check(ch1, ch2, a[i][0], a[i][1], a[i][2])) return 1;
  }
  
  return 0; 
}
 
int main(void)
{
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      cin >> a[i][j];
 
  int answer1 = 0, answer2 = 0;
  for (char ch = 'A'; ch <= 'Z'; ch++) 
    answer1 += onecow(ch);
  for (char ch1 = 'A'; ch1 <= 'Z'; ch1++) 
    for (char ch2 = ch1+1; ch2 <= 'Z'; ch2++) 
      answer2 += morecows(ch1, ch2);
 
  cout << answer1 <<endl<<answer2<<endl;
  return 0;
}
