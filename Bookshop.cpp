#include<bits/stdc++.h>
using namespace std;

class Bookshop
{
	private:
		uint8_t bookId;
		u16string bookName;
	public:
		Bookshop(uint8_t bookId, u16string bookName)
		{
			this->bookId=bookId;
			this->bookName=bookName;
		}
		void user(u16string uname, u16string pass)
		{
			int opt;
			if((uname=="admin") && (pass=="password"))
			{
				cout<<"Welcome Admin!"<<endl;
				cout<<"\n\nPlease use the numeric pad to select one of the options: ";
				cout<<"\n1. View Book";
				cout<<"\n2. Insert new book";
				cout<<"\n3. Delete book";
				cout<<"\n4. Rename book";
				cout<<"\n5. Exit";
				cin>>opt;
				switch(opt)
				{
					case 1:
						viewbook();
						break;
					case 2:
						insertbook(bid, bname);
						break;
					case 3:
						deleteBook() ;
						break;
					case 4:
						renamebook(id, name);
						break;
					case 5:
						cout<<"\nYou are exiting to main menu...";
						for(int i=0;i<3000;i++)
						{
							cout<<"";
						}
						exit(0);
					
					default :
						cout<<"\nPlease enter a correct option";
				}
			}
			else if(uname!="admin")
			{
				cout<<"Welcome user!"<<endl;
				cout<<"\n\nPlease use the numeric pad to select one of the options: ";
				cout<<"\n1. View Book";
				cout<<"\n2. Buy book";
				cout<<"\n3. Return book";
				cout<<"\n4. Exit";
				cin>>opt;
				switch(opt)
				{
					case 1:
						view();
						break;
					case 2:
						buy_books();
						break;
					case 3:
						returnBooks();
						break;
					case 4:
						cout<<"\nThank you for using our library!";
						cout<<"\nYou are exiting to main menu...";
						for(int i=0;i<3000;i++)
						{
							cout<<"";
						}
						exit(0);

					default :
						cout<<"\nPlease enter a correct option";

				}
			}
			system("clear");
			void view()
			{
				cout<<"\nEnter book id to view: ";
				string bid="";
				getline (std::cin,bid);
				if(!bookExists(bid)) {
					cout << "Book does not exist" << endl;
					return ;
				}
				else if (!isAvailable(bid))
				{
					cout << "\tSorry! This is an unavailable copy." << endl;
					return ;
				}
				else
				{
					cout << getDetailsOfABook(bid)<<endl;
					getchar (); //to pause the screen after displaying details of books
				}
			}
			bool checkUserCredentials ()
			{
				ofstream f1.open("Credentials.txt");
				f2 >> username >> password;
				while(!(username == user && password==pass))
				{
					cout <<"Invalid Username or Password"<<endl;
					cout << "Username:";
					getline (std::cin,user);
					cout << "Password:";
					getline (std::cin, pass);
				}
					return true;
					f1.close();
			}
			bool bookExists(uint8_t bid)
			{
				ofstream f1.open("Books.txt");
				f2>>bookId>>bookName;
				while((!(bookId-0)==bid)){
					cout<<"No such Book Exists!"<<endl;
					break;
					}
					return false;
					f1.close();
				}	
			bool isAvailable(uint8_t bid)	
			{
				ofstream f1.open("Books.txt")
				if (!(availableCopies > 0)){
					cout <<"\nBook not available\n";
					return false;
				}
				else {
					return true;
					}
					f1.close();

			}
			void getDetailsOfABook(uint8_t bid)
			{
				ofstream f1.open("Books.txt");
				f2>>bookId>>bookName;
				cout<<"\nYou have searched for the book "<<bookName<<" with the book ID: "<<bid;
				f1.close();
			}
			void addNewUser()
			{
				string username = "";
				string password =" ";
				char choice ='';
				do
				{
					cout << "\nEnter your Username : " ;
					cin >>username;
					cout << endl <<"Confirm Password :" ;
					cin >>password;
					choice=getch();
					system ("cls");
					if (strcmpi(password,confirmPassword)!=0 )
					{
						cout <<"\nIncorrect Confirmation! Please try again.\a"<<endl;
						continue;
						}
						else if ((strlen(username)<6 || strlen(username)>35))
						{
							cout <<"\nUsername should be between 6 and 35 characters long!\a
							Please enter a valid one."<<endl;
							continue;
							}
							break;
							}while(true);
							//add user to file
							ofstream outfile;
							outfile.open("Users.txt",ios::app|ios::out);
							outfile<<username<<","<<hash(password)<<endl;
							outfile.close();
							cout <<"\nRegistration successful!"<<endl;
							return true;
							}
							bool loginCheck() //check whether credentials are correct or not
							{
								string entered_user="",entered_pass="";
								getline(cin>>ws,entered_user,',');
								getline(cin,entered_pass,'\r','\n',EOF);
								ifstream infile;
								infile.open("Users.txt");
								string line = "";
								while (!infile.eof()) {
									getline(infile, line);
									stringstream ss(line);
									std::vector<std::string> tokens((istream_iterator<string>(ss)),
									istream_iterator<string>());
									for(auto i:tokens)
									{
										if(!i.empty())
										{
											if(i==entered_user && hash(entered_pass)==tokens[1])
											{
												return true;
											}
										}
									} 
								} 
								return false; 
							} 
							





			}
			}
		}
	}


int main(){

}
