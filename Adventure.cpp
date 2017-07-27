#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int rumble = 50;
	string x;
	string name;
	int strength;
	int intel;
	int agility;
	int decide;
	int playerHealth = 100;
	int enemyHealth = 100;
	int attack;
	string question;
	int passcode;

	

cout<<endl;
cout<< "Welcome to Starlight City!"<<endl;
cout<<endl;
cout<<"Press any button to begin your adventure!"<<endl;
cin>>x;
	
	cout<<"	It is a rainy night in Starlight City..."<<endl;
	cout<<"You are waiting at the subway station for the 11:00 train to take you home."<<endl;
	cout<<endl;
	cout<<"All of a sudden you see something inside the tunnel move!"<<endl;
	cout<< "Press any key to continue..."<<endl; 
	cin>>x;
	
	usleep(1000000);
	
	for(int i = 0; i < rumble;)
	{
		i++;
		cout<<""<<endl;
	}
	
	
	
	cout<<"There was a power outtage and the subway station went pitch black!"<<endl;
	cout<<endl;
	cout<<"Before we continue...what is your name?"<<endl;
	cin>>name;
	cout<<"Best of luck to you, "<<name<<"."<<endl;
	cout<<endl;
	cout<<"On a scale of 1-10 what is your strength?"<<endl;
	cin>>strength;
	if (strength>5)
	{
		cout<<"Thats pretty strong!"<<endl;
	}
	else
	{
		cout<<"You could probably improve on that..."<<endl;
	}
	cout<<endl;
	cout<< "What would you rate your intellegence from 1-10?"<<endl;
	cin>>intel;
	cout<<"Ok and what about your agility from 1-10?"<<endl;
	cin>>agility;
	cout<<"Ok,good! Now that we have all that sorted out we can continue."<<endl;
	cout<<endl;
	cout<<"You dig around your backpack and find a flashlight..."<<endl;
	cout<<"Press any button to turn it on"<<endl;
	cin>>x;
	cout<<endl;
	cout<<"Now that you are able to see, you notice that the stairs that take"<<endl;
	cout<<"you out of the subway station have dissappeared!"<<endl;
	cout<<endl;
	cout<<"Press 1 to look for another set of stairs"<<endl;
	cout<<"Press 2 to take your chances and walk through the subway tunnel to find an exit"<<endl;
	cin>>decide;
	
	if (decide == 1)
	{
		cout<<"You walk around to see if theres any other staircase..."<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"It doesn't look like there are any..."<<endl;
		cout<<"It's time to walk into the tunnel I suppose..."<<endl;
	}
	
		cout<<"You grasp your flashlight and hop down onto the train tracks."<<endl;
		cout<<"As you begin to walk, you feel a significant temperature drop."<<endl;
		cout<<endl;
		cout<<"Press any key to continue..."<<endl;
		cin>>x;
		
		for(int i = 0; i < rumble;)
	{
		i++;
		cout<<""<<endl;
	}
	
	cout<<"You hear a low frequency noise coming from the tunnel"<<endl;
	cout<<"Press 1 to run away or Press 2 to go deeper in and investigate."<<endl;
	cin>>decide;
	
	if (decide == 1)
	{
		cout<<"You begin to run away from the tunnel..."<<endl;
				for(int i = 0; i < rumble;i++)
			{
				cout<<""<<endl;
			}
		cout<<"You bump into something..."<<endl;
		cout<<endl;
		cout<<"Press any key to continue..."<<endl;
		cin>>x;
		cout<<endl;
		cout<<"RIP...the evil subway ghost has killed you"<<endl;
		cout<<endl;
		cout<<"G A M E   O V E R"<<endl;
	}
	else
	{
		cout<<"You start to go in and the sound grows louder and louder..."<<endl;
		cout<<endl;
		cout<<"You have some headphones in your bag, would you like to put them on to cover up the noise?"<<endl;
		cout<<"Press 1 for yes or 2 for no"<<endl;
		cin>>decide;
		if(decide ==1)
		{
			cout<<"You begin to listen to your favorite music and speed up a bit"<<endl;
			cout<<endl;
			cout<<"Oh no the tunnel splits up into right and left!"<<endl;
			cout<<"Press 1 to go right or press 2 to go left..."<<endl;
			cin>>decide;
			if(decide==1)
			{
				cout<<"As you keep walking the air starts to feel humid"<<endl;
				cout<<endl;
				cout<<"Press any key to continue..."<<endl;
				cin>>x;
				for(int i = 0; i < rumble;)
					{
						i++;
						cout<<""<<endl;
					}
	
				cout<<"There was a massive crater inside of the tunnel that dropped into a pit of water..."<<endl;
				cout<<"Press any key to drown"<<endl;
				cin>>x;
				cout<<"You drowned to death."<<endl;
				cout<<endl;
				cout<<"G A M E   O V E R"<<endl;
			}
			else
			{
				cout<<"The air gets colder and colder and your legs start to slow down..."<<endl;
				cout<<endl;
				cout<<"Press any key..."<<endl;
				cin>>x;
				for(int i = 0; i < rumble;)
				{
					i++;
					cout<<""<<endl;
				}
				cout<<"What was that!!!"<<endl;
				cout<<endl;
				cout<<"Oh no a ghost has appeared from the shadows!"<<endl;
				
	while ( playerHealth > 0 && enemyHealth > 0)
	{
		cout<< "Type in number to choose your attack move!"<<endl;
		cout<<endl;
		cout<< "1. Fire Spin"<<endl;
		cout<< "2. Rising Uppercut"<<endl;
		cout<< "3. Spin Kick"<<endl;
		cout <<"4. Give Up" <<endl; 
		
		cin >> attack;
		
		
		if (attack == 1)
		{
			cout<<endl;
			int firerange = (rand() % 25) + 15;
			cout<<"Fire Spin hit opponent!"<<endl;
			enemyHealth = enemyHealth - firerange;
			cout<<"Enemy Health: "<<enemyHealth<<" 	Your Health: "<<playerHealth<<endl;
			cout<<endl;
		}
		else if (attack == 2)
		{
			cout<<"Rising Uppercut pushed opponent back 10 ft!"<< endl;
			enemyHealth = enemyHealth -40;
			cout<<"Enemy Health: "<<enemyHealth<<" 	Your Health: "<<playerHealth<<endl;
			cout<<endl;
		}
		else if (attack == 3)
		{
			cout<< "Spin Kick landed on opponent!"<<endl;
			enemyHealth = enemyHealth-35;
			cout<<endl;
			cout<<"Enemy Health: "<<enemyHealth<<" 	Your Health: "<<playerHealth<<endl;
			cout<<endl;
		}
		else if(attack == 4)
		{
			cout<<"Lmao you coward!"<<endl;
			playerHealth = playerHealth - 100000;
			cout<<"Enemy Health: "<<enemyHealth<<" 	Your Health: "<<playerHealth<<endl;
			cout<<endl;
		}
		cout<<endl;
		cout<<"Press any button to continue..."<<endl;
		cin>>x;
		if (enemyHealth>0)
		{
			cout<<"The enemy has attacked you!"<<endl;
			int diddy = (rand() % 35) +15;
		playerHealth = playerHealth - diddy;
		cout<<"Enemy Health: "<<enemyHealth<<" 	Your Health: "<<playerHealth<<endl;
		cout<<endl;
		}
	}
	if (playerHealth > enemyHealth)
	{
		cout<<"You did it! The ghost has been defeated!!!"<<endl;
		cout<<endl;
		cout<< "C O N G R A T U L A T I O N S!"<<endl;
		
	usleep(2000000);
	
	cout<<endl;
	cout<< "But that doesn't mean this journey is over."<<endl;
	cout<<"We still need to find a way out of this tunnel."<<endl;
	usleep(3000000);
	cout<<"You continue to walk down the tunnel until you reach a pile of trash"<<endl;
	cout<<endl;
	cout<<"There is a notebook with the official seal of the subway station on it"<<endl;
	cout<<"Would you like to pick it up and see what it says?"<<endl;
	cout<<endl;
	usleep(1000000);
	cout<<"y = yes  n = no"<<endl;
	cin>>question;
	if (question == "y"){
		cout<<"You pick up the notebook and open it up to a page containing a few numbers"<<endl;
		cout<<"4 3 8 9 1 2"<<endl;
		usleep(4000000);
		cout<<"That's strange..."<<endl;
	}
	else{ cout<<"Wrong choice lmao"<<endl;}
	
	cout<<"You leave the notebook on the ground and continue walking down the tracks."<<endl;
	cout<<endl;
	usleep(1000000);
	cout<<"."<<endl;
	usleep(1000000);
	cout<<"."<<endl;
	usleep(1000000);
	cout<<"."<<endl;
	usleep(1000000);
	cout<<"."<<endl;
	usleep(1000000);
	cout<<"."<<endl;
	usleep(1000000);
	cout<<"."<<endl;
	usleep(1000000);
	
	for(int i = 0; i < 100;)
				{
					i++;
					cout<<""<<endl;
				}
				
	cout<<"You see a faint green light in the distance...Maybe it is part of a door?"<<endl;
	cout<<endl;
	usleep(100000);
	cout<<"As you walk towards it, you're able to see that it is a keypad that seems to open a gate"<<endl;
	usleep(100000);
	cout<<"You go to the keypad. What could the code be?"<<endl;
	cout<<endl;
	
	for (int i = 0; i<4;)
	{
	cout<<"Enter Passcode With No Spaces: "<<endl;
	cin>>passcode;
	
		if (passcode == 438912)
		{ cout<<"The door opens..."<<endl;
		  cout<<"You walk into the room and see that there is an elevator"<<endl;
		  cout<<endl;
		  cout<<"Get in to the elevator?"<<endl;
		  cout<<"y = yes   n = no"<<endl;
		  cin>>question;
		  
			if (question == "n")
			{cout<< "You starved to death because you're a coward"<<endl;
			 cout<<endl;
			 cout<<"G A M E   O V E R"<<endl;
			}
			
			else {
				cout<<"You get inside and take it all the way to the top..."<<endl;
				usleep(100000);
					for(i=10; i>01;)
					{usleep(500000);
					 i--;	
					 cout<<"Floor "<<i<<endl;	} 
					 usleep(500000);
				cout<<"The door opens and you're outside in Starlight City once again"<<endl;
				cout<<endl;
				usleep(1000000);
				cout<<"Next time just take an uber home or something."<<endl;
				cout<<endl;
				cout<<endl;
				usleep(3000000);
				cout<<"T H A N K S   F O R   P L A Y I N G ! ! !"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Developed by Leo Martinez   copyright 2017"<<endl;
				cout<<endl;
				exit (EXIT_FAILURE);
				 }

		}
	else {i++;}
   }
	cout<<"You failed to type in the passcode. The keypad is now disabled and you will starve to death."<<endl;
	cout<<endl;
	cout<<"The End."<<endl;
	cout<<endl;
	cout<<"G A M E  O V E R"<<endl;

}

	else 
	{
		cout<< "You have been D E F E A T E D!" <<endl;
		cout<<endl;
		cout<< "G A M E    O V E R"<<endl;
	}

}

				
}		
else
		{
	cout<<"The noise grows louder and louder and louder..."<<endl;
	cout<<"Press any key to continue..."<<endl;
	cin>>x;
		for(int i = 0; i < 100;)
			{
				i++;
				cout<<"L O U D  L O U D  L O U D"<<endl;
			}
		cout<<"The noise grew too loud and you died..."<<endl;
		cout<<endl;
		cout<<"G A M E     O V E R"<<endl; 
		}
	}
  }
