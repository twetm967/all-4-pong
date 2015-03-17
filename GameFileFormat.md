# Game File Format #

## Format Description ##

The official text file that All-4-Pong will maintain will always have the following format:

  * Current player info
    * Player Top: /username/points/lives-remaining/paddle-x-position/paddle-y-position/paddle-size
    * Player Right: /username/points/lives-remaining/paddle-x-position/paddle-y-position/paddle-size
    * Player Bottom: /username/points/lives-remaining/paddle-x-position/paddle-y-position/paddle-size
    * Player Left: /username/points/lives-remaining/paddle-x-position/paddle-y-position/paddle-size
  * Current ball info
    * /ball-number/ball-hit-indicator/x-position/y-position/last-x-position/last-y-position/speed

## Format Example ##

save-load-example.txt

![http://all-4-pong.googlecode.com/git/save-load-example.png](http://all-4-pong.googlecode.com/git/save-load-example.png)