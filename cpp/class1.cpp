#include <iostream>

using namespace std;

class emp
{
    private:
        string name = "Sushil";
        int ID = 555;
        float salary = 200000;
    
    public:
        void nameChange(string new_name)
        {
            name = new_name;
        }

        void IDChange(int new_id)
        {
            ID = new_id;
        }

        void updateSal(float revised_sal)
        {
            salary = revised_sal;
        }

        void displayDetails()
        {
            cout << "The name of Employee is " << name << endl;
            cout << "The employee ID of Employee is " << ID << endl;
            cout << "The salary of Employee is " << salary << endl;
        }
};

int main()
{
    emp e1;
    e1.displayDetails();
    e1.nameChange("Ramya");
    e1.IDChange(344);
    e1.updateSal(30000);
    e1.displayDetails();
    return 0;
}