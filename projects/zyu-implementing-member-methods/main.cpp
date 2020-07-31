#include <iostream>
#include "Account.h"

int main() {

	Account frank_account;
	frank_account.set_name("Frank's Account");
	frank_account.set_balance(1000);

	if (frank_account.deposit(200.0)){
		std::cout << "Deposit OK\n";
	} else {
		std::cout << "Deposit Cancelled\n";
	}

	//etc

	return 0;
}