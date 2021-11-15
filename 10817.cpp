#include <iostream>
using namespace std;

int main() {
    int a,b,c,result;
    cin >> a >> b >> c;
    if(a>=b && a>=c){//a°¡ MAX
        if(b>c) result=b;
        else result=c;
    }
    else if(b>=a &&b>=c){//b°¡ MAX
        if(a>c) result=a;
        else result=c;
    }
    else{//c°¡ MAX
        if(a>b) result=a;
        else result=b;
    }
    cout << result;
}
