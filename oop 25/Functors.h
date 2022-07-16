#pragma once

class AgeBetweenUp
{
	int up;
	int lower;
public:
	AgeBetweenUp(int lower, int up)
		:up(up), lower(lower) {}

	void operator()(const Debtor& d) {
		if ((2022 - d.getBirthDay().year) >= lower && (2022 - d.getBirthDay().year) < up)
			cout << d << endl;
	}
};


class DebitLessThan
{
	int lessThan;
public:
	DebitLessThan(int lessThan) :lessThan(lessThan) {}
	void operator()(const Debtor& d) {
		if (d.getDebt() < lessThan)
			cout << d << endl;
	}

};

class WhichMonth
{
	string month;
public:
	WhichMonth(string month) :month(month) {}

	void operator()(const Debtor& d)
	{
		if (d.getBirthDay().month == month)
			cout << d << endl;
	}
};
