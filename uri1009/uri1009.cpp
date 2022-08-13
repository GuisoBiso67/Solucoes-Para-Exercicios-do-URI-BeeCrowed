#include <bits/stdc++.h>
using namespace std;

double salary(double salary_fixed, double price_sale){
    return (salary_fixed + (price_sale*0.15));
}

int main(){
    char saller_name[50];
    double salary_fixed, price_sale, final_salary;
    cin >> saller_name;
    cin >> salary_fixed >> price_sale;
    final_salary = salary(salary_fixed, price_sale);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << final_salary << endl;
}