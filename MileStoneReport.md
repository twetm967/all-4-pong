# Bugs #

There are three known bugs in All-4-Pong.

  * The game World does not have an explicit way of ending the current game after 3 players lose and are put out of the game. The gui does not currently notify the user when the game ends; it simply continues play with the remaining player bouncing the ball against empty sides. A complete game is successfully played, but never automatically stopped.

  * The Cheat button in ingame.ui does not implement Cheat mode (infinite health for all players). For other test purposes, the button is currently wired to decrement the health of all players by one life.

  * Sometimes the ball will not detect the paddle and score a point even if the paddle is in the way.

# Instructions #

On the Main Menu Screen, players select a difficulty level and then start the game of 4-way pong. The player will enter a Game Court Screen. In the center of the page resides a large, square Game Court surface. Each of the 4 players guards a side of the square by moving a slender, rectangular paddle back and forth in front of their side with their mouse. After the host presses play, a single, small ball will begin traveling from the center of the Game Court in a straight direction.

The object of the game is to earn the highest score of points among all players. Players score points by hitting a ball through another player’s side or being the last player to touch a ball that goes through a player’s side. Each player begins the game with the same level of health, or “lives” (as indicated by a health graphic beside each player’s side). Every time a ball goes through a player’s side, that player’s total heath amount goes down one unit. If the player looses every unit of health, he is out for the game and his paddle disappears. The user can change the difficulty level of an upcoming game by choosing between 3 levels of difficulty. Each increase in difficulty level results in Smarter AI brains.

# Hours Spent #

  * Daniel Recker - 15.5 hours
  * Thomas Wetmore - 26.5 hours
  * Joseph Poschel - 63.5 hours
  * PJ Passalacqua - 28 hours