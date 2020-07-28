#include<iostream>
using namespace std;

class large
{
    int x, y;
    determine()
    {
        if(x>y) cout<<x;
        else cout<<y;
    }
public:
    large(int q, int r)
    {
        x=q;
        y=r;
    }
    display()
    {
        determine();
    }
};

int main()
{
    int x, y;
    cin>>x>>y;
    large ob(x,y);
    ob.display();
}
