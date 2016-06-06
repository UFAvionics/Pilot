% Chances of Yahtzee
clc; clear;


D = input('Which dice value to go for? ');

if D > 6 || D < 1
    disp('Invalid entry. Choose again');
end

T = input('How many turns would you like to simulate? ');
seed = input('What seed to use for the random number generator? ');

rng(seed);
TotalYahtzee = 0;
for TotalTurns = 1:1:T
TotalDie = 5;
FOX = 0;

    for Roll = 1:1:3

              for Die1 = 1:1:TotalDie 

                    NumberRoll = randi(6);

                    if NumberRoll == D

                    TotalDie = TotalDie - 1;
                    FOX = FOX + 1;

                    end 

              end    

    end
    
    if FOX == 5
             TotalYahtzee = TotalYahtzee + 1;
    end  
 
 end
fprintf('Simulation found %d Yahtzees of all %d in %d turns', TotalYahtzee, D, TotalTurns)

   
