#include <iostream>
#include <math.h>

using namespace std;

// ************** Count of a digit *****************
//          ************ Iterative Method **********
/*
int countDigit(int n)
{

    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << count << endl;
}

//          ************ Recursive Method **********

int countdigit1(int n)
{

    if (n == 0)
        return 0;
    return 1 + countdigit1(n / 10);
}

//          ************ Logarithmic Method **********

int countDigit3(long n)
{

    return float(log(10 * n) + 1);
}

int main()
{
    // countDigit(10 /*Must set default value then works);
    // countDigit3(100);

    long n;
    cout << "Enter value : " << endl;

    cin >> n;
    cout << countDigit(n) << endl;
    cout << countdigit1(n) << endl;
    cout << countDigit3(n) << endl;

    // return 0;
}




int countTrillingzero(int n)
{

    int rev = 0;

    for (int i = 5; i <= n; i = i * 5)
    {
        rev = rev + n / i;
    }

    return rev;
}
int main()
{
    int n;
    cout << "Enter the value : " << endl;
    cin >> n;
    // ** must cout the output function ****
    cout << "Count of trailing 0s in " << n << "! is " << countTrillingzero(n) << endl;
}




    int addDigits(int num) {
 int sum=0;
        while(num>0)
        {
            int last=num%10;
            sum+=last;
            num=num/10;
            if(num==0 && sum>9)
            {
                num=sum;
                sum=0;
            }
        }
        return sum;
        



    }

/*
int countzero(int n)
{

    int fact = 1;

    for (int i = 2; i <= n; i++)

    {

        fact = fact * i;
    }
    int rev = 0;

    while (fact % 10 == 0)

    {
        rev++;
        fact = fact / 10;
    }
    return rev;
}

int main()
{
   int n;
    cout << "Enter the number " << endl;
    cin >> n;

    cout << "Count of 0s in " << n << "! is " << countzero(n) << endl;
}
/*

// ********** GCD(Greatest Common Divider ) ****************
//  *** Method - 1 ***
int gcd(int a, int b)
{
    int result = min(a, b);

    while (result > 0)
    {

        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }

    return result;
}

// ***** Methode - 2  ******

int GCD(int a, int b)
{

    while (a != b)
    {

        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    // cout << " GCD is " << a << endl;
    return a;
}

int main()
{
    int a, b;
    cout << "Enter the two value : " << endl;
    cin >> a >> b;
    // GCD();
    cout << "GCD of " << a << " and " << b << " is " << GCD(a, b) << endl;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}


// *************** Prime Number *************
// *** Type-1 *******
bool isPrime(int n)
{

    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            cout << "It is not a Prime number " << endl;
            return false;
        }
    }
    cout << "It is a Prime number " << endl;
    return true;
}
// *** Type-2 *******
int primeNum(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
            count++;
    }
    if (count == 2)
        cout << "It is a Prime Number " << endl;
    else
        cout << "It is not a prime number " << endl;
}

// *** Type-3 *******

bool PrimeNum3(int n)
{

    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "It is not a prime number " << endl;
            return false;
        }
    }
    cout << "It is a prime number " << endl;
    return true;
}

// *** Type-4 (More Efficency Methode )*******
bool primeNum4(int n)
{

    if (n == 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    for (int i = 5; i * i <= n; i++)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}




*/

//  ************] Prime Factor Example [*************

// *** Note : It is Required modification

/*
//    Type - 1
int Primefactor(int n)
{

    for (int i = 2; i < n; i++)
    {

        if (Primefactor(i))
        {

            int x = i;
            while (n % x == 0)
            {
                 cout << i << endl;
                x = x * i;
            }

            // return i;
        }
         //cout << i << endl;
         //return 0;
    }

}



//     ****** Type-2 ********
bool primefactor(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }
    }
    if (n > 1)
        cout << n << endl;
}
//     ****** Type-3 ********

bool primefactorOPT(int n)
{

    if (n <= 1)
        return false;

    while (n == 2)
    {
        cout << 2;
        n = n / 2;
    }

    while (n = 3)
    {
        cout << 3;
        n = n / 3;
    }

    for (int i = 5; i * i <= n; i++)
    {

        while (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << endl;
            n = n / (i + 2);
        }
    }
    if (n > 3)
        cout << n<<endl;
}


// ************* LCM Of two number  **************
// ******* Method - 1 *************
// *** Note : It is Required modification
int LCMNum(int a, int b)
{

    int result = max(a, b);

    while (true)

        if (result % a == 0 && result % b == 0)

            return result;

    result++;

    // cout<<result<<endl;
    return result;
}

int main()
{

    int a, b, var;
    cout << "Enter the two  value : " << endl;
    cin >> a >> b;
    var = LCMNum(a, b);
    /*
    var = primefactor(n);
    int var1;
    var1=primefactorOPT(n);

    var = isPrime(n); // *** Calling funtion
    int var1;
    var1 = primeNum(n);
    int var3;
    var3 = PrimeNum3(n);
    int var4;
    var4 = primeNum4(n);



    // int var;
}


// ******* Method - 2 *************
class lcmNum
{
public:
    int gcd(int a, int b)
    {
        if (b == 0)
            return a;

        return gcd(b, a % b);
    }
    int lcm(int a, int b)
    {
        return (a * b) / gcd(a, b);
    }
};
int main()
{
    int a, b;
    cout << "Enter the two value : " << endl;
    cin >> a >> b;

    lcmNum obj;
    obj.gcd(a, b);

    cout << obj.lcm(a, b) << endl;
}

 /*

// *************** Divisors of a number ***********

//***** Methode -1 ************
int Divisor(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
    return 0;
}

//***** Methode -3 ************
// *** Note : It is Required modification


int Divisors(int n)
{

    int i;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
         //   cout << i << endl;
          return  i;
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            //cout << n / i << endl;
            return  n / i;
    }
    // return 0;
}

int main()
{

    int n;
    cout << "Enter the value : " << endl;
    cin >> n;
    int obj;
    obj = Divisor(n);
}


// *********** Find all prime number this given number
/// ******** Methode -1 ***********
// *** Note : It is Required modification

bool primeNum(int n)
{
    /// if (n == 1)
    //  return false;

    if (n == 1)
        return false;

    for (int i = 2; i <= n; i++)
    {
        if (n % 2 == 0)
            return false;
    }
    return true;

    for (int i = 2; i <= n; i++)
    {
        if (primeNum(i))

            cout << i << endl;
    }
}


int main()
{
    int n;
    cout << "Enter the value : " << endl;
    cin >> n;
    int var;

}
*/

// *************** Factors of a Number ****************
/*
void fun(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value "<<endl;
    cin>>n;
    fun(n);
    return 0;
}
*/

// *************** Find Perfect Number ****************
/*
void fun(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
              cout<< sum<<endl;
        }

    }
}

int main(){
    int n;
    cout<<"Enter the value "<<endl;
    cin>>n;
    fun(n);
    return 0;
}
*/

// *************** Display Of the Digit of Number  ****************
/*
void fun(int n)
{

    int rem;

    for (int i = 1; i <= n; i++)
    {
        if (n > 0)
            rem = n % 10;
        n = n / 10;
        cout << rem << endl;
    }

    // cout << res << endl;
}

int main()
{
    int n;
    cout << "Enter the value " << endl;
    cin >> n;
    fun(n);
    return 0;
}
*/
// *************** Reverse of Number  ****************

/*
void fun(int n)
{

    int rem;

    for (int i = 1; i <= n; i++)
    {
        int rev=0;
        if (n > 0)
            rem = n % 10;
        n = n / 10;
        rev=rev*10+rem;
        cout << rev << endl;
    }

    // cout << res << endl;
}

int main()
{
    int n;
    cout << "Enter the value " << endl;
    cin >> n;
    fun(n);
    return 0;
}

/*
// *************** Ammstrong of Digit  ****************
//  ***** Modify required

void fun(int n)
{

    int sum = 0, rem;
    for (int i = 1; i <= n; i++)
    {
        if (n > 0)
            rem = rem % 10;
        n = n / 10;
        sum = sum + rem * rem * rem;
       // cout<<sum<<endl;
    }
    if(sum=n)
     cout<<sum<<endl;
}

int main()
{
    int n;
    cout << "Enter the value " << endl;
    cin >> n;
    fun(n);
    return 0;
}
*/
/*
// *************** Prime Number  ****************

void fun(int n)
{

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        cout << "Its is Prime Number " << endl;
    else
        cout << "Its is Not Prime Number " << endl;
}
int main()
{
    int n;
    cout << "Enter the value " << endl;
    cin >> n;
    fun(n);
    return 0;
}
*/

// *************** Palindrome of Number ****************
//  ***** Modify required ***********
void fun(int n)
{
    int rem, rev = 0;

    do
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    } while (n != 0);

    if (n == rev)
    {
        cout << "Its is Palindrome " << endl;
    }

    else
        cout << "Its is Not Palindrome " << endl;
}

int main()
{
    int n;
    cout << "Enter the value " << endl;
    cin >> n;
    fun(n);
    return 0;
}