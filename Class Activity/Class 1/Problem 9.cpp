#include<bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name;
    int height;
    int age;
public:
    Employee(string name, int height, int age)
    {
        this->name = name;
        this->height = height;
        this->age = age;
    }
public:
    Employee()
    {

    }

};

bool comparator(Employee a, Employee b)
{
    if(a.height>b.height) return true;
    else if(a.height<b.height) return false;
    else
    {
        if(a.age>b.age) return true;
        else return false;
    }
}

void printVector(vector< Employee > employees)
{
    for(Employee e : employees)
    {
        cout << e.name << " " << e.height << " " << e.age;
        cout << endl;
    }
    cout << endl;
}
int main()
{
    freopen("input.txt", "r", stdin);
    cout << "Hello" << endl;

    int n;
    cin >> n;

    vector< Employee > employees(n);
    for(int i=0; i<n; i++)
    {
        getchar();
        getline(cin, employees[i].name);
        cin >> employees[i].height;
        cin >> employees[i].age;
    }


    printVector(employees);
    sort(employees.begin(), employees.end(), comparator);
    printVector(employees);
    return 0;
}
