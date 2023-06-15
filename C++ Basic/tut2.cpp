#include <bits/stdc++.h>
using namespace std;

// Patterns All Basic concept

// It means Nested loops

//  Step for solve problem

//  For the outer loop, count the number of lines
//  For the inner loop, focus of the column,and connect them somehow to the rows
//  Print the " * " inside the inner for loop
//  Observed symmetry (optional)

//  Patterns All Problem

/*


                          // Task - 1

                             * * * * *
                             * * * * *
                             * * * * *
                             * * * * *
                             * * * * *




int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}



*/

/*


                            // Task - 2


                               *
                               * *
                               * * *
                               * * * *
                               * * * * *






                            //  Method - 1

int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}



                             //  Method - 2

int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            if (i >= j)
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}




*/

/*


                        //  Type - 3

                            1
                            1 2
                            1 2 3
                            1 2 3 4
                            1 2 3 4 5

int Pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
           cout<< j<<" ";
        }

        cout << endl;
    }
}



*/

/*



                       // Type - 4


                          1 2 3 4
                           2 3 4
                            3 4
                             4




int Pattern(int n)
{

    for (int i = 1; i <n; i++)
    {

        for (int j = 1; j <n; j++)
        {
            if (j >= i)
            {
                 cout << j << " ";
            }
            else
            {
                cout<<" ";
            }
        }

        cout << endl;
    }
}


*/

/*


                        // Type - 4


                           1234
                            234
                             34
                              4



int Pattern(int n)
{

    for (int i = 1; i <n; i++)
    {

        for (int j = 1; j <n; j++)
        {
            if (j >= i)
            {
                 cout << j ;
            }
            else
            {
                cout<<" ";
            }
        }

        cout << endl;
    }
}


*/

/*




                     // Type - 5



                        1
                         2
                          3
                           4
                            5





int Pattern(int n)
{

    for (int i = 1; i <=n; i++)
    {

        for (int j = 1; j <=i; j++)
        {
            if (j >= i)
            {
                 cout << j ;
            }
            else
            {
                cout<<" ";
            }
        }

        cout << endl;
    }
}


*/

/*



                    // Type - 6


                       1
                       2 2
                       3 3 3
                       4 4 4 4
                       5 5 5 5 5



int Pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
           cout<< i<<" ";
        }

        cout << endl;
    }
}


*/

/*

                   //  Type - 7



                       1
                       2 2
                       3 3 3
                       4 4 4 4
                       5 5 5 5 5




int Pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
           cout<< i<<" ";
        }

        cout << endl;
    }
}



*/

/*

                       //  Type - 8


                           * * * * *
                           * * * *
                           * * *
                           * *
                           *


int Pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j <n-i+1; j++)
        {
           cout<< " *";
        }

        cout << endl;
    }
}


*/

/*
                  // Type - 9



                     1 2 3 4 5
                     1 2 3 4
                     1 2 3
                     1 2
                     1





int Pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}



*/

/*

                     // Type - 10



                        1 2 3 4 5
                         2 3 4 5
                          3 4 5
                           4 5
                            5





int Pattern(int n)
{

    for (int i = 1; i <=n; i++)
    {

        for (int j = 1; j <=n; j++)
        {
            if (j >= i)
            {
                 cout << j << " ";
            }
            else
            {
                cout<<" ";
            }
        }

        cout << endl;
    }
}


*/

/*




                // Type - 11


                   * * * * *
                    * * * *
                     * * *
                      * *
                       *






int Pattern(int n)
{

    for (int i = 1; i <=n; i++)
    {

        for (int j = 1; j <=n; j++)
        {
            if (j >= i)
            {
                 cout <<  "* ";
            }
            else
            {
                cout<<" ";
            }
        }

        cout << endl;
    }
}


*/

/*



                   // Type - 12



                        *
                       ***
                      *****
                     *******
                    *********




int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {
// space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
// star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
// space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}




*/

/*



                   // Type - 13


                      *********
                       *******
                        *****
                         ***
                          *


int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}


*/

/*

                        // Type - 14



                           *
                           * *
                           * * *
                           * * * *
                           * * * * *
                           * * * *
                           * * *
                           * *
                           *



//logic
observed symmetry this pattern
outer loop, row = 9, // 2 * n -1
inner loop,

// next step break the symmetry
// formula 2 * n -1 = stars



int Pattern(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {

        int stars = i;

        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}



*/

/*


                   // Type - 15


                      1
                      0 1
                      1 0 1
                      0 1 0 1
                      1 0 1 0 1




int Pattern(int n)
{

    int start = 1;

    for (int i = 0; i <n; i++)
    {

        if (i % 2 == 0) // means even row start is 1
            start = 1;
        else
            start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start<<" ";     // print 1
            start = 1 - start; // it means flip line , print 0
        }

        cout << endl;
    }
}


*/

/*



                   // Type - 16



                       1         1
                       1 2       2 1
                       1 2 3     3 2 1
                       1 2 3 4   4 3 2 1
                       1 2 3 4 5 5 4 3 2 1



//  logic

// [number , space , number]
// [ 1, 6, 1]
// [2, 4, 2]
// [3, 2 , 3]
// [4, 0 , 4]

int Pattern(int n)
{

    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {

        // numbers

        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // numbers

        for (int j = i; j >=1; j--)
        {
            cout << j<<" ";
        }
        cout << endl;
        space -= 2;
    }
}


*/

/*



                // Type - 17


                   1
                   2 3
                   4 5 6
                   7 8 9 10
                   11 12 13 14 15









int Pattern(int n)
{

    int num = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << num << " ";
            num = num + 1;
        }

        cout << endl;
    }
}


*/

/*


                    //  Type - 18



                        A B
                        A B C
                        A B C D
                        A B C D E
                        A B C D E F



// logic
//  'A' ,  ' A+ 2 ' means 'C'

int Pattern(int n)
{

    // i =2

    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {

            cout << ch << " ";
        }

        cout << endl;
    }
}


*/

/*


                    //  Type - 19


                        A B C D
                        A B C
                        A B
                        A



int Pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}


*/

/*


                            //  Type - 20


                                A
                                B B
                                C C C
                                D D D D
                                E E E E E


int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}


*/

/*


                    // Type - 21



                           A
                          ABA
                         ABCBA
                        ABCDCBA





// logic
// space = n- i -1

int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // character

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;

            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // space

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}


*/

/*



                    //  Type - 22


                        E
                        D E
                        C D E
                        B C D E
                        A B C D E




int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }

    cout << endl;
    }

}

*/

/*

                    // Type - 23



                       **********
                       ****  ****
                       ***    ***
                       **      **
                       *        *



// logic

// n = 5
//      [stars , space , stars]
//      [n - i , 0 + 2 , n - i ]
// 0 -> [5 , 0 ,5]
// 1 -> [4 , 2 , 4]
// 2 -> [3 , 4 , 3]
// 3 -> [2 , 6 , 2]
// 4 -> [1 , 8 , 1]

int Pattern(int n)
{
    int intS = 0;
    for (int i = 0; i < n; i++)
    {

        // stars

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // spaces

        for (int j = 0; j < intS; j++)
        {
            cout << " ";
        }

        // stars

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        intS += 2;

        cout << endl;
    }
}


*/

/*




                    // Type -24



                       **********
                       ****  ****
                       ***    ***
                       **      **
                       *        *
                       *        *
                       **      **
                       ***    ***
                       ****  ****
                       **********






int Pattern(int n)
{
    int intS = 0;
    for (int i = 0; i < n; i++)
    {

        // stars

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // spaces

        for (int j = 0; j < intS; j++)
        {
            cout << " ";
        }

        // stars

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        intS += 2;

        cout << endl;
    }

    intS = 8;
    for (int i = 1; i <= n; i++)
    {

        // stars

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // spaces

        for (int j = 0; j < intS; j++)
        {
            cout << " ";
        }

        // stars

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        intS -= 2;
        cout << endl;
    }
}




*/

/*

                      // Type - 25




                          ***
                          ******
                          *********
                          ************
                          ***************
                          ************
                          *********
                          ******
                          ***



int Pattern(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        // stars

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // spaces

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // stars

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

*/

/*


                      // Type - 26


                         *        *
                         **      **
                         ***    ***
                         ****  ****
                         **********
                         ****  ****
                         ***    ***
                         **      **
                         *        *


int Pattern(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        // stars

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // spaces

        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // stars

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}


*/

/*


                      // Type - 27



                          *****
                          *   *
                          *   *
                          *   *
                          *****

int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }
}


*/

/*

                      // Type -28


                         4444444
                         4333334
                         4322234
                         4321234
                         4322234
                         4333334
                         4444444



int Pattern(int n)
{

    for (int i = 0; i < 2 * n - 1; i++)
    {

        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}


*/

/*
                      //  Type - 29


                           *
                          * *
                         * * *
                        * * * *
                       * * * * *
                       * * * * *
                        * * * *
                         * * *
                          * *
                           *


int Pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}
*/

/*
                     //  Type - 30

                         A
                         A B
                         A B C
                         A B C D
                         A B C D E



int Pattern(int n)
{

    // i =2

    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {

            cout << ch ;
        }

        cout << endl;
    }
}



*/

/*


                    // Type - 31


                       A B C D E
                       A B C D
                       A B C
                       A B
                       A




int Pattern(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch ;
        }

        cout << endl;
    }
}


*/

/*

                     // Type - 32


                        E
                        E D
                        E D C
                        E D C B
                        E D C B A




*/

int Pattern(int n)
{

    // i =2

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 0; j <= i; j++)
        {

            cout << ch << " ";
            ch--;
        }

        cout << endl;
    }
}


int main()
{

    int n;
    cout << "Enter the value " << endl;
    cin >> n;

    //  cout << Pattern(n) << endl;



}