# include<iostream>
# include<string>
using namespace std;
struct herd
{
	int week_day[7];
	int cow_code;
	int first_yield[7];
	int second_yield[7];
};
int main()
{
	herd *Herd;
	int size=0;
	Herd=new herd[size];
	cout << "Enter the size of herd: ";
	cin >> size;
	for(int i = 0;i < size;i++)
	{
		cout << "cow code: ";
		cin >> Herd[i].cow_code;
		
		for (int j = 0;j < 7;j++)
		{
			cout << "Day Number: ";
			cin >> Herd[i].week_day[j];

			cout << "First_yield (liters): ";
			cin >> Herd[i].first_yield[j];
			cout << "second_yield (liters): ";
			cin >> Herd[i].second_yield[j];
		}
		
	}

	for (int i = 0;i < size;i++)
	{
		cout << "cow code: "<<Herd[i].cow_code;
		
		for (int j = 0;j < 7;j++)
		{
			cout << "Day Number: " << Herd[i].week_day[j] << endl;
			
			cout << "First_yield (liters): "<< Herd[i].first_yield[j]<<endl;
			cout << "second_yield (liters): "<< Herd[i].second_yield[j]<<endl;
		
		}

	}


	return 0;
}