#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


void hangmanBody(int lives) 
{
	char body[7];

	switch(lives) 
	{
		case 0: body[1] = ')', body[0] = '(',body[2] = '/',body[3] = '|',body[4] = '\\',body[5] = '/',body[6] = '\\';
				break;
		case 1: body[1] = ')', body[0] = '(',body[2] = '/',body[3] = '|',body[4] = '\\',body[5] = '/';
				break;
		case 2: body[1] = ')', body[0] = '(',body[2] = '/',body[3] = '|',body[4] = '\\';
				break;
		case 3: body[1] = ')', body[0] = '(',body[2] = '/',body[3] = '|';
				break;
		case 4: body[1] = ')', body[0] = '(',body[2] = '/';
				break;
		case 5: body[1] = ')', body[0] = '('; 
				break;
		default: break;

	}

	printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c %c\n"
	       "\t|        %c%c%c\n"
	       "\t|        %c %c\n"
	       "\t|             \n"
	       "\t|             ", body[0], body[1], body[2],
	       body[3], body[4], body[5], body[6]);
}


int main()
{

	srand(time(NULL));

	FILE *input_file  = fopen("hangman_pbl", "r");

	
	char general[25][15]= {
		"backpack",
		"yellow",
		"purple",
		"pirate",
		"disney",
		"banana",
		"almond",
		"rainbow",
		"thunder",
		"beauty",
		"kitten",
		"elephant",
		"samsung",
		"spotify",
		"youtube",
		"snapchat",
		"kannada",
		"uranus",
		"saturn",
		"chemistry",
		"gravity",
		"telephone",
		"shirt",
		"starbucks",
		"dominos"
	};

	

	char movies[25][15] = {			
		"avengers",
		"avatar",
		"titanic",
		"kantara",
		"bahubali",
		"dangal",
		"drishyam",
		"sholay",
		"shershaah",
		"sultan",
		"milana",
		"aquaman", 
		"lagaan",
		"interstellar",
		"inception",
		"spiderman",
		"pailwaan",
		"mersal",
		"conjuring",
		"parasite",
		"kanchana",
		"raazi",
		"devdas",
		"eternals",
		"logan"

	};

    char videogames[25][15] = 
	{
		"minecraft",
		"fortnite",
		"roblox",
		"pacman",
		"valorant",
		"pubg",
		"vandal",       
		"operator",    
		"icebox",     
		"erangel",
		"stray",
		"primogems",
		"reyna",      
		"townhall",  
		"amongus",
		"templerun",
		"imposter",
		"sanhok",
		"sumeru",
		"miramar",
		"bind",   
		"brimstone",  
		"trevor",   
		"franklin",
		"mondstadt"   

	};

    char anime[25][15] = 
	{
		"naruto",
		"bleach",
		"itachi",
		"erenyeager",
		"deathnote",
		"madara",
		"mikasa",
		"byakugan",
		"sasuke",
		"anya",
		"tanjiro",
		"nezuko", 
		"horimiya",
		"monster",
		"rasengan",
		"sharingan",
		"jiraya",
		"kurapika",
		"luffy",
		"ichigo",
		"kakegurui",
		"minato",
		"zenitsu",
		"chidori",
		"itadori"

	};
	
    char kpop[25][15] = 
	{
		"jungkook",
		"mamamoo",
		"seventeen",
		"twice",
		"straykids",
		"blackpink",
		"itzy",
		"treasure",
		"dynamite",
		"namjoon",
		"jisoo",
		"hwasa",
		"everglow",
		"gashina",
		"bigbang",
		"shinee",
		"hyuna",
		"jackson",
		"irene",
		"chanyeol",
		"lilac",
		"jimin",
		"taehyung",
		"euphoria",
		"aespa"

	};

    char sports[25][15] = 
	{
		"cricket",
		"football",
		"basketball",
		"tennis",
		"rugby",
		"hockey",
		"wrestling",
		"archery",
		"badminton",
		"baseball",
		"shooting",
		"bowling", 
		"boxing",
		"skating",
		"volleyball",
		"throwball",
		"skiing",
		"swimming",
		"cycling",
		"curling",
		"running",
		"surfing",
		"billiards",
		"gliding",
		"fencing"
	};

	char cgeneral[25][100] =
	{
		"Used to carry one's belongings",
		"Colour of pikachu",
		"A colour",
		"A person who attacks and robs ships at sea",
		"One of biggest entertainment and Media Company",
		"A fruit",
		"Name of an edible seed",
		"Reflection, refraction and dispersion of light in water droplets",
		"A sound",
		"Synonym for elegance",
		"meowww.....",
		"An animal",
		"One of the world's largest producers of electronic device",
		"Audio streaming and media services provider",
		"Video sharing and social media platform ",
		"Multimedia instant messaging app and service ",
		"One of the scheduled language in India",
		"A planet",
		"A planet",
		"Study of the properties and behavior of matter",
		"Why did the apple fall on Newton's head ?",
		"A telecommunications device",
		"A clothing accessory",
		"American multinational chain of coffeehouses and roastery reserves",
		"American multinational pizza restaurant chain"

	};

	char cmovies[25][100] = 
	{
		"American superhero film",
		"The highest-grossing film",
		"First film to reach the billion-dollar mark",
		"A popular kannada language movie",
		"A popular telugu movie starring Prabhas",
		"One of highest-grossing Indian film",
		"The protagonist tries to shield his family from a crime",
		"A popular bollywood movie starring Amitabh Bachchan",
		"Indian Hindi-language biographical war film",
		"The protagonist is a middle-aged wrestler",
		"Indian Kannada-language comedy drama",
		"A superhero film based on the DC character",
		"A bollywood movie starring Aamir Khan",
		"Mission to find a new planet for humans",
		"Steals information from targets by entering their dreams",
		"A marvel superhero",
		"Kannada-language movie starring Sudeep",
		"Tamil-language action thriller film",
		"American supernatural horror film ",
		"South Korean film with an oscar",
		"Indian Tamil-language horror comedy film",
		"Bollywood spy action thriller film",
		"A popular bollywood movie starring Shah Rukh Khan",
		"A marvel movie",
		"A superhero film starring Hugh Jackman"
	};

	char ckpop[25][100] =
	{
		"Golden maknae",
		"South Korean girl group formed by RBW",
		"South Korean boy band formed by Pledis Entertainment",
		"South Korean girl group with Park Ji-hyo as their leader",
		"South Korean boy band formed by JYP Entertainment",
		"South Korean girl group with fandom name 'blink'",
		"Popular 4th generation girl group",
		"South Korean boy band formed by YG Entertainment",
		"Grammy nominated BTS song",
		"Leader of the biggest boy band",
		"Global ambassador of Dior",
		"Singer of the song 'Maria'",
		"Girl group under Yuehua Entertainment",
		"A popular song by Sunmi",
		"A popular 2nd generation boy band",
		"A 2nd generation boy band under SM Entertainment",
		"Singer-songwriter who feautured in Psy's Gangnam Style",
		"Chinese member of the boy band - Got7",
		"Member of the girl group - Red Velvet",
		"Member of the boy band - EXO",
		"Song by IU",
		"Member of the boy band - BTS",
		"Member of the boy band - BTS",
		"Song by Jeon Jungkook",
		"4th generation girl group under SM Entertainment"

	};

	char canime[25][100] = 
	{
		"A popular shonen manga",
		"A popular shonen manga",
		"Character with a red susanoo (via Naruto)",
		"TATAKAE ! (via Attack on titan)",
		"The protagonist is a mastermind who anonymously kills criminals",
		"'Wake up to reality'",
		"Character from Attack on titan",
		"the dōjutsu kekkei genkai of the Hyuga clan",
		"Member of team 7 (via Naruto)",
		"'Peanuts ga suki !'",
		"Protagonist from Demon Slayer",
		"Character from Demon Slayer",
		"Story about Hori and Miyamura",
		"Thriller anime with the protagonist's name as Kenzo Tenma",
		"The jutsu made by the 4th hokage (via Naruto)",
		"The dōjutsu kekkei genkai of the Uchiha clan",
		"One of the the legendary Sannin (via Naruto)",
		"The last survivor of the Kurta Clan (via Hunter X Hunter)",
		"Straw Hat",
		"via Bleach",
		"An anime about gambling",
		"The Yellow Flash (via Naruto)",
		"High concentration of lightning chakra around the user's hand (via Naruto)",
		"A member of the Demon Slayer Corps (via Demon Slayer)",
		"Main protagonists of Jujutsu Kaisen"
	};

	char cvideogames[25][100] = 
	{
		"A sandbox game developed by Mojang Studios",
		"A Battle Royale game",
		"An online game platform and game creation system",
		"This videogame was previously known as Namco",
		"A first-person tactical hero shooter ",
		"Battle royale shooter ",
		"A high-cost automatic rifle from Valorant",
		"A fierce bolt-action sniper rifle from valorant",
		"The first map in valorant to introduce horizontal ziplines",
		"The main map in PUBG Mobile",
		"A third-person cat adventure game",
		"The premium currency in Genshin Impact",
		"A Mexican Radiant, and the eleventh Agent in Valorant",
		"The main and most important building in the gamae - Clash of Clans",
		"A game inspired by party game Mafia and science fiction horror film-The Thing",
		"A video game franchise of 3D endless running video games",
		"One of the two primary roles in Among Us",
		"A map in pubg",
		"One of the seven regions in Teyvat (Genshin Impact)",
		"A map in pubg",
		"A map in Valorant",
		"A founding member and leader of the Valorant PROTOCOL",
		"A character in the Grand Theft Auto series",
		"The main protagonist in Grand Theft Auto V",
		"A city-state from Genshin Impact that worships the Anemo Archon"
	};

	char csports[25][100] =
	{
		"A bat-and-ball game",
		"A game involving two teams of 11 players",
		"Game played between two teams of five players on a rectangular court",
		"A racket sport",
		"A close-contact team sport",
		"India's national game",
		"A combat sports involving clinch fighting,throws and takedowns",
		"Skill of using a bow to shoot arrows",
		"A racquet sport ",
		"A bat-and-ball sport",
		"The sport of firing at targets",
		"A target sport",
		"A combat sport",
		"Traveling on surfaces or on ice using skates",
		"Two teams are separated by a net",
		"Two teams are separated by a net",
		"Gliding on snow",
		"An individual or team racing sport",
		"A racing sport",
		"Players slide stones on a sheet of ice toward target",
		"A racing sport",
		"Riding a wave using a board",
		"Played on a rectangular table with small balls and a cue",
		"Flight in an unpowered heavier-than-air craft",
		"A group of three related combat sports"
		
	};




	// index for random word

	int randomIndex = rand() % 25;
	int numLives = 6 ;
	int numCorrect = 0;
	int oldCorrect = 0;
    int genre;
    char word[20];
	char clue[50];
	int score = 0;
	char name[20];


		printf(
	            "\t     \n"
	            "\t    ( )                            \t ( )\n"
	            "\t    /|\\\t  WELCOME TO HANGMAN GAME !!!!\t /|\\\n"
	            "\t    / \\                                \t / \\   ");


    printf("\n\n\n\t Be aware you can be hanged!!.");
	printf("\n\n\t Rules of the game are as follows : ");
	printf("\n\t\t - Player has to guess the word letter by letter.");
	printf("\n\t\t - Maximum 6 mistakes are allowed.");
	printf("\n\t\t - All alphabet must be entered in lower case.");
	printf("\n\t\t - Clues related to the word will be provided after 4th wrong guess");
	printf("\n\n\nEnter you Username : ");
	gets(name);
    printf("\n\nChoose the genre\n");
    printf("\t1 : General\n \t2 : Movies\n \t3 : Videogames\n \t4 : Anime\n \t5 : K-pop\n \t6 : Sports\n\n");
	printf("Enter the Genre number : ");

    scanf("%d",&genre);
	printf("\n");
	char sgenre[4];
	

    switch(genre)
    {
        case 1 : strcpy(word,general[randomIndex]);
				 strcpy(clue,cgeneral[randomIndex]);
                 break;
        case 2 : strcpy(word,movies[randomIndex]);
				 strcpy(clue,cmovies[randomIndex]);
                 break;
        case 3 : strcpy(word,videogames[randomIndex]);
				 strcpy(clue,cvideogames[randomIndex]);
                 break;
        case 4 : strcpy(word,anime[randomIndex]);
				 strcpy(clue,canime[randomIndex]);
                 break;
        case 5 : strcpy(word,kpop[randomIndex]);
				 strcpy(clue,ckpop[randomIndex]);
                 break;
        case 6 : strcpy(word,sports[randomIndex]);
				 strcpy(clue,csports[randomIndex]);
                 break;
    }
	
	int lengthOfWord;
    lengthOfWord = strlen(word);
	

	int letterGuessed[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	
	int quit = 0;
	int loopIndex = 0;
	
	char guess[15];
	char letterEntered;
	char *body;

    hangmanBody(numLives);
	printf("\n\n");
	
	
	 /*printf("guessWords:%s randomIndex:%d lengthOfWord:%d\n\n",
		word,
		randomIndex,
		lengthOfWord); */
	

    // game loop

	while ( numCorrect < lengthOfWord ) 
    {
		/*printf("\n\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
		printf("\n\nNew Guess........\n\n");*/
		for(loopIndex = 0; loopIndex < lengthOfWord; loopIndex++)
		{
			if(letterGuessed[loopIndex] == 1) 
			{
				printf("%c ",word[loopIndex]);
			}
			else
			{
				printf("_ ");
			}
		}
		printf("\n\n");
		printf("Number Correct So Far  :  %d\n",numCorrect);
		printf("Number of lives left : %d\n",numLives);
		printf("Enter a guess letter  :  ");
		scanf("%s",&guess);
		
		if( strncmp(guess, "quit", 4) == 0) 
        {
			quit = 1;
			break;
		}
		
		letterEntered = guess[0];
		
		printf("letterEntered  :  %c\n\n",letterEntered);
		oldCorrect = numCorrect;


		
		for( loopIndex = 0; loopIndex < lengthOfWord; loopIndex++) 
		{
	
			if(letterGuessed[loopIndex] == 1)
            {
			
				continue;
			}
		
			if( letterEntered == word[loopIndex] )
            {
				letterGuessed[loopIndex] = 1;
				numCorrect=numCorrect+1;	
			}		
		
		}	

		if ( oldCorrect == numCorrect )
		{
			numLives = numLives - 1;
			printf("X  X  X\nOops !! Wrong guess :(\n\n\n");
			
			if( numLives == 0 )
			{
				hangmanBody(numLives);
				printf("\n\n");
				break;
			} 
			else if( numLives == 2)
			{
				printf("\nCareful ! You only have 2 lives left\n");				
				printf("\nClue : %s\n\n",clue);
			}
		}
		else
		{
			printf("\nwoo !! Good guess :) \n\n\n");
		}

		hangmanBody(numLives);
		printf("\n\n");
	
	} // end of while loop

	switch(numLives)
	{
		case 6 : score=100;
				 break;
		case 5 : score=80;
				 break;
		case 4 : score=60;
				 break;
		case 3 : score=40;
				 break;
		case 2 : score=20;
				 break;
		case 1 : score=10;
				 break;
		case 0 : score=0;
				 break;		 
	}
	
	if( quit == 1 )
    {	
		printf("Too bad.....Better Luck Next Time\n");
		score = 0;
	}
	else if( numLives == 0)
	{
		printf("\n\nX X X X X X\n");
		printf("\nGAME OVER :(  :( \n\n");
		printf("Your score is : %d / 100\n\n",score);
	}
	else
	{
		printf("\nWell played !! You WIN !! :D\n\n\n");
		printf("Your score is : %d / 100\n\n",score);
	}

	printf(" The Hangman Word is : %s\n\n",word);

	FILE *fp;
	fp  = fopen ("data.txt", "a");

	if ( score == 100 )
	{
		fprintf(fp,"%s ---- %d **\n",name,score);
	}
	else if ( score == 80 )
	{
		fprintf(fp,"%s ---- Score : %d *\n",name,score);
	}
	else
	{
		fprintf(fp,"%s ---- %d\n",name,score);
	}

	fclose(fp);
	

	return 0;

}
