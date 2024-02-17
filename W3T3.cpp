#include <iostream>
#include <string>
using namespace std;

struct herd {
    int week_day[7];
    int cow_code;
    int first_yield[7];
    int second_yield[7];
    int total;
};

int main() {
    int size = 0;
    cout << "Enter the size of herd: ";
    cin >> size;
    herd* Herd = new herd[size];
    int max_yield = 0;
    int most_productive_cow = -1;
    int *low_yield_cows=new int [size];
    int low_yield_count = 0;

    for (int i = 0; i < size; i++) {
        cout << "cow code: ";
        cin >> Herd[i].cow_code;
        Herd[i].total = 0; // Initialize total for each cow to 0
        int low_yield_days = 0; // Counter for days with yield less than 12 litres
        for (int j = 0; j < 7; j++) {
            cout << "Day Number: ";
            cin >> Herd[i].week_day[j];
            cout << "First_yield (liters): ";
            cin >> Herd[i].first_yield[j];
            cout << "second_yield (liters): ";
            cin >> Herd[i].second_yield[j];
            int daily_yield = Herd[i].first_yield[j] + Herd[i].second_yield[j];
            Herd[i].total += daily_yield;
            if (daily_yield < 12) {
                low_yield_days++;
            }
        }
        if (low_yield_days >= 4) 
        {
            low_yield_cows[low_yield_count++] = Herd[i].cow_code;
        }
        if (Herd[i].total > max_yield)
        {
            max_yield = Herd[i].total;
            most_productive_cow = Herd[i].cow_code;
        }
    }
    cout << "Most productive cow: " << most_productive_cow << " with a total yield of " << max_yield << " liters." << endl;
    cout << "Cows producing a low volume of milk:" << endl;
    for (int i = 0; i < low_yield_count; i++) {
        cout << low_yield_cows[i] << endl;
    }

    delete[] Herd;
    return 0;
}
