#include <bits/stdc++.h>
using namespace std;

//    C++ All Basic Concpet
/*
int main()
{



// int, long, long long, float, double
// string and getline
// char

string name;
cout << "Enter your name " << endl;
// cin>>name; // print Sourav
getline(cin, name); // print Sourav Saha(It is take entire line)

cout << "Name is : " << name << endl;


// Data Type

// int
int x=10;
//long
long x=15;

cin>>x;

long long x=32842941;



*/

//    *********** Problem -1 ***********
// Write a program that takes an input of age
// and prints if you are adult or not
//>=18, yes
//<18, no
/*
int age;
cout << "Enter your age " << endl;
cin >> age;

if (age < 18)
{
    cout << "You are not adult " << endl;
}
else if (age >= 18 && age < 60)
{
    cout << "You are adult " << endl;
}
else
{
    cout << "You are old " << endl;
}


*/

//    *********** Problem -1 ***********

/*



A School has following rules for grading system :

a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A

Ask user to enter marks and print the corresponding grade.

// <25 - F
// >=25 && <44 - E
// >=45 && <49 - D
// >=50 && <59 - C
// >=60 && <79 - B
// >=80 && <=100 -A





int marks;
cout << "Enter your marks " << endl;
cin >> marks;

if (marks < 25)
{
    cout << "Your Grade is F " << endl;
}
else if (marks <= 44)
{
    cout << "Your Grade is E " << endl;
}

else if (marks <= 49) // marks <=49
{
    cout << "Your Grade is D " << endl;
}

else if (marks <= 59)
{
    cout << "Your Grade is C" << endl;
}
else if (marks <= 79)
{
    cout << "Your Grade is B " << endl;
}
else if (marks <= 100)
{
    cout << "Your Grade is A " << endl;
}
else
{
    cout << " Invaild Your Marks " << endl;
}


*/

/*



Take the age from the user and then decide accordingly
1. If age < 18,
   print -> not eligible for job
2. If age >= 18,
   print -> eligible for job
3. If age >= 55 and age <=57,
   print -> eligible for job, but retirment soon
4. If age > 57,
   print ->retirment time



int age;
cout << "Enter your age " << endl;
cin >> age;

if (age < 18)
{
    cout << "Your not eligible for job " << endl;
}

if (age >= 18 && age < 55)
{
    cout << "Your eligible for job " << endl;
}
if (age >= 55 && age <= 57)
{
    cout << "Your eligible for job but you retirment soon" << endl;
}
if (age > 57)
{
    cout << "Your retirment time " << endl;
}



*/

/*



 // Task
'lesser' if n < m
'equal' if n == m
'greater' if n > m



int n, m;

cout << "Enter the value " << endl;
cin >> n >> m;

if (n < m)
{
    cout << "lesser" << endl;
}
else if (n == m)
{
    cout << "equal" << endl;
}

else if (n > m)
{
    cout << "greater" << endl;
}
*/

/*


   //  Task
   //  Take the day number and print the corresponding day
   //  for 1 print Monday,
   //   for 2 print Tuesday and so on for 7 print Sunday.

    cout << "1.Monday\n"
          << "2.Tuesday\n"
          << "3.Wednesday\n"
          << "4.Thusday\n"
          << "5.Friday\n"
          << "6.Saturday\n"
          << "7.Sunday\n";



   int day;
   cout << "Enter your day in no : " << endl;
   cin >> day;
   cout << "Today is : ";

   switch (day)
   {

   case 1:
       cout << "Monday" << endl;
       break;
   case 2:
       cout << "Tuesday" << endl;
       break;
   case 3:
       cout << "Wednesday" << endl;
       break;
   case 4:
       cout << "Thusday" << endl;
       break;
   case 5:
       cout << "Friday" << endl;
       break;
   case 6:
       cout << "Saturday" << endl;
       break;
   case 7:
       cout << "Sunday" << endl;
       break;

   default:
       cout << "Invaild Input " << endl;
       break;
   }




  */

/*


// Task

// Let R, L,B
// choice - 1, calculate the area of the circle and radius R
// choice - 2, calculate the area of the rectangle , length L and breadth B

// solution :

// Circle area is 3.14*r*r

// Rectangle area is L*B




double R, L, B, area;

int choice;

cout << "Enter your choice " << endl;
cin >> choice;

switch (choice)
{
case 1:

    cout << "Enter the Radius Value : " << endl;
    cin >> R;
    area = 3.14 * R * R;
    cout << area << endl;

    break;

case 2:
    cout << "Enter the Length and Breadth Value : " << endl;
    cin >> L >> B;
    area = L * B;
    cout << area << endl;

    break;

default:
    cout << "Invalid Choice " << endl;
    break;
}



*/

/*




 //            Array Basic Concept




// 1D Array

double arr[5], n = 5;
cout << "Enter your array element " << endl;
cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

arr[3] = 23; // it the replace the previous store value in array

cout << "Array Element is " << endl;

for (int i = 0; i < n; i++)
{
    cout << arr[i] << "\t";
}

// 2D Array

int arr[3][5];

arr[1][3] = 34;
cout << arr[1][3] << endl;



*/

