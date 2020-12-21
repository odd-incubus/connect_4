#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,k,a[8][9],o,l,one=0,two=0, coun=0,b=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<9;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)
        {
            cout<<"|"<<a[i][j]<<"|\t";
        }

        cout<<"\n\n\n";
    }
    cout<<"\n";
    for(coun=1;coun<8;coun++)
    {
        cout<<coun<<"\t ";
    }
    cout<<"\n\nLET'S PLAY!\n\n";
    k=1;
    while(k>0)
    {
        if(k%2!=0)
        {
            cout<<"Player 1, its your turn!:\n\n";
            cin>>o;
            while(o<1 || o>7)
            {
                cout<<"\n\nOOPS INVALID ENTRY BY PLAYER 1! ENTER SOMETHING BETWEEN 1 & 7!\n";
                cin>>o;
                if(o>0 && o<8)
                    break;
            }
            while(a[0][o-1]==11 ||a[0][o-1]==22)
            {
                cout<<"\n\nOOPS THIS ROW IS FULL! PLAYER 1 TRY AGAIN!\n";
                cin>>o;
            }
            for(i=5;i>=0;i--)
            {
               if(a[i][o-1]==0)
                {
                        a[i][o-1]=11;
                        break;
                }
            }
            //checking for the 4 points
            l=o-1;

            //FOR TOP LEFT
            if(a[i-1][l-1]==11 && a[i+1][l+1]!=11)
            {
                if(a[i-2][l-2]==11 && a[i-3][l-3]==11)
                {
                    one=1;
                }
            }

            //FOR TOP LEFT AND BOTTOM RIGHT
            if(a[i-1][l-1]==11 && a[i+1][l+1]==11)
            {
                if(a[i-2][l-2]==11 || a[i+2][l+2]==11)
                {
                    one=1;
                }
            }

            //FOR BOTTOM RIGHT
            if(a[i-1][l-1]!=11 && a[i+1][l+1]==11)
            {
                if(a[i+2][l+2]==11 && a[i+3][l+3]==11)
                {
                    one=1;
                }
            }

            //FOR TOP RIGHT
            if(a[i-1][l+1]==11 && a[i+1][l-1]!=11)
            {
                if(a[i-2][l+2]==11 && a[i-3][l+3]==11)
                {
                    one=1;
                }
            }

            //FOR TOP RIGHT AND BOTTOM LEFT
            if(a[i-1][l+1]==11 && a[i+1][l-1]==11)
            {
                if(a[i+2][l-2]==11 || a[i-2][l+2]==11)
                {
                    one=1;
                }
            }

            //FOR BOTTOM LEFT
            if(a[i-1][l+1]!=11 && a[i+1][l-1]==11)
            {
                if(a[i+2][l-2]==11 && a[i+3][l-3]==11)
                {
                    one=1;
                }
            }

            //FOR TOP
            if (a[i-1][l]==11 && a[i+1][l]!=11)
            {
                if(a[i-2][l]==11 && a[i-3][l]==11)
                {
                    one=1;
                }
            }

            //FOR TOP AND BOTTOM
            if (a[i-1][l]==11 && a[i+1][l]==11)
            {
                if(a[i-2][l]==11 || a[i+2][l]==11)
                {
                    one=1;
                }
            }
            //FOR BOTTOM
            if (a[i-1][l]!=11 && a[i+1][l]==11)
            {
                if(a[i+2][l]==11 && a[i+3][l]==11)
                {
                    one=1;
                }
            }

            //FOR RIGHT
            if(a[i][l+1]==11 && a[i][l-1]!=11)
            {
                if (a[i][l+2]==11 && a[i][l+3]==11)
                {
                    one=1;
                }
            }

            //FOR RIGHT AND LEFT
            if(a[i][l+1]==11 && a[i][l-1]==11)
            {
                if (a[i][l+2]==11 || a[i][l-2]==11)
                {
                    one=1;
                }
            }

            //FOR LEFT
            if(a[i][l+1]!=11 && a[i][l-1]==11)
            {
                if (a[i][l-2]==11 && a[i][l-3]==11)
                {
                    one=1;
                }
            }
        }

        else if(k%2==0)
        {
            cout<<"Player 2, its your turn!:\n\n";
            cin>>o;
            while(o<1 || o>7)
            {
                cout<<"\n\nOOPS INVALID ENTRY BY PLAYER 2! ENTER SOMETHING BETWEEN 1 & 7!\n";
                cin>>o;
                if(o>0 && o<8)
                    break;
            }
            while(a[0][o-1]==11 ||a[0][o-1]==22)
            {
                cout<<"\n\nOOPS THIS ROW IS FULL! PLAYER 2 TRY AGAIN!\n";
                cin>>o;
            }
            for(i=5;i>=0;i--)
            {
                if(a[i][o-1]==0)
                {
                    a[i][o-1]=22;
                    break;
                }
            }
            //checking for the 4 points
            l=o-1;

            //FOR TOP LEFT
            if(a[i-1][l-1]==22 && a[i+1][l+1]!=22)
            {
                if(a[i-2][l-2]==22 && a[i-3][l-3]==22)
                {
                    two=1;
                }
            }

            //FOR TOP LEFT AND BOTTOM RIGHT
            if(a[i-1][l-1]==22 && a[i+1][l+1]==22)
            {
                if(a[i-2][l-2]==22 || a[i+2][l+2]==22)
                {
                    two=1;
                }
            }

            //FOR BOTTOM RIGHT
            if(a[i-1][l-1]!=22 && a[i+1][l+1]==22)
            {
                if(a[i+2][l+2]==22 && a[i+3][l+3]==22)
                {
                    two=1;
                }
            }

            //FOR TOP RIGHT
            if(a[i-1][l+1]==22 && a[i+1][l-1]!=22)
            {
                if(a[i-2][l+2]==22 && a[i-3][l+3]==22)
                {
                    two=1;
                }
            }

            //FOR TOP RIGHT AND BOTTOM LEFT
            if(a[i-1][l+1]==22 && a[i+1][l-1]==22)
            {
                if(a[i+2][l-2]==22 || a[i-2][l+2]==22)
                {
                    two=1;
                }
            }

            //FOR BOTTOM LEFT
            if(a[i-1][l+1]!=22 && a[i+1][l-1]==22)
            {
                if(a[i+2][l-2]==22 && a[i+3][l-3]==22)
                {
                    two=1;
                }
            }

            //FOR TOP
            if (a[i-1][l]==22 && a[i+1][l]!=22)
            {
                if(a[i-2][l]==22 && a[i-3][l]==22)
                {
                    two=1;
                }
            }

            //FOR TOP AND BOTTOM
            if (a[i-1][l]==22 && a[i+1][l]==22)
            {
                if(a[i-2][l]==22 || a[i+2][l]==22)
                {
                    two=1;
                }
            }
            //FOR BOTTOM
            if (a[i-1][l]!=22 && a[i+1][l]==22)
            {
                if(a[i+2][l]==22 && a[i+3][l]==22)
                {
                    two=1;
                }
            }

            //FOR RIGHT
            if(a[i][l+1]==22 && a[i][l-1]!=22)
            {
                if (a[i][l+2]==22 && a[i][l+3]==22)
                {
                    two=1;
                }
            }

            //FOR RIGHT AND LEFT
            if(a[i][l+1]==22 && a[i][l-1]==22)
            {
                if (a[i][l+2]==22 || a[i][l-2]==22)
                {
                    two=1;
                }
            }

            //FOR LEFT
            if(a[i][l+1]!=22 && a[i][l-1]==22)
            {
                if (a[i][l-2]==22 && a[i][l-3]==22)
                {
                    two=1;
                }
            }

        }
        k++;
        system("CLS");
        for(i=0;i<6;i++)
        {
            for(j=0;j<7;j++)


            {
                cout<<"|"<<a[i][j]<<"|\t";
            }
            cout<<"\n\n";
        }
        cout<<"\n";
        for(coun=1;coun<8;coun++)
        {
        cout<<coun;
        cout<<"\t  ";
        }

        //WINNING STATEMENTS
        if(one==1)
        {
            cout<<"\n\n\t\t\tPLAYER 1 YOU WIN!!";
            getch();
            exit(0);
        }
        if(two==1)
        {
            cout<<"\n\n\t\t\tPLAYER 2 YOU WIN!!";
            getch();
            exit(0);
        }
        cout<<"\n";
        b++;

        //DRAW STATEMENT!
        if(b==42)
        {
            cout<<" \n\nOH NO! ITS A DRAW!";
            exit(0);
        }
    }


}
