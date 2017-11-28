#include <iostream>
#include <string>
#include <cstring>
//#include <cEmail>
#include <stdio.h>
#include <string.h>
using namespace std;



/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

class emaildb
	//develop a class Email
{
public:
	//int x = 25;
	//string getdbemailtype();
	string getdbemailaddress();
	string getdbreceiveremailaddress();
	string getdbemailmessage();
	string getdbemaildate();
	string getemail();
	string searchemail();
	string emaildelete();
	string getdatabase();
	//char input_sent[25];

private:
	string dbemailtype[2000];
	string dbsenderemailaddress[2000];
	char dbemailsender[2000];
	string dbreceiveremailaddress[2000];
	char dbemailreceiver[2000];
	string dbemailmessage[2000];
	string dbemaildate[2000];
	string dbemailaddress[2000];
	string database[2000];
	int flag = 1;
	int i = 0;

	//int sizeOf;
	//	char * ptr = nullptr;
	//char* ptr2 = nullptr;


};
emaildb email1;
string emaildb::getdbemailaddress() {
	return "chlsmiad@gmail.com";
	//statement for testing


};

string emaildb::getdbreceiveremailaddress() {
	return "16072065d@connect.polyu.hk";
	//statement for testing
};

string emaildb::getdbemailmessage() {
	if (i == 1) {
		return "hi, Andrew";
		//for testing
	}
	else
	{
		return "hi,Peter";
		//for testing
	}
};

string emaildb::getdbemaildate() {
	return "20171211";
	//for testing
};
string emaildb::getdatabase() {
	for (int y = 0; y < 2000; y++)
	{
		cout << email1.database[y];
	}//for testing purpose

	return "";
	
}

string emaildb::getemail() {

	//get the email from the user
	string stringspace = "\n";
	dbemailaddress[i] = getdbemailaddress();
	//dbreceiveremailaddress[i] = getdbtesting();
	dbemailmessage[i] = getdbemailmessage();
	dbemaildate[i] = getdbemaildate();

	database[i] = dbemailaddress[i] + stringspace + dbemailmessage[i] + stringspace + dbemaildate[i];
	cout << database[i];

	i++;
	return " ";
};

string emaildb::searchemail() {
	string name;
	string::size_type found;
	string find[100];
	cout << "Please input a name";
	cin >> name;
int 	x = i - 1;
	for (int x = 0; x < 100; x++) {
		found = database[x].find(name);

		if (found != database[x].npos)
		{
			cout <<"Name: "<< name<<"\n";
			cout <<"email code: "<< x<<"\n";
			cout << database[x];
			//for testing purpose
			find[x] = database[x];
		}
		else {

			cout << "";
				
			

		}
	}
	//forloop for testing purpose
	/*	for (int y = 0; y < 100; y++)
	{
			cout << find[y];
		}*/

	
	return "";
};

string emaildb::emaildelete() {
	cout << "if you want to delete a data in the database, please input the email ident code to delete it" << "\n";
	int z;
	cin >> z;
	for (int u = z; u < 2000; u++)
	{
		database[u] = database[u + 1];

	}
	return"";
};



//testing main start
void main()
{
	cout << "hi,there";
	email1.getemail();
	email1.getemail();
	cout << "\n";
	email1.searchemail();

	cout << "\n"<<"\n"<<"before deleteing:"<<"\n";

	email1.getdatabase();
	email1.emaildelete();
	cout << "\n" << "\n"<<"after deleteing" << "\n";
	email1.getdatabase();
	
};





