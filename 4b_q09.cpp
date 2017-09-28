    #include <iostream>
    using namespace std;
    int factorial(int);
    int main() {
    int n;
    cout<<"Enter number";
    cin>>n;
    cout<<"Factorial="<<factorial(n);}
    int factorial(int n)
    {if(n>1)
    {return n*factorial(n-1);}
    else{
    	return 1;}
    }