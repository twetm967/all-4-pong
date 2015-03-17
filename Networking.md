# Introduction #

The client will not do processing for the game. It will send to the client  the player name, paddle ID, and the x or y coordinates (depending on which side of the screen they are on) of the players mouse pointer every clock tick.

The server in return will play the game and send all of the information need to repaint the updated screen after the server has updated the world.  The server will be more like a host so a person will play the game as well as host the game.

Upon receiving the data, the client will parse the information and display the screen according to the information sent by the server.

client example. // /Player1/ID/x coordinate/y coordinate

server example: // 0/ball1/x/y  1/0/player1/x/y/points/health  player2/etc...