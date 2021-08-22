#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;

class batsmen
{public:
	char name[1000];
	
	int totalrun;
	int four;
	int six;
};
class bowler
{public:
 char name[1000];
int over;
int noballs;
int run;
int wickets;

};
using namespace std;
int main()
{bowler bow[100];
batsmen bat[100];
int swap,day;
int month,year;
char swapn[100],team1[10],team2[10],toss[10],elected[10],venue[10];
cout<<"ENTER THE DAY...\n";
cin>>day;
cout<<"ENTER THE MONTH ...\n";
cin>>month;
cout<<"ENTER THE YEAR....\n";
cin>>year;
cout<<"ENTER THE VENUE ...\n";
cin>>venue;
cout<<"NAMES OF TEAMS ....\n";
cin>>team1>>team2;
cout<<"ENTER TOSS WON BY TEAM...\n";
cin>>toss;
cout<<"ENTER THE TOSS WINNING TEAM ELECTED TO BAT OR BALL";
cin>>elected;
for(int i=1;i<=11;i++)
{
	cout<<"ENTER NAME, TOTAL RUN, NUMBER OF 4S,NUMER OF 6S RESPECTIVELY of batsman"<<i<<"  ";
	cin>>bat[i].name;
 cin>>bat[i].totalrun;
	cin>>bat[i].four;
	cin>>bat[i].six;
	
}
for(int i =1;i<=8;i++)
{cout<<"ENTER THE NAME,OVERS,NOBALLS,RUN,NUMBER OF WICKETS OF BOWLERS "<<i<<"    ";
cin>>bow[i].name>>bow[i].over>>bow[i].noballs>>bow[i].run>>bow[i].wickets;

}
for (int i=1;i<=11;i++)
{
	for(int j=i+1;j<=11;j++)
	{
		if(bat[i].totalrun<bat[j].totalrun)
		{
		swap=bat[i].totalrun;
			bat[i].totalrun=bat[j].totalrun;
			bat[j].totalrun=swap;
			swap=bat[i].four;
			bat[i].four=bat[j].four;
			bat[j].four=swap;
			swap=bat[i].six;
			bat[i].six=bat[j].six;
			bat[j].six=swap;
			strcpy(swapn,bat[i].name);
			strcpy(bat[i].name,bat[j].name);
			strcpy(bat[j].name,swapn);
		}
	}
}

		for(int i=1;i<=8;i++)
		{
		for(int j=i+1;j<=8;j++)
		{
		
		if(bow[i].wickets<bow[j].wickets)
		{
		swap=bow[i].wickets;
			bow[i].wickets=bow[j].wickets;
			bow[j].wickets=swap;
			swap=bow[i].over;
			bow[i].over=bow[j].over;
			bow[j].over=swap;
			swap=bow[i].noballs;
			bow[i].noballs=bow[j].noballs;
			bow[j].noballs=swap;
			swap=bow[i].run;
			bow[i].run=bow[j].run;
			bow[j].run=swap;
			strcpy(swapn,bow[i].name);
			strcpy(bow[i].name,bow[j].name);
			strcpy(bow[j].name,swapn);
		}
				
		}
	}

cout<<"DATE:  "<<day<<":"<<month<<":"<<year<<"          VENUE :     "<<venue<<"\n";
cout<<"MATCH BETWEEN :     "	<<team1<<"  Vs  "<<team2<<"\n";
cout<<"TOSS WON BY TEAM :  "<<toss <<"\n";
cout<<toss<<" ELECTED TO "<<elected<<"\n";
cout<<"BATSMEN  :  \n";
cout<<"NAME"<<"        "<<"TOTAL RUN"<<"       "<<"4s"<<"       "<<"6S"<<"\n";
for(int i=1;i<=11;i++)
{
	cout<<bat[i].name<<"               "<<bat[i].totalrun<<"            "<<bat[i].four<<"         "<<bat[i].six<<"\n";
	
}
cout<<"BOWLERS :   \n";
cout<<"NAME"<<"       "<<"TOTAL WICKETS"<<"       "<<"OVERS"<<"       "<<"NO BALLS"<<"       "<<"RUNS"<<"\n";
for(int i=1;i<=8;i++)
{
	cout<<bow[i].name<<"               "<<bow[i].wickets<<"                "<<bow[i].over<<"             "<<bow[i].noballs<<"            "<<bow[i].run<<"\n";
	
}
getche();
}
