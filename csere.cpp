#include "std_lib_facilities.h"

int main(){
int a=5;
int b=6;
int c;
{
      a=a+b;
      b=a-b;
      a=a-b;

cout<<"a="<<a<<'\n'<<"b="<<b<<'\n';
}
{
      c=a;
      a=b;
      b=c;
cout<<"a="<<a<<'\n'<<"b="<<b<<'\n';
}
{
      a=a^b;
      b=a^b;
      a=a^b;
cout<<"a="<<a<<'\n'<<"b="<<b<<'\n';
}

}
