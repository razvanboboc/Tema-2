##include<iostream>
#include<math.h>
#include<string.h>
#include<math.h>

using namespace std;

float n;
bool isRoundedTo100;
int f( float n , bool isRoundedTo100 = false ){
    if(isRoundedTo100 == true)
    else
        return 100 * round(n/100.0);


class student{
    public:
    int a;
    int b;
};
student st1;


template <typename st1>
st1 Max(st1 a , st1 b){
    return a < b ? b : a ;
}

////////////////////////////////////
int f1(int x){
    return sizeof(x);
}
int f1(double x){
    return sizeof(x);
}
int f1(char *x){
    return strlen(x);
}
//////////////////////////////////

char f2(int a){
    while(a>9)
        a=a/10;
    return a ;
}

char f2(long a){
    while(a>9)
        a=a/10;
    return a ;
}

char f2(char *s){
    return s[0];
}
///////////////////////////////////
template <typename S>
S suma( S s1,S s2 ,S s3){
    int sum= max(s1,s2);
    return max(sum ,s3);
template <typename Q>
Q schimba( Q v1,Q v2){
    int aux = v1;
    v1 = v2;
    v2 = aux;
    cout <<v1<<" "<<v2;

class ani{
    public:
    int age;
};
class pisica : public ani{
    public:
    string nume;
    string stapan;
};
pisica pisoi;

class persoana : public ani{
    string nume;
    string prenume;
};
persoana Alex;

class masina : public ani{
    public:
    string marca;
    string nrInmatriculare;
};
masina masina1;

int main(){
    cin>>n;
    cout<<f(n,false)<<'\n';
    cout<<'\n';
    cout<<f1(123)<<'\n';
    cout<<f1(123.123)<<'\n';
    cout<<f1("abc")<<'\n';
    cout<<'\n';
    cout<<(int)f2(223)<<'\n';
    cout<<(int)f2(323)<<'\n';
    cout<<f2("abc")<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<suma(12,32,56);
    cout<<'\n';
    int switch1 ,switch2;
    cin>>switch1>>switch2;
    schimba(switch1,switch2);
    cout<<'\n';
    cout<<'\n';
    cout<<Max(2,3)<<endl;
    cout<<Max(2.5, 3.4)<<endl;
    cout<<Max('a','b')<<endl;
    cout<<Max("bb","aaaa")<<endl;

}
