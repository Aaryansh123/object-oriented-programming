#include<iostream>
using namespace std;

#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
    void getdata()
    {
        cout<<"enter real and imaginary part of complex number";
        cin>>real>>img;
    }
    complex &add(complex&c)
    {
        complex temp;
        temp.real= real+c.real;
        temp.img= img+c.img;
        return temp;
    }
    
    	 void print()
    {
        cout<<"the answer is: "<<real<<"+"<<img<<"i";
	}
 
};
int main()

 {
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1.add(c2);
    c3.print();
}

