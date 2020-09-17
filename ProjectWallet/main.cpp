#include "Wallet.h"

int main() 
{
	Wallet& wallet = *Wallet::getWallet();

	wallet += 200;
	cout << wallet;
	wallet -= 100;
	cout << wallet;

	return 0;
}