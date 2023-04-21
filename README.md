# Mini Casino in C++

## High-level Ideas - Classes I want to build:

> User
* Store information about the users
* field: username, password, balance, history like winning ratio (? maybe it's hard to store)
* methods: user registration; login, initialize balance;

> Game: 
* Funtions for playing games, handle the baccarat game logic. 
* Initialize the deck of cards, dealing the cards to the player and the banker, calculating the scores, and determining the winner.

> Bet:
* amount; check the amount and balance;
* type: player, banker, tie;
* potenial return;


> Casino:
* the main interface with users
* handle user authentication, display the user's balance, and provide options for playing the baccarat game and placing bets.


## Implementation Example:
To implement the baccarat game, it need to use the User, Game, Bet, and Casino classes together. When the user logs in and selects the baccarat game, the Casino class will create a new instance of the Game class and prompt the user to place their bet using the Bet class. Once the bet is placed, the Game class will deal the cards, calculate the scores, and determine the winner. If the user wins, their balance will be updated accordingly. The Casino class will then prompt the user to play again or exit the game.


## Plans: 
1. Start with the `User` class and implement the functions for user registration, login, and balance initialization. I will need to create data structures to store user information and balance.

2. Next, implement the `Bet` class and its functions for placing a bet and checking if the bet is valid. I will need to create data structures to store the bet amount and type.

3. Once the `User` and `Bet` classes are complete, I can move on to implementing the `Game` class. This class will handle the baccarat game logic, including initializing the deck of cards, dealing the cards, and determining the winner.

4. After the `Game` class is complete, I can move on to implementing the `Casino` class, which will act as the main interface for the user. This class will handle user authentication, display the user's balance, and provide options for playing the baccarat game and placing bets.

5. Finally, I will need to use the User, Bet, Game, and Casino classes together to implement the baccarat game. When the user logs in and selects the baccarat game, the Casino class will create a new instance of the Game class and prompt the user to place their bet using the Bet class. Once the bet is placed, the Game class will deal the cards, calculate the scores, and determine the winner. If the user wins, their balance will be updated accordingly. The Casino class will then prompt the user to play again or exit the game.
