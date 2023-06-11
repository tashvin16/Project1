#include <iostream>
#include <fstream>
using namespace std;


void movieDetails();
void printdetails();
string food(int foodinputf, string food_itemsf[]);
string drink(int drinkinputf, string drinksf[]);




struct Movies
{
	int movieDuration;
	string movieTitle, movieActor, movieRating, movieGenre;

} movie1, movie2, movie3, movie4, movie5, movie6;

struct person
{
	char name[20], email[50], phonenum[20];
	int ticketnum;
	int age;

}p;
// array for food
string food_items[5] = { "Popcorn", "Hot Dogs", "Nachos", "Cake", "Candies" };
string drinks[5] = { "Coca-Cola", "Sprite", "Fanta", "Pepsi", "Mountain Dew" };




int main()
{
	movieDetails();


	int x;
	int loop = 2;

	int time;
	int infoinput;
	int foodinput;
	int drinkinput;
	string foodchoiceprint;
	string drinkchoiceprint;
	string moviesummarytitle;


	string timeinput;

	do

	{
		printdetails();

		cin >> infoinput;
		cout << endl;
		if (infoinput == 1)
		{

			cout << "Movie Name: " << movie1.movieTitle << endl;
			cout << "Movie rating: " << movie1.movieRating << endl;
			cout << "Movie Genre: " << movie1.movieGenre << endl;
			cout << "Movie cast: " << movie1.movieActor << endl;
			cout << "Movie duration: " << movie1.movieDuration << " minutes" << endl;
		}
		else if (infoinput == 2)
		{

			cout << "Movie Name: " << movie2.movieTitle << endl;
			cout << "Movie rating: " << movie2.movieRating << endl;
			cout << "Movie Genre: " << movie2.movieGenre << endl;
			cout << "Movie cast: " << movie2.movieActor << endl;
			cout << "Movie duration: " << movie2.movieDuration << " minutes" << endl;


		}
		else if (infoinput == 3)
		{

			cout << "Movie Name: " << movie3.movieTitle << endl;
			cout << "Movie rating: " << movie3.movieRating << endl;
			cout << "Movie Genre: " << movie3.movieGenre << endl;
			cout << "Movie cast: " << movie3.movieActor << endl;
			cout << "Movie duration: " << movie3.movieDuration << " minutes" << endl;
		}
		else if (infoinput == 4)
		{

			cout << "Movie Name: " << movie4.movieTitle << endl;
			cout << "Movie rating: " << movie4.movieRating << endl;
			cout << "Movie Genre: " << movie4.movieGenre << endl;
			cout << "Movie Genre: " << movie4.movieGenre << endl;
			cout << "Movie cast: " << movie4.movieActor << endl;
			cout << "Movie duration: " << movie4.movieDuration << " minutes" << endl;
		}
		else if (infoinput == 5)
		{

			cout << "Movie Name: " << movie5.movieTitle << endl;
			cout << "Movie rating: " << movie5.movieRating << endl;
			cout << "Movie Genre: " << movie5.movieGenre << endl;
			cout << "Movie Genre: " << movie5.movieGenre << endl;
			cout << "Movie cast: " << movie5.movieActor << endl;
			cout << "Movie duration: " << movie5.movieDuration << " minutes" << endl;

		}
		else if (infoinput == 6)
		{

			cout << "Movie Name: " << movie6.movieTitle << endl;
			cout << "Movie rating: " << movie6.movieRating << endl;
			cout << "Movie Genre: " << movie6.movieGenre << endl;
			cout << "Movie Genre: " << movie6.movieGenre << endl;
			cout << "Movie cast: " << movie6.movieActor << endl;
			cout << "Movie duration: " << movie6.movieDuration << " minutes" << endl;
		}

		cout << endl << "1. Continue to ticket booking.\n" << "2. Return to movie info" << endl;
		cin >> loop;
	} while (loop == 2);






	cout << "Enter your name" << endl;
	cin >> p.name;
	cout << endl;
	cout << "Enter your email address" << endl;
	cin >> p.email;
	cout << endl;
	cout << "Enter your phone number" << endl;
	cin >> p.phonenum;
	cout << endl;

	cout << "Please choose which movie you would like to watch ?\n";
	cout << "1." << movie1.movieTitle << endl;
	cout << "2." << movie2.movieTitle << endl;
	cout << "3." << movie3.movieTitle << endl;
	cout << "4." << movie4.movieTitle << endl;
	cout << "5." << movie5.movieTitle << endl;
	cout << "6." << movie6.movieTitle << endl;

	cin >> x;

	ofstream myfile;
	myfile.open("ticket.txt");
	switch (x)
	{
	case 1:
		moviesummarytitle = movie1.movieTitle;
		cout << "Movie selected: " << movie1.movieTitle;
		cout << endl << "Select time for movie" << endl;
		cout << "1. 09:00 \n2. 13:00 \n3. 19:00\n";
		cin >> time;

		if (time == 1)
			timeinput = "09:00";
		else if (time == 2)
			timeinput = "13:00";
		else if (time == 3)
			timeinput = "19:00";

		myfile << "Ticket information" << endl << "Name: " << p.name << endl << "Email: " << p.email << endl << "Phone Number: " << p.phonenum << endl << endl << movie1.movieTitle << endl << "Screening Time: " << timeinput;
		myfile.close();
		break;

	case 2:
		moviesummarytitle = movie2.movieTitle;
		cout << "Movie selected: " << movie2.movieTitle;
		cout << endl << "Select time for movie" << endl;
		cout << "1. 10:00 \n2. 14:00 \n3. 20:00\n";
		cin >> time;
		if (time == 1)
			timeinput = "10:00";
		else if (time == 2)
			timeinput = "14:00";
		else if (time == 3)
			timeinput = "20:00";



		myfile << "Ticket information" << endl << "Name: " << p.name << endl << "Email: " << p.email << endl << "Phone Number: " << p.phonenum << endl << endl << movie2.movieTitle << endl << "Screening Time: " << timeinput;
		myfile.close();
		break;
	case 3:
		moviesummarytitle = movie3.movieTitle;
		cout << "Movie selected: " << movie3.movieTitle;
		cout << endl << "Select time for movie" << endl;
		cout << "1. 11:00 \n2. 15:00 \n3. 22:00\n";
		cin >> time;
		if (time == 1)
			timeinput = "11:00";
		else if (time == 2)
			timeinput = "15:00";
		else if (time == 3)
			timeinput = "22:00";

		myfile << "Ticket information" << endl << "Name: " << p.name << endl << "Email: " << p.email << endl << "Phone Number: " << p.phonenum << endl << endl << movie3.movieTitle << endl << "Screening Time: " << timeinput;
		myfile.close();
		break;
	case 4:
		moviesummarytitle = movie4.movieTitle;
		cout << "Movie selected: " << movie3.movieTitle;
		cout << endl << "Select time for movie" << endl;
		cout << "1. 12:00 \n2. 16:00 \n3. 22:30\n";
		cin >> time;
		if (time == 1)
			timeinput = "12:00";
		else if (time == 2)
			timeinput = "16:00";
		else if (time == 3)
			timeinput = "22:30";

		myfile << "Ticket information" << endl << "Name: " << p.name << endl << "Email: " << p.email << endl << "Phone Number: " << p.phonenum << endl << endl << movie3.movieTitle << endl << "Screening Time: " << timeinput;
		myfile.close();
		break;
	case 5:
		moviesummarytitle = movie5.movieTitle;
		cout << "Movie selected: " << movie3.movieTitle;
		cout << endl << "Select time for movie" << endl;
		cout << "1. 12:30 \n2. 16:45 \n3. 21:30\n";
		cin >> time;
		if (time == 1)
			timeinput = "12:30";
		else if (time == 2)
			timeinput = "16:45";
		else if (time == 3)
			timeinput = "21:30";

		myfile << "Ticket information" << endl << "Name: " << p.name << endl << "Email: " << p.email << endl << "Phone Number: " << p.phonenum << endl << endl << movie3.movieTitle << endl << "Screening Time: " << timeinput;
		myfile.close();
		break;
	case 6:
		moviesummarytitle = movie6.movieTitle;
		cout << "Movie selected: " << movie3.movieTitle;
		cout << endl << "Select time for movie" << endl;
		cout << "1. 13:15 \n2. 16:55 \n3. 23:20\n";
		cin >> time;
		if (time == 1)
			timeinput = "13:15";
		else if (time == 2)
			timeinput = "16:55";
		else if (time == 3)
			timeinput = "23:20";
		break;



	}

	cout << "Would you like to order food?" << endl;
	cout << "1.Yes" << endl << "Click anything else if you do not want to order food and would like to complete booking\n";
	cin >> foodinput;
	foodchoiceprint = food(foodinput, food_items);

	cout << "Would you like to order drinks?" << endl;
	cout << "1.Yes" << endl << "Click anything else if you do not want to order food and would like to complete booking\n";
	cin >> drinkinput;
	drinkchoiceprint = drink(drinkinput, drinks);




	cout << "\n\n\nOrder :" << endl;
	cout << "Movie: " << moviesummarytitle << endl;
	cout << "Food Ordered: " << foodchoiceprint << endl;
	cout << "Drinks ordered: " << drinkchoiceprint << endl;










	return 0;
}

void movieDetails()
{
	movie1.movieTitle = "Avatar: The Way Of Water";
	movie1.movieDuration = 192;
	movie1.movieActor = "Zoe Saldana, Sam Worthington";
	movie1.movieRating = "PG-13";
	movie1.movieGenre = "Sci-Fi";



	movie2.movieTitle = "Puss In Boots:The Last Wish";
	movie2.movieDuration = 103;
	movie2.movieActor = "Antonia, Salma Hayek";
	movie2.movieRating = "PG-13";
	movie2.movieGenre = "Animation";



	movie3.movieTitle = "Megan";
	movie3.movieDuration = 102;
	movie3.movieActor = "Allison Williams, Violet McGraw";
	movie3.movieRating = "PG-13";
	movie3.movieGenre = "Sci-Fi Horror";

	movie4.movieTitle = "Escape";
	movie4.movieDuration = 108;
	movie4.movieActor = "Kamal Adli, Elizabeth Tan";
	movie4.movieRating = "PG-18";
	movie4.movieGenre = "Thriller";

	movie5.movieTitle = "Sword Art Online The Movie";
	movie5.movieDuration = 100;
	movie5.movieActor = "Yoshitsugu Matsuoka, Haruka Tomatsu";
	movie5.movieRating = "PG-13";
	movie5.movieGenre = "Animation";

	movie6.movieTitle = "Black Panther: Wakanda Forever";
	movie6.movieDuration = 162;
	movie6.movieActor = "Lupita Nyong-o, Danai Gurira";
	movie6.movieRating = "PG-13";
	movie6.movieGenre = "Fantasy";
}
void printdetails()
{
	cout << endl << "Welcome to TSC Movies \n\n\n";
	cout << "View available movies" << endl << endl;
	cout << "1." << movie1.movieTitle << endl;
	cout << "2." << movie2.movieTitle << endl;
	cout << "3." << movie3.movieTitle << endl;
	cout << "4." << movie4.movieTitle << endl;
	cout << "5." << movie5.movieTitle << endl;
	cout << "6." << movie6.movieTitle << endl << endl;
	cout << "Select movie to view information \n";
}

