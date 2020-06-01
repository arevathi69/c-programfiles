
#include<iostream.h>
#include<conio.h>
int checkPrime(int n);
int checkPrime(int i);

int main()
  {
    int n,i,flag,true,false;
    flag = false;
    cout << "Enter a positive number\n";
    cin >> n;
     for(i=2;i<=n/2;++i)
      {
	if(checkPrime(i))
	 {
	   if(checkPrime(n-i))
	    {
	      cout << n << "=" << i << " +" << n-i;
	      flag = true;
	    }
	    cout << "\n";
	 }
      }
   if(flag!= true)
    {
      cout << n << "can't be expressed as sum of two prime numbers\n";
    }
    return 0;
  }

 int checkPrime(int n)
       {
	int i,isPrime,true,false;
	 isPrime=true;
	for(i=2;i<=n/2;++i)
	{
	 if(n % i == 0)
	  {
	   isPrime = false;
	   break;
	  }
	}

     return isPrime;
  }
