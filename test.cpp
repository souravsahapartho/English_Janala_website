#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Drink
{
public:
    string name;
    double volume;
    double glucose;
    double glucose_per_litre;

    Drink(string n, double v, double g)
    {
        name = n;
        volume = v;
        glucose = g;
        glucose_per_litre = g / v;
    }

    void display()
    {
        cout << "Name: " << name << ", Volume: " << volume << ", Glucose: " << glucose << ", Glucose Per Litre: " << glucose_per_litre << endl;
    }
};

bool compare(Drink a, Drink b)
{
    return a.glucose_per_litre < b.glucose_per_litre;
}

Drink MinGlucose(vector<Drink> drinkList, int n, double capacity)
{
    sort(drinkList.begin(), drinkList.end(), compare);

    cout << "Sorted List: " << endl;
    for (Drink d : drinkList)
    {
        d.display();
    }

    cout << "\nSelected Items: " << endl;

    double total_glucose = 0;
    int i = 0;
    while (capacity > 0 && i < n)
    {
        if (drinkList[i].volume <= capacity)
        {
            total_glucose += drinkList[i].glucose;
            capacity -= drinkList[i].volume;
            drinkList[i].display();
        }
        else
        {
            double volume_taken = capacity;
            double g = volume_taken * drinkList[i].glucose_per_litre;
            total_glucose += g;
            cout << "Name: " << drinkList[i].name << ", Volume: " << volume_taken << ", Glucose: " << g << ", Glucose Per Litre: " << drinkList[i].glucose_per_litre << endl;
            capacity = 0;
        }
        i++;
    }
    cout << "\nMinimum Glucose: " << total_glucose << endl;
}

int main()
{
    vector<Drink> drinks =
        {
            Drink("Glucose-D", 3, 75),
            Drink("GlucoMax", 4, 80),
            Drink("String", 5, 150)};

    double capacity = 6;
    int n = drinks.size();
    MinGlucose(drinks, n, capacity);
    return 0;
}