string food(int foodinputf, string food_itemsf[])
{
	string foodchoiceprintf;




	int choosefood;


	cout << "What food would you like to order?\n ";
	cout << "1. " << food_items[0] << endl << "2. " << food_items[1] << endl << "3. " << food_items[2] << endl << "4. " << food_items[3] << endl << "5. " << food_items[4];
	cout << endl << "Press 6 if you do not want to order anything\n";
	cin >> choosefood;
	if (foodinputf == 1)
	{
		switch (choosefood)
		{
		case 1:
		{
			foodchoiceprintf = food_items[0];
			break;
		}
		case 2:
		{
			foodchoiceprintf = food_items[1];
			break;
		}
		case 3:
		{
			foodchoiceprintf = food_items[2];
			break;
		}
		case 4:
		{
			foodchoiceprintf = food_items[3];
			break;
		}
		case 5:
		{
			foodchoiceprintf = food_items[4];
			break;
		}

		}
		cout << endl << "Your food option: " << foodchoiceprintf << endl;



		return foodchoiceprintf;

	}



}


string drink(int drinkinputf, string drinksf[])
{
	string drinkchoiceprintf;




	int choosedrink;


	cout << "What drink would you like to order?\n ";
	cout << "1. " << drinks[0] << endl << "2. " << drinks[1] << endl << "3. " << drinks[2] << endl << "4. " << drinks[3] << endl << "5. " << drinks[4];
	cout << endl << "Press 6 if you do not want to order anything\n";
	cin >> choosedrink;
	if (drinkinputf == 1)
	{
		switch (choosedrink)
		{
		case 1:
		{
			drinkchoiceprintf = drinks[0];
			break;
		}
		case 2:
		{
			drinkchoiceprintf = drinks[1];
			break;
		}
		case 3:
		{
			drinkchoiceprintf = drinks[2];
			break;
		}
		case 4:
		{
			drinkchoiceprintf = drinks[3];
			break;
		}
		case 5:
		{
			drinkchoiceprintf = food_items[4];
			break;
		}

		}
		cout << endl << "Your food option: " << drinkchoiceprintf << endl;



		return drinkchoiceprintf;

	}



}















