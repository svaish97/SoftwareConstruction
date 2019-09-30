

#include <assert.h>
#include <bits/stdc++.h>
using namespace std;



void studentDetails()
{
    cout << "Enter Student's Name " << endl;
    string name;
    cin >> name;
   
    cout << "Enter Marks in 5 subjects " << endl;
    int marks[5];
    for(int i =0; i<5; i++)
        cin >> marks[i];
    int ans = sum(marks,5);
    for(int i =0; i<5;i++)
    {
        assert(marks[i]>0 && marks[i]<50);
    }
    assert(ans>=0);
    cout << "Student Details "<<endl;
    cout << "Name: " << name << endl;
    for(int i =0; i<5;i++)
        cout << marks[i] << endl;
    cout << "Percentage Marks: "<< endl;
    cout << ans/500 * 100 << endl;

}

double calorieCount(double calorie,double fat,double fibres_grams)
{   
    double calorie_count = 0.0;
    calorie_count = (calorie/50)+(fat/12)*(fibres_grams/5);
    assert(calorie_count>0.0);
    return calorie_count;
}



int main()
{
   
    studentDetails();
    cout << "Calorie Count: " << calorieCount(12,13,14) << endl;


}