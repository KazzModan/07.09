#include "Wallet.h"

Wallet* Wallet::wallet = nullptr;

Wallet* Wallet::getWallet()
{
	if (wallet == nullptr)
		wallet = new Wallet();

	return wallet;
}

void Wallet::operator+=(size_t money)
{
	if (this->money + money <= static_cast<size_t>(Limits::MAX_MONEY))
		this->money += money;
}

void Wallet::operator-=(size_t money)
{
	if (this->money - money >= NULL)
		this->money -= money;
}

size_t Wallet::getMoney() const
{
	return this->money;
}

Wallet::Wallet()
{
	this->money = 0;
}

ostream& operator<<(ostream& out, const Wallet& wallet)
{
	out << "money: " << wallet.getMoney() << endl;
	return out;
}
