#include <bits/stdc++.h>
using namespace std;

class M 
{
    int x;
    int y;
public:
    void set_xy(int a,int b)
    {
        x = a;
        y = b;

    }

    friend int sum(M M);

};

int sum(M m)
{
    int M ::* px = &M :: x;
    int M ::* py = &M :: y;
    M *pm = &m;       // creating object reference to pm pointer
    int S = m.*px + pm->*py;   
    return S;
}

int main()
{
   M n;
   void (M :: *pf)(int,int) = &M :: set_xy;
   (n.*pf)(10,20);

   cout << "SUM = " << sum(n) << "\n";

   M *op = &n;
   (op->*pf)(30,40);
   cout << "SUM = " << sum(n) << "\n";

   return 0;
   

}