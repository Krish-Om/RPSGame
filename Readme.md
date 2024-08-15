# RPSGame

RPSGame is a Command Line Interface (CLI) based Rock-Paper-Scissors game. It supports both single-player (Player vs Bot) and multiplayer (Player vs Player) modes.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Game Modes](#game-modes)
- [Classes and Functions](#classes-and-functions)
- [Score History](#score-history)
- [Contributing](#contributing)


## Score History
The game stores the history of scores of the players who won the game in a file named `score_history.txt`. Each time a game is completed, the winner's score is appended to this file. The file is located in the same directory as the game executable.
## Installation

1. **Clone the repository:**
    ```sh
    git clone https://github.com/Krish-Om/RPSGame.git
    cd RPSGame
    ```

2. **Build the project using CMake:**
    ```sh
    mkdir build
    cd build
    cmake ..
    make
    ```

## Usage

1. **Run the game:**
    ```sh
    ./RPSGame
    ```

2. **Follow the on-screen instructions to play the game.**

## Game Modes

- **Single Player Mode:** Play against the Bot.
- **Multiplayer Mode:** Play against another player.

## Classes and Functions

### Classes

- **Players:** Base class for all players.
  - `setState(unsigned int ch)`: Sets the player's choice.
  - `getScore()`: Returns the player's score.
  - `compare(Players &p2)`: Compares the player's choice with another player.
  - `choiceInfo()`: Displays the choice information.
  - `operator++()`: Increments the player's score.
  - `operator==(Players &p)`: Compares the scores of two players.
  - `operator>(Players &p)`: Checks if one player's score is greater than another's.


- **User\_Player:** Derived class for human players.
  - `setChoice()`: Sets the player's choice based on user input.
  - `roundWinner(int result, int i, User_Player &p1, User_Player &p2)`: Determines the round winner.


- **Bot:** Derived class for the bot player.
  - `setChoice()`: Sets the bot's choice randomly.
  - `setScore()`: Increments the bot's score.


- **Game:** Manages the game flow.
  - `init()`: Initializes the game.
  - `modeSelection()`: Allows the user to select the game mode.
  - `roundSelection()`: Allows the user to select the number of rounds.
  - `singlePlayer()`: Starts the single-player mode.
  - `multiPlayer()`: Starts the multiplayer mode.
  - `startGame()`: Starts the game for single-player mode.
  - `startGame(User_Player &p1, User_Player &p2)`: Starts the game for multiplayer mode.
  - `Outro(int nround)`: Displays the outro message.
  - `playAgain()`: Asks the user if they want to play again.
  - `determineWinner(User_Player player, Bot bot)`: Determines the winner between a player and the bot.
  - `determineWinner(User_Player player1, User_Player player2)`: Determines the winner between two players.

### Functions

- `start()`: Starts the game.
- `clearScreen()`: Clears the terminal screen.
- `intro()`: Displays the game introduction.
- `scoreBoard(User_Player &p1, User_Player &p2)`: Displays the scoreboard for multiplayer mode.
- `scoreBoard(User_Player &p1, Bot &p2)`: Displays the scoreboard for single-player mode.
- `comparingScores()`: Displays a loading bar while comparing scores.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request for any improvements or bug fixes.
