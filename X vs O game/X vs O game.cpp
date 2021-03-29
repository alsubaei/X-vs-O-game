//X vs O game
//created by Manal Hassn Ahmed Al_subaei
//IS2 _ AM
//ID = 19_0017
//Please run it in Widows 7
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
char array[3][3]={'1','2','3','4','5','6','7','8','9'}, n=' ',p[2]={' '},x=' ';
static int s=0,f=0,number=0;
static string name1="",name2="";
void hello();
void begin();
void frame();
void player();
char instead(char &x);
void combare();
void end();
void choice();
int main()
{
  hello();
  return 0;
}
void hello()
{
    system("color 5e");
    cout<<"\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n\n";
    cout<<"*   *   *  ******   *        *****    *****    *       *                      \n";
    cout<<"*  * *  *  *        *       *        *     *   **     **        *             \n";
    cout<<"* *   * *  ******   *      *        *       *  * *   * *       ***    ****    \n";
    cout<<"**     **  *        *       *        *     *   *  * *  *        *    *    *   \n";
    cout<<"*       *  ******   ******   *****    *****    *   *   *        ***   ****    \n\n\n";

    cout<<"   \1   \1          \2\2\2\2        ******      *      *       *  ****** \n";
    cout<<"    \1 \1          \2    \2      *           * *     **     **  *      \n";
    cout<<"     \1   #   #  \2      \2    *    ***    *****    * *   * *  ****** \n";
    cout<<"    \1 \1   # #    \2    \2      *   * *   *     *   *  * *  *  *      \n";
    cout<<"   \1   \1   #      \2\2\2\2        ******  *       *  *   *   *  ****** \n\n";
    cout<<"\n\n\n\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n";
    _sleep(3000);
    system("cls");
    begin();
}
void begin()
{
    cout<<"\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n";
    cout<<"Enter your first name: ";
    cin>>name1;
    cout<<"Enter number one to (X).\nEnter number two to (O).\n(";
    n=getche();
    cout<<")\nAnother one Enter your first name: ";
    cin>>name2;
    if(n=='1')
        {cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t";
         cout<<name1<<" is X.\t\t"<<endl<<"\t\t\t";
        cout<<name2<<" is O.\t\t"<<endl;}
    else if(n=='2')
        {cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t";
         cout<<name1<<" is O.\t\t"<<endl<<"\t\t\t";
         cout<<name2<<" is X.\t\t"<<endl;}
    else
        {while(n!='1'||n!='2')
            {cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t";
            cout<<"\nERROR \nagain from the beginning.\n Enter number one to (X).\n Enter number two to (O).\n\n\n"<<endl;
            cout<<"Enter your first name: ";
            cin>>name1;
            cout<<"Enter number one to (X).\nEnter number two to (O).\n(";
            n=getche();
            cout<<")\nAnother one Enter your first name: ";
            cin>>name2;
            if(n=='1')
                {cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t";
                cout<<name1<<" is X.\t\t"<<endl<<"\t\t\t";
                cout<<name2<<" is O.\t\t"<<endl;
                break;
               }
            else if(n=='2')
                {cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t";
                 cout<<name1<<" is O.\t\t"<<endl<<"\t\t\t";
                 cout<<name2<<" is X.\t\t"<<endl;
                 break;
                 }
            }}

    cout<<"\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n";
    _sleep(1000);
    system("cls");
    cout<<"\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n";
    cout<<"\n\nWhich one will play First (X) or (O)?\n";
    p[0]=getche();
    p[0]=toupper(p[0]);
    if(p[0]=='X')
        p[1]='O';
    else
        p[1]='X';
    if(p[0]=='X'||p[0]=='O')
    {
        cout<<endl;
        frame();
    }
    else
        {while(p[0]!='X'||p[0]!='O')
          {
              cout<<"\nERROR\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------Enter (X) or (O):";
              p[0]=getche();
              p[0]=toupper(p[0]);
              if(p[0]=='X')
              p[1]='O';
              p[1]='X';
              cout<<endl;
              if(p[0]=='X'||p[0]=='O')
                  {
                    cout<<endl;
                    frame();
                    break;
                  }
          }
        }
}
void frame()
{
    if(f==1)
         system("color 5e");
    else
    {_sleep(1000);
    system("cls");
    system("color 0d");
    cout<<"\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n";
    cout<<"_________________________________________________"<<endl;
    cout<<"|\t\t|\t\t|\t\t|"<<endl;
    cout<<"|"<<"\t"<<array[0][0]<<"       |"<<"\t"<<array[0][1]<<"       |"<<"\t"<<array[0][2]<<"       |"<<endl;
    cout<<"|\t\t|\t\t|\t\t|"<<endl;
    cout<<"|_______________|_______________|_______________|"<<endl;
    cout<<"|\t\t|\t\t|\t\t|"<<endl;
    cout<<"|"<<"\t"<<array[1][0]<<"       |"<<"\t"<<array[1][1]<<"       |"<<"\t"<<array[1][2]<<"       |"<<endl;
    cout<<"|\t\t|\t\t|\t\t|"<<endl;
    cout<<"|_______________|_______________|_______________|"<<endl;
    cout<<"|\t\t|\t\t|\t\t|"<<endl;
    cout<<"|"<<"\t"<<array[2][0]<<"       |"<<"\t"<<array[2][1]<<"       |"<<"\t"<<array[2][2]<<"       |";
    cout<<endl;
    cout<<"|_______________|_______________|_______________|"<<endl;
    player();}
}
void player()
{
            if(s%2==0)
            {
                if(s>4)
                    {
                        combare();
                    }
                if(s<9&&f==0)
                {
                cout<<endl<<" << "<<p[0]<<" >> \nEnter the number of the square: ";
                cin>>x;
                s++;
                instead(x);
                }
            }
            else
            {
                if(s>4)
                    {
                        combare();
                    }
                if(s<9&&f==0)
                {system("color 0b");
                cout<<endl<<" << "<<p[1]<<" >> \nEnter the number of the square: ";
                cin>>x;
                s++;
              instead(x);}
            }
}
char instead(char &x)
{
    for(int i=0; i<3; i++)
    {
         for(int j=0; j<3; j++)
          {
            if(array[i][j]==x)
                    {if (s%2==0)
                       {
                        array[i][j]=p[1];
                        break;
                       }
                   else
                       {
                        array[i][j]=p[0];
                        break;
                       }
                   }
          }
    }
    frame();
}
void combare()
{
            if(array [0][0]==array [0][1]&&array [0][1]==array [0][2])
            {system("color 5e");
                f=1;
                cout<<"\n\n\t\t";
                if (s%2==0)
                {
                    cout<<p[1]<<" is win."<<endl;
                }
                else
                    cout<<p[0]<<" is win."<<endl;
                end();
            }
             else if(array [1][0]==array [1][1]&&array [1][1]==array [1][2])
            {system("color 5e");
                f=1;
                cout<<"\n\n\t\t";
                if (s%2==0)
                {
                    cout<<p[1]<<" is win."<<endl;
                }
                else
                    cout<<p[0]<<" is win."<<endl;
                end();
            }
             else if(array [2][0]==array [2][1]&&array [2][1]==array [2][2])
            {system("color 5e");
                f=1;
                cout<<"\n\n\t\t";
                if (s%2==0)
                {
                    cout<<p[1]<<" is win."<<endl;
                }
                else
                    cout<<p[0]<<" is win."<<endl;
                end();
            }
             else if(array [0][0]==array [1][0]&&array [1][0]==array [2][0])
            {system("color 5e");
                f=1;
                cout<<"\n\n\t\t";
                if (s%2==0)
                {
                    cout<<p[1]<<" is win."<<endl;
                }
                else
                    cout<<p[0]<<" is win."<<endl;
                end();
            }
            else if(array [0][1]==array [1][1]&&array [1][1]==array [2][1])
            {system("color 5e");
                f=1;
                cout<<"\n\n\t\t";
                if (s%2==0)
                {
                    cout<<p[1]<<" is win."<<endl;
                }
                else
                    cout<<p[0]<<" is win."<<endl;
                end();
            }
             else if(array [0][2]==array [1][2]&&array [1][2]==array [2][2])
            {system("color 5e");
                f=1;
                cout<<"\n\n\t\t";
                if (s%2==0)
                {
                    cout<<p[1]<<" is win."<<endl;
                }
                else
                    cout<<p[0]<<" is win."<<endl;
                end();
            }
             else if(array [0][0]==array [1][1]&&array [1][1]==array [2][2])
            {system("color 5e");
                f=1;
                cout<<"\n\n\t\t";
                if (s%2==0)
                {
                    cout<<p[1]<<" is win."<<endl;
                }
                else
                    cout<<p[0]<<" is win."<<endl;
                end();
            }
             else if(array [0][2]==array [1][1]&&array [1][1]==array [2][0])
            {system("color 5e");
                f=1;
                cout<<"\n\n\t\t";
                if (s%2==0)
                {
                    cout<<p[1]<<" is win."<<endl;
                }
                else
                    cout<<p[0]<<" is win."<<endl;
                end();
            }
            else if (s==9)
                {
                system("color 5e");
                f=1;
                cout<<"\n\n\t\t";
                cout<<"No one win.";
                choice();
            }
}
void end()
{
    _sleep(1900);
    system("cls");
    system("color 5e");
    cout<<"\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n";
    cout<<"\n\n\n\n\t\t*****  *   *  ******      \n";
    cout<<"\t\t*      **  *  *     *     \n";
    cout<<"\t\t*****  * * *  *      *    \n";
    cout<<"\t\t*      *  **  *     *     \n";
    cout<<"\t\t*****  *   *  ******      \n\n\n\n\n\n";
    cout<<"\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n";
    choice();
}
void choice()
{
    _sleep(2000);
    system("cls");
    cout<<"\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n";
    cout<<"Enter number (1) to play again.\nEnter any number to end the game.\n\n";
    cin>>number;
    if (number==1)
        {
            s=0,f=0;
            name1="",name2="";
            n=' ', p[2]={' '}, x=' ';
            for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                        {
                             if(i==0&&j==0) array[i][j]='1';
                        else if(i==0&&j==1) array[i][j]='2';
                        else if(i==0&&j==2) array[i][j]='3';
                        else if(i==1&&j==0) array[i][j]='4';
                        else if(i==1&&j==1) array[i][j]='5';
                        else if(i==1&&j==2) array[i][j]='6';
                        else if(i==2&&j==0) array[i][j]='7';
                        else if(i==2&&j==1) array[i][j]='8';
                        else if(i==2&&j==2) array[i][j]='9';
                        }
                }
            system("cls");
            begin();

        }
    else
         {
             _sleep(3000);
            system("cls");
            system("color 4f");
            cout<<"\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n";
            cout<<"\n\nthis game written by:\n\n\t\t\t Manal Al_subaei\n\n\n\t\t\t Information System (IS)\n\n\n\t\t\t AM_2\n\n\n\n";
            cout<<"\n\n\n\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n";
            }
}
