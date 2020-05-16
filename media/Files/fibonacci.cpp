#include <iostream>
#include <cassert>

int fibonacci_fast(int n) {
    // write your code here
	long long a[n];
	int s=0;
	//a[0]=0;
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else{
	s=1;
	a[0]=0;
	a[1]=1;
	for(int i=2;i<n+1;i++)
	{
	
	//a[i]=a[i-1]+a[i-2];
	
	a[i]= (a[i-1]%10)+(a[i-2]%10);
	a[i]=a[i]%100;
	//std::cout<<a[i]<<"   "<<s<<"   nl";
	s=s+a[i];
	
	}
	//int a1 =a[n];
	s=s%10;
    return s;
}
}


int main() {
    int n = 0;
    std::cin >> n;

    //std::cout << fibonacci_naive(n) << '\n';
    //test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
