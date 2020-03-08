#include <iostream>
#include <algorithm>
using namespace std;
struct findinputs {
  int x1, y1, x2, y2;
};
int areaofrect(findinputs r)
{
  return (r.x2 - r.x1) * (r.y2 - r.y1);
}
int intersect2rects(findinputs p, findinputs q)
{
  int x10 = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
  int y10 = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
  return x10 * y10;
}

int main()
{
  findinputs a, b, t;
  cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
  cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;

  cout << areaofrect(a) + areaofrect(b) - intersect2rects(a,t) - intersect2rects(b,t) <<endl;

  return 0;
}
