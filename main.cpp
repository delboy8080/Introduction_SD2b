#include <iostream>
#include <iomanip>
using namespace std;
void question1();
void question2();
void question3();
void question4();
void question5();
void question10();
int main() {
    question10();
    return 0;
}

void question1()
{
    string first, last;
    cout << "First Name:"<<endl;
    getline(cin, first);
    cout << "Last Name: "<<endl;
    getline(cin, last);
    cout << "Output: " << last <<", " << first <<endl;

}

void question2()
{
    int age;
    cout << "Please enter your age: " <<endl;
    cin >> age;
    if(age < 18)
    {
        cout << "Child."<<endl;
    }
    else if(age <= 65)
    {
        cout << "Adult. ";
    }
    else
    {
        cout << "OAP.";
    }
}

void question3()
{
    int choice;
    do
    {
        cout << "1. Question 1" << endl;
        cout << "2. Question 2" << endl;
        cout << "3. exit" << endl;
        cin >> choice;
        cin.ignore(10000, '\n');
        switch (choice)
        {
            case 1:
                question1();
                break;
            case 2:
                question2();
                break;
            case 3:
                cout << "Thank you and goodbye!"<<endl;
                break;
            default:
                cout <<"invalid input. please try again." <<endl;

        }
    }while(choice !=3);
}
void question4()
{
    for(int i = 1; i <=10;i++)
    {
        cout <<left<< setw(4) << i << " * " << setw(4)
        << i << " = " <<setw(4)<< (i*i) <<endl;
    }
}

void question5()
{
    for(int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout <<"\n\n\n\n" << endl;
    for(int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 10; c++)
        {
            cout << "*";
        }
        cout << endl;
    }

    int height = 10;
    for(int r = 1; r <= height; r++)
    {
        for(int c = 0; c < height-r;c++ )
        {
            cout << ' ';
        }
        for(int c = 0; c < (r*2)-1;c++ )
        {
            cout << '*';
        }
        cout << endl;
    }
}

void frame(string str)
{
    string::size_type len = str.size();
    string stars(len+4, '*');
    cout << stars <<endl;
    cout << "* " << str << " *" <<endl;
    cout << stars <<endl;

}
void frame(string str[], int size)
{
    string::size_type max = str[0].size();
    for(int i = 1; i < size;i++)
    {
        if(str[i].size() > max)
        {
            max = str[i].size();
        }
    }
    string stars(max+4, '*');
    cout << stars <<endl;
    for(int i = 0; i < size;i++)
    {
        string sp(max - str[i].length(), ' ');
        cout << "* " << sp<< str[i] << " *" << endl;
    }cout << stars <<endl;

}
void question10()
{
    frame("Tony Stark is Ironman");
    string lines[3] = {"Tony Stark", "is the superhero", "Iron man"};
    frame(lines, 3);
}