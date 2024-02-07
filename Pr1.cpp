#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
string mark(int );
int grade(int );
int main()
{
    char name[15];
    string stu_ID;
    int semester,mark_the1,mark_the2,mark_the3,mark_pra1,mark_pra2,mark_pra3,CCPT,BEET,PYT,CCPP,BEEP,PYP,sgpa;
    cout<<"Enter Student ID : "<<endl;
    cin>>stu_ID;
    cout<<"Enter Student Name : "<<endl;
    cin>>name;
    cout<<"Enter a Semester (1 to 8) : "<<endl;
    cin>>semester;
    cout<<"Enter a CCP Theory mark : "<<endl;
    cin>>mark_the1;
    cout<<"Enter a BEE Theory mark : "<<endl;
    cin>>mark_the2;
    cout<<"Enter a PY Theory mark : "<<endl;
    cin>>mark_the3;
    cout<<"Enter a CCP Practical mark : "<<endl;
    cin>>mark_pra1;
    cout<<"Enter a BEE Practical mark : "<<endl;
    cin>>mark_pra2;
    cout<<"Enter a PY Practical mark : "<<endl;
    cin>>mark_pra3;
    CCPT = grade(mark_the1);
    BEET = grade(mark_the2);
    PYT = grade(mark_the3);
    CCPP = grade(mark_pra1);
    BEEP = grade(mark_the2);
    PYP = grade(mark_the3);
    cout<<"\tTheory\t\t\tPractical"<<endl;
    cout<<"CCP     ";
    cout<<" \t\t\t"<<mark(mark_the1);
    cout<<"\t\t\t"<<mark(mark_pra1)<<endl;
    cout<<"BEE     ";
    cout<<" \t\t\t"<<mark(mark_the2);
    cout<<"\t\t\t"<<mark(mark_pra2)<<endl;
    cout<<"PY      ";
    cout<<" \t\t\t"<<mark(mark_the3);
    cout<<"\t\t\t"<<mark(mark_pra3)<<endl;
    sgpa=((CCPT+CCPP+PYP+PYT+BEEP+BEET)/6);
    cout<<"*"<<endl;
    cout<<"sgpa : "<<sgpa;
    return 0;
}
string mark(int p)
{
    if(p<=100 && p>=80){
        
        return "AA";
    }
    else if(p<80 && p>=73){
        
        return "AB";
    }
     else if(p<73 && p>=66){
        
        return "BB";
    }
     else if(p<66 && p>=60){
        
        return "BC";
    }
     else if(p<60 && p>=55){
        
        return "CC";
    }
     else if(p<55 && p>=50){
        
        return "CD";
    }
     else if(p<50 && p>=45){
        
        return "DD";
    }
     else{
        
        return "FF";
    }
}
int grade(int p)
{
    int gradepoint;
    if(p<=100 && p>=80){
        gradepoint =10;
        return gradepoint;
    }
    else if(p<80 && p>=73){
         gradepoint =9;
        return gradepoint;
    }
     else if(p<73 && p>=66){
         gradepoint =8;
        return gradepoint;
    }
     else if(p<66 && p>=60){
        gradepoint =7;
        return gradepoint;
    }
     else if(p<60 && p>=55){
         gradepoint =6;
        return gradepoint;
    }
     else if(p<55 && p>=50){
        gradepoint =5;
        return gradepoint;
    }
     else if(p<50 && p>=45){
         gradepoint =4;
        return gradepoint;
    }
     else{
         gradepoint =0;
        return gradepoint;
    }
}