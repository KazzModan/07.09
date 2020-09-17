#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

class Wallet
{
public:
	enum class Limits
	{
		MAX_MONEY = 1000000
	};

	static Wallet* getWallet();

	void operator +=(size_t money);
	void operator -=(size_t money);

	friend ostream& operator<<(ostream& out, const Wallet& wallet);
	size_t getMoney() const;

protected:
	size_t money;
	
	static Wallet* wallet;
	Wallet();
};


