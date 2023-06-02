#include<iostream>
using namespace std;
 
int cal_fabi(int n) {
    if (n<=1){
    	return n;	
	}    
    int x=0;
    int y=1;
    int result;
    for(int i=2;i<=n;i++){
        result = x+y;
        x=y;
        y=result;
    }
    return result;
}
double cal_fab(double n) {
    if (n <= 1) {
        return n;
    }
    return cal_fab(n-1) + cal_fab(n-2);
}
int main() {
    double n;
    int result;
    cout << "Enter the value of n to calculate fabinacci number : ";
    cin >>n;
    result=cal_fab(n);
    cout << "Result: "<<result;
    int fib;
    int previousFib;
    while (true) {
        fib = cal_fabi(n);
        if (fib < previousFib) {
            break;
        }
        previousFib = fib;
        n++;
    }

    cout << "\nThe largest Fibonacci number that can be displayed on this system is: " << previousFib <<endl;

}

