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

    for (int i = 0; i < size; i++) {
        cout << "cow code: ";
        cin >> Herd[i].cow_code;
        Herd[i].total = 0; // Initialize total for each cow to 0
        for (int j = 0; j < 7; j++) {
            cout << "Day Number: ";
            cin >> Herd[i].week_day[j];
            cout << "First_yield (liters): ";
            cin >> Herd[i].first_yield[j];
            cout << "second_yield (liters): ";
            cin >> Herd[i].second_yield[j];
            Herd[i].total += Herd[i].first_yield[j] + Herd[i].second_yield[j];
        }
    }

    for (int i = 0; i < size; i++) {
        cout << "cow code: " << Herd[i].cow_code << endl;
        for (int j = 0; j < 7; j++) {
            cout << "Day Number: " << Herd[i].week_day[j] << endl;
            cout << "First_yield (liters): " << Herd[i].first_yield[j] << endl;
            cout << "second_yield (liters): " << Herd[i].second_yield[j] << endl;
            cout << "Total Yield (liters): " << Herd[i].total << endl;
        }
        cout << "Average Yield (liters): " << Herd[i].total / 7 << endl;
    }

    delete[] Herd;
    return 0;
}