/*



    //       String Basic Concept
    // It is store every character in terms of index number




    int n = 11;
    string s;

    cout << "Enter the Character type Value  " << endl;
    getline(cin, s);    // it means it is check every character in line including space
    int len = s.size(); // print length
    s[len - 1] = 'A';   // it is replace v to z ( Note : Because it is store charater in every index then use '')

    for (int i = 0; i < n; i++)
    {

        cout << s[i] << endl;
                // cout << s[len - 1];            // print  z
    }

return 0;
}

*/

/*




// Function Basic Concept

//  Function are set of code which performs something for you
//  Function are used to modularise code
//  Function are used to increase readability
//  Function are used to use same code multiple times

// Four type of function
// void  -> which does not return anything
// return
// parameterised
// non parameterised

void printName(string name)
{
    cout << "Hey " << name << " You are Welcome! " << endl;
}

int main()
{

    string name1;

    cout << "Enter your name " << endl;
    getline(cin, name1);
    printName(name1);

    string name2;
    cout << "Enter your name " << endl;
    getline(cin, name2);
    printName(name2);
}



*/

/*



// Task

// Take a two number and print its sum

int sumNum(int num1, int num2)
{
    int res = num1 + num2;
}

int main()
{
    int num1, num2;
    cout << "Enter the two value " << endl;
    cin >> num1 >> num2;
    int result = sumNum(num1, num2);

    cout << result << endl;
}


int Max(int num1, int num2)
{

    if (num1 >= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter the two value " << endl;
    cin >> num1 >> num2;

    int maxx = Max(num1, num2);
    cout << maxx << endl;
}





//   pass by reference

void dosomething(string &s)
{

    s[0] = 'd';

    cout << s << endl;
}

int main()
{

    string s = "Sourav";
    // int num =10;
    dosomething(s);
    cout << s << endl;
}





void dosomething(int arr[], int n)
{

    arr[0] += 100;
    cout << "Value inside function : " << arr[0] << endl;
}

int main()
{

    int n = 5;
    int arr[n];

    cout << "Enter the array element" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // i<n-1  means last element of array
    }

    dosomething(arr, n);

    cout << "Value inside int main : " << arr[0] << endl;
}





void dosomething(int &num)
{

    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{

    int num = 10;

    dosomething(num);

    cout << num << endl;
}





// Task

// a=1,b=2,   //input
// a=2, b=4,   //output

// logic

// a =a +1 , b = b+2,



 int passedBy(int a, int &b) {

        a = a+1;
        cout<<a<<endl;

        b= b+2;
        cout<<b<<endl;
//   another method      return {(a+1),(b+2)};

    }


int main(){

    int a,b;

    cout<<"Enter the value "<<endl;
    cin>>a>>b;

    passedBy(a,b);


    return 0;
}




//          Completed All Basic concept C++   (Lecture - 1)



*/

//      Time Complexcity and Space Complexity All Basic Concpet

//   It is a Three type :       1.Best Case  2.Worst Case  3.Average Case

//  Big(O) Notation      ->  is worst case (upper bond)
//  Theta() Notation     ->  Average Complexity
//  Omega() Notation     ->  Lower Bond

/*



int main()
{

    // Task

    int N;

    cout << "Enter the Value " << endl;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*"
                 << "\t "
                 << " "<<"*"
                 << endl;
        }

        cout << " * " << endl;
    }

    //  Time Complexity is O(N*N)
}




int main()
{

    int n;
    cout << "Enter the value " << endl;
    cin >> n;
   // cout << Pattern(n) << endl;
}




/*



//  Task
// Find Count Digit
// n =23, is not posible because  2 and 3, none of them divide 23 evenly

// logic

// n = n/10, // last digit remove
// count ++ // initial count =0
// repeat condition then use while loop

int fun(int n)
{
    int count = 0;
    int m = n;
    while (n > 0)
    {
        int a = n % 10; // remendar are store a

        if (a == 0)
        {
        }
        else if (m % a == 0)
        {
            count++;
        }
        n = n / 10;
    }
   return count;
}

int main()
{
    int n;
    cout << "Enter the value " << endl;
    cin >> n;

    fun(n);
}



*/


// task

// prime number

// logic
//  2,4, 6 ....            n %2 ==0 -> False and n %3 ==0 -> False and n ==1 -> False

// logic
// (x,y) are pair when x<=y, x*x<=n,   then i *i <=n
// condition   n % i ==0  -> False else -> True
// Time Complexity  -> O(root n)





void isPrime(int n)
{

    if (n == 1)
    {
        cout << "No" << endl;
        return;
    }
 
    for (int i = 2; i * i <= n; i++)
    { 

        if (n % i == 0)
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

int main()
{

    int n;
    cout << "Enter " << endl;
    cin >> n;

    isPrime(n);
}













