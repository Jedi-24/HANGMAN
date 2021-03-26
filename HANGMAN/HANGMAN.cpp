#include<iostream>
#include<fstream>
#include<ctime>
#include<string>
int main()
{
    //START SCREEN
    char start{};
   std::cout<<"HANGMAN"<< std:: endl;
   std::cout<<"By Jay Aggarwal"<< std:: endl;
   std::cout<<"_______________"<< std:: endl;
   std::cout<<"|      }       "<< std:: endl;
   std::cout<<"|      O       "<< std:: endl;
   std::cout<<"|      |       "<< std:: endl;
   std::cout<<"|    / | \\    "<< std:: endl;
   std::cout<<"|   /  |  \\   "<< std:: endl;
   std::cout<<"|     / \\     "<< std:: endl;
   std::cout<<"|    /   \\    "<< std:: endl;
   std::cout<<"|______________"<< std:: endl;
   std::cout<<"\nPress and key (and enter) to start\n";
   std::cin>>start;
   //GAME.
   //SET VARIABLES THROUGHOUT THE GAME.
   int tries{6};
   char guess;//the letter guessed.
   bool correctguess= false;
   std:: string word; //THE WORD,PLAYER HAS TO GUESS.
   std:: string wordlist[9];
   //GET RANDOM WORD.
   srand(time(NULL));//creates a random seed used to get a random word from the array above.
   std::ifstream Randomword;//this file stream reads in the variable.
   Randomword.open("words.txt");//reads this file(list of words).
   for(int i=0;i<=9;i++)
   {
       Randomword>>wordlist[i];//filling the array with words from the list.
       //std::cout<<wordlist[i]<<std::endl;//FOR TESTINF PURPOSES ONLY.
   }
   int RandomNum= rand()%10;//RETURNS A RANDOM NUMBER BETWEEN 0 TO 9.
   word = wordlist[RandomNum];
   //std::cout<<word<<std::endl;//FOR TESTING PURPOSES.
   Randomword.close();
   //MAKE WORD A MYSTERY.
   std:: string Mysteryword(word.length(),'*');//REPLACES EACH LETTER OF WORD WITH * AND STORES IT IN Mysteryword.
   //std::cout<<Mysteryword<<std::endl;//FOR TESTING PURPOSES.

   while(tries>=0)
   {   //RESET THE BOOL
       correctguess=false;
       //display info related to the word for the player.
       std:: cout<<"the word you have to guess is\n\n";
        std:: cout<<Mysteryword<<std::endl;
        std:: cout<<"\nThere are "<< Mysteryword.length()<<" letters in the word\n\n";
        std:: cout<<"You have "<<tries<<" guesses left\n";
        std:: cout<<"\n guess a letter: ";
        std:: cin>>guess;

        //check if the guess is correct.
        for(int i=0;i<Mysteryword.length();i++)
        {
            if(word[i]==guess)//check whether the actual word have the guess in it.
            {
                Mysteryword[i]=guess;
                correctguess=true;
            }
        }
        if(word==Mysteryword)
        {
          std::cout<<"Congractulations! You have got the word correct: "<<Mysteryword<<std::endl;
          break;
        }
        if(correctguess==false)
        {
            tries--;
            std::cout<<"Sorry, "<<guess<<" is not the part of the word"<<std::endl;
        }
        else
        std::cout<<"Congractualtion! "<< guess <<" is one of the letters!"<<std::endl;
      switch(tries)
      {
        case 6:
        {
            std::cout<<"_______________"<< std:: endl;
   std::cout<<"|      }       "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|______________"<< std:: endl;
            break;
        }
        case 5:
        {
            std::cout<<"_______________"<< std:: endl;
   std::cout<<"|      }       "<< std:: endl;
   std::cout<<"|      O       "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|______________"<< std:: endl;
            break;
        }
        case 4:
        {
             std::cout<<"_______________"<< std:: endl;
   std::cout<<"|      }       "<< std:: endl;
   std::cout<<"|      O       "<< std:: endl;
   std::cout<<"|      |       "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|______________"<< std:: endl;
            break;
        }
        case 3:
        {
             std::cout<<"_______________"<< std:: endl;
   std::cout<<"|      }       "<< std:: endl;
   std::cout<<"|      O       "<< std:: endl;
   std::cout<<"|      |       "<< std:: endl;
   std::cout<<"|    / |       "<< std:: endl;
   std::cout<<"|   /  |       "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|______________"<< std:: endl;
            break;
        }
        case 2:
        {
             std::cout<<"_______________"<< std:: endl;
   std::cout<<"|      }       "<< std:: endl;
   std::cout<<"|      O       "<< std:: endl;
   std::cout<<"|      |       "<< std:: endl;
   std::cout<<"|    / | \\    "<< std:: endl;
   std::cout<<"|   /  |  \\   "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|              "<< std:: endl;
   std::cout<<"|______________"<< std:: endl;
            break;
        }
        case 1:
        {
          std::cout<<"_______________"<< std:: endl;
   std::cout<<"|      }       "<< std:: endl;
   std::cout<<"|      O       "<< std:: endl;
   std::cout<<"|      |       "<< std:: endl;
   std::cout<<"|    / | \\    "<< std:: endl;
   std::cout<<"|   /  |  \\   "<< std:: endl;
   std::cout<<"|     /        "<< std:: endl;
   std::cout<<"|    /         "<< std:: endl;
   std::cout<<"|______________"<< std:: endl;   
            break;
        }
        case 0:
        {
             std::cout<<"_______________"<< std:: endl;
   std::cout<<"|      }       "<< std:: endl;
   std::cout<<"|      O       "<< std:: endl;
   std::cout<<"|      |       "<< std:: endl;
   std::cout<<"|    / | \\    "<< std:: endl;
   std::cout<<"|   /  |  \\   "<< std:: endl;
   std::cout<<"|     / \\     "<< std:: endl;
   std::cout<<"|    /   \\    "<< std:: endl;
   std::cout<<"|______________"<< std:: endl;
   std::cout<<"\nGAME OVER"<< std:: endl;
   tries=-1;
            break;
        }
        default:
        std::cout<<"if you are seeing this line,there is an error";
      }
   }
   return 0;
}