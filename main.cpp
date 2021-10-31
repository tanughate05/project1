#include <iostream>
using namespace std;
void convert(int value)
{
	char *first[20] = { "zero""ONE", "TWO", "THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN",
	"ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTTEEN","NINETEEN" };

	char *second[10] = { "", "TEN", "TWENTY", "THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY" };
	if (value < 0)
	{
		cout << " ";
		convert(-value);
	}
	else if (value >= 10000000)
	{
		convert(value / 10000000);
		cout << "crore";
		if (value % 10000000)
		{
			if (value % 10000000 < 100000)
			{
				cout << "and";
			}
			cout << " ";
			convert(value % 10000000);
		}
	}
	else if (value >= 100000)
	{
		convert(value / 100000);
		cout << "lakh";
		if (value % 100000)
		{
			if (value % 100000 < 1000)
			{
				cout << "and";
			}
			cout << " ";
			convert(value % 100000);
		}
	}
	else if (value >= 1000)
	{
		convert(value / 1000);
		cout << " THOUSAND";
		if (value % 1000)
		{
			if (value % 1000 < 100)
			{
				cout << " AND";
			}
			cout << " ";
			convert(value % 1000);
		}
	}
	else if (value >= 100)
	{
		convert(value / 100);
		cout << " HUNDRED";
		if (value % 100)
		{
			cout << " AND ";
			convert(value % 100);
		}
	}
	else if (value >= 20)
	{
		cout << second[value / 10];
		if (value % 10)
		{
			cout << " ";
			convert(value % 10);
		}
	}
	else
	{
		cout << first[value];
	}
	return;

}
int main()
{
	int a, b;
	std::cout << "enter the value a:" << std::endl;
	std::cin >> a;

	cout << " enter the value b:";
	cin >> b;
	convert(std::max(a, b));
	return 0;
}