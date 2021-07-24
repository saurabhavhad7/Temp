#include <iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

class matrix{

public:

    int m1[2][2],m2[2][2],i,j;

    void get(){
    cout<<"\nEnter the elements in m1:";
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            cin>>m1[i][j];

    cout<<"\nEnter the elements in m2:";
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            cin>>m2[i][j];
    }

void addition(){
int r[i][j];
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
        r[i][j]=m1[i][j]+ m2[i][j];
//logic for print
    for(i=0;i<2;i++)
    {
        cout<<"\n";
        for(j=0;j<2;j++)
        {
            cout<<r[i][j]<<"\t";
        }
    }

}
void subtraction(){
int r[i][j];
for(i=0;i<2;i++)
    for(j=0;j<2;j++)

    r[i][j]=m1[i][j]-m2[i][j];
//logic for print
        for(i=0;i<2;i++){
            cout<<"\n";
            for(j=0;j<2;j++){
                    cout<<r[i][j]<<"\t";
            }
        }

}
void mult(){
int r[2][2];
int i,j,k;
    for(i=0;i<2;i++){

        for(j=0;j<2;j++){
                    r[i][j]=0;
            for(k=0;k<2;k++){
            r[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }

   //logic for print
    for(i=0;i<2;i++){
            cout<<"\n";
        for(j=0;j<2;j++){
            cout<<r[i][j]<<"\t";
        }
    }
}
};


int main()
{
    int i,j,ch;
    matrix t;
    t.get();


    do{
        cout<<"\n\n\t\t*****MENU****"<<"\n\n\t\t 1.Add"<<"\n\n\t\t 2.Sub"<<"\n\n\t\t 3.Multiplication"<<"\n\n\t\t4.Exit";
        cout<<"\nEnter the your choice: ";
        cin>>ch;
        switch (ch){
                case 1:t.addition();
                break;

                case 2:t.subtraction();
                break;

                case 3:t.mult();
                break;

                case 4:
                exit(0);

                default:
                cout<<"\nInvalid choice...";

        }
    }while(1);
    return 0;
}

/*
void display(){

    cout<<"\n the elements in m1:\t";
    for(i=0;i<2;i++)
        cout<<"\n";
        for(j=0;j<2;j++)
            cout<<m1[i][j];

    cout<<"\n the elements in m2:\t";
    for(i=0;i<2;i++)
        cout<<"\n";
        for(j=0;j<2;j++)
            cout<<m2[i][j];
    }*/
**************output***************

Enter the elements in m1:1
2
3
4

Enter the elements in m2:5
6
7
8


                *****MENU****

                 1.Add

                 2.Sub

                 3.Multiplication

                4.Exit
Enter the your choice: 1

6       8
10      12

                *****MENU****

                 1.Add

                 2.Sub

                 3.Multiplication

                4.Exit
Enter the your choice: 2

-4      -4
-4      -4

                *****MENU****

                 1.Add

                 2.Sub

                 3.Multiplication

                4.Exit
Enter the your choice: 3

19      22
43      50

                *****MENU****

                 1.Add

                 2.Sub

                 3.Multiplication

                4.Exit
Enter the your choice: 4

Process returned 0 (0x0)   execution time : 15.136 s
Press any key to continue.
