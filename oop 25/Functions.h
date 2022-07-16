#pragma once

void AgeBetween(const Debtor& d)
{
	if ((2022 - d.getBirthDay().year) >= 26 && (2022 - d.getBirthDay().year) < 36)
		cout << d << endl;
}


void DebitLessThan5000(const Debtor& d)
{
	if (d.getDebt() < 5000)
		cout << d << endl;
}


void IfInDecember(const Debtor& d)
{
	if (d.getBirthDay().month == "December")
		cout << d << endl;
}


bool debtorDebtASC(const Debtor& d1, const Debtor& d2) {
	return d1.getDebt() > d2.getDebt();
}


void IfSawSecondWorldWar(const Debtor& d)
{
	if (d.getBirthDay().year >= 1939 && d.getBirthDay().year < 1945)
		cout << d << endl;
}


bool sortForName(const Debtor& d1, const Debtor& d2) {
	return (d1.getFullName() < d2.getFullName());
}


bool sortForDebt(const Debtor& d1, const Debtor& d2) {
	if (d1.getFullName() == d2.getFullName())
		return (d1.getFullName() < d2.getFullName());
}


bool countSeven(string a) {
	if (a == "7")
		return true;

}
