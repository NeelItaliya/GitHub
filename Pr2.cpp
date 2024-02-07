#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

struct Employee
{

    long int id, x; 
    char qul[20], exp[202];
    string name;
    long long num;
    public:
    void in()
    {
        cout << "Enter the ID of employee : ";
        cin >> id;
        cout << "Enter the name of employee : ";
        cin >> name;
        cout << "Enter the qualification  of employee : ";
        cin >> qul;
        cout << "Enter the experience of employee : ";
        cin >> exp;
        cout << "Enter the contact number of employee : ";
        cin >> num;
        cout<<endl;
    }

    bool display(int x)
    {
        if (id == x)
        {
            cout <<  endl;
            cout << "Employee Name" <<  setw(15) << " : " << name << endl;
            cout << "Qualification" << setw(15) << " : " << qul << endl;
            cout << "Experience" << setw(18) << " : " << exp << endl;
            cout << "Contact Number" << setw(15) << " : " << num << endl;
            cout <<  endl;
            return true;
        }

        else
            return false;
        
    }
};

int main()
{
    struct Employee e[1000];
    int n, i, l=0;
    char ch;
    long int x;

    cout << "Enter the number of employee : ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        e[i].in();
    }

    do
    {
        cout << "Enter the ID of employee : ";
        cin >> x;

        for (int i = 0; i < n; i++)
        {
            if (e[i].display(x) == true){
                break;}
            
        
           else
           { 
            cout<< endl;
            cout << "ERROR : ENTERED EMPLOYEE ID DOES NOT EXIST" << endl;
            cout << endl;

           }
        
        }
        

        
        cout << "Press Y to get another employee detail, Press N to exit : ";
        cin >> ch;
    } while (ch == 'Y');

    return 0;
    
}