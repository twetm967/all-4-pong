# CPS 111 Team 3 Game Proposal: All-4-Pong #
# Fall 2013 #
### _Revised_ ###



## Game Introduction ##

Amid the morass of pong games currently bouncing around the internet, there rises a new option. A pong experience so simple a child can play, so engaging adults will clamor to beat the next level. Presenting All-4-Pong, the 4-way, 4-player pong with a twist. Play up to 3 friends or challenge the Virtual Paddles! Earn the highest score in all difficulty levels while staying live and knocking balls through your opponents’ sides. Handle power-ups and randomly emerging barriers in the field of play. Pong like never before. All-4-Pong and Pong-4-All.

## Program Details ##


On the Main Menu Screen, players will enter a username, select a difficulty level, and then start the game of 4-way pong. The player will enter a Game Court Screen, containing, toward the edges of the window, a small leader board and various other buttons described below. In the center of the page resides a large, square Game Court surface. Each of the 4 players (whether human users or AIs) guards a side of the square by moving a slender, rectangular paddle back and forth in front of their side with keyboard arrows. At the start of the game, a single, small ball will begin traveling from the center of the Game Court in a straight direction at a fixed rate of speed.

The object of the game is to earn the highest score of points among all players. Players score points by hitting a ball through another player’s side or being the last player to touch a ball that goes through a player’s side. Each player begins the game with the same level of health, or “lives” (as indicated by a health graphic beside each player’s side). Every time a ball goes through a player’s side, that player’s total heath amount goes down one unit. If the player looses every unit of health, he is out for the game, his paddle disappears, and a wall covers his side of the Game Court. Bonus points are awarded to the last player standing at the end of each game.
The user can change the difficulty level of an upcoming game by choosing between 3 levels of difficulty (Amateur, Experienced, Pro; default: 1, or Amateur). Each increase in difficulty level results in smaller paddles and faster ball speeds.

After several minutes of playing a game, several geometric barrier shapes of various types will randomly appear within the Game Court Square. Balls will bounce off the sides of these shapes in the same way they bounce off paddles.

When the difficulty level is set to Pro, barrier shapes will cause a power-up effect. The speed of a ball that hits the barrier shape increases upon contact. Also, multiple balls traveling at varying speeds will spawn, traveling away from the barrier shape that was hit. Bonus points will be awarded to the player who last hit the ball that initiated the power-up. This power-up can only happen once to each barrier shape for the duration of the game.




## Feature List and Specifications ##

### B-Level (Maximum 90 version) Requirements ###

  * All-4-Pong will run on standard CSLAB Linux VMs from any directory on various screen resolutions up to 1024x768.

  * All-4-Pong will use a GUI interface (Main Menu, Transition Screens, Help Screen, Game Court Screen) implemented with Qt and C++.

  * Players will score points by hitting a ball through another player’s side or being the last player to touch a ball that goes through a player’s side (players who hit balls through their own side will award points to all other players). Bonus points are awarded to the last player standing at the end of each game. A sorted list of the current top 10 highest scores along with each corresponding player name will be displayed in the Main Menu in leader board format. An offshore text file will always be maintained, containing the current leader board information and being updated every time the leader board is updated.

  * The user can change the difficulty level of an upcoming game by choosing between 3 levels of difficulty (Amateur, Experienced, Pro; default: 1, or Amateur). Each increase in difficulty level results in shorter paddles and faster ball speeds.

  * Balls will travel in straight lines, bounce off paddles, and change directions based on the angle of approach. Paddles will be moved side to side by each player.

  * During an active game, the host can press a small button on the Game Court Screen to enter Cheat Mode. In this state, all players are given infinite health.

  * A special icon located on the Main Menu will give the user access to a Help Screen displaying instructions for game play and tips for victory.

  * All-4-Pong will utilize appropriate object oriented design patterns and techniques, including proper Model View separation.

### A-Level (Maximum 100 version) Requirements ###

  * All-4-Pong will allow a user to save program game state (current names, points, health of players, paddle positions, and ball position(s)) and close the program. When the game is restarted next, the user will be prompted to choose between starting a new game and finishing the previous saved game. Ball and paddle positions will be reset and current scores of each player will be displayed on the Game Court Screen next to each player’s side.

  * All-4-Pong will support 2 to 4 human players, each running the game on separate computers. AIs will replace the appropriate number of absent human players so that each game will always have 4 contestants.

  * Game will have short sounds for ball collisions and the addition of points.

  * All-4-Pong will support cross platform use. The single code base will compile on 2 platforms: Linux and Windows.

### Bonus Requirements ###

  * In difficulty levels Experienced and Pro, All-4-Pong will create several geometric barrier shapes of various types that randomly appear within the Game Court Square.

  * All-4-Pong will supply barrier shapes that cause a power-up effect that increases the speed of a ball that hits the barrier shape and spawns multiple balls traveling at varying speeds.

  * Each increase in difficulty level results in faster and more aggressive AI brains.