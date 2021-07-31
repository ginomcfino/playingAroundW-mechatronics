#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(25);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 2s
  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_RIGHT_GUI);
  delay(10);
  Keyboard.press(' ');
  delay(10);
  Keyboard.releaseAll();

  delay(700);

  typeKey('T');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey('r');
  delay(20);
  typeKey('m');
  delay(20);
  typeKey('i');
  delay(20);
  typeKey('n');
  delay(20);
  typeKey('a');
  delay(20);
  typeKey('l');
  delay(20);
  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('f');
  delay(100);
  Keyboard.releaseAll();

  delay(1500);
  
  typeKey('s');
  delay(20);
  typeKey('a');
  delay(20);
  typeKey('y');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('T');
  delay(20);
  typeKey('h');
  delay(20);
  typeKey('i');
  delay(20);
  typeKey('s');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('i');
  delay(20);
  typeKey('s');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('a');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('p');
  delay(20);
  typeKey('u');
  delay(20);
  typeKey('b');
  delay(20);
  typeKey('l');
  delay(20);
  typeKey('i');
  delay(20);
  typeKey('c');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('s');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey('r');
  delay(20);
  typeKey('v');
  delay(20);
  typeKey('i');
  delay(20);
  typeKey('c');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('a');
  delay(20);
  typeKey('n');
  delay(20);
  typeKey('n');
  delay(20);
  typeKey('o');
  delay(20);
  typeKey('u');
  delay(20);
  typeKey('n');
  delay(20);
  typeKey('c');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey('m');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey('n');
  delay(20);
  typeKey('t');
  delay(20);
  typeKey(',');
  delay(20);
  typeKey('y');
  delay(20);
  typeKey('o');
  delay(20);
  typeKey('u');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('a');
  delay(20);
  typeKey('r');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('a');
  delay(20);
  typeKey('b');
  delay(20);
  typeKey('o');
  delay(20);
  typeKey('u');
  delay(20);
  typeKey('t');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('t');
  delay(20);
  typeKey('o');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('g');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey('t');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('h');
  delay(20);
  typeKey('a');
  delay(20);
  typeKey('c');
  delay(20);
  typeKey('k');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey('d');
  delay(20);
  typeKey('.');
  delay(20);
  typeKey(KEY_RETURN);

  delay(3000);
  
  typeKey('c');
  delay(20);
  typeKey('d');
  delay(20);
  typeKey(' ');
  delay(20);
  typeKey('D');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey('s');
  delay(20);
  typeKey('k');
  delay(20);
  typeKey('t');
  delay(20);
  typeKey('o');
  delay(20);
  typeKey('p');
  delay(20);
  typeKey('/');
  delay(20);
  typeKey(KEY_RETURN);
  delay(50);

  delay(200);

  typeKey('l');
  delay(20);
  typeKey('s');
  delay(20);
  typeKey(KEY_RETURN);
  delay(50);

  delay(200);

  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('3');
  Keyboard.releaseAll();
  delay(300);

  Keyboard.print("say hahahahaha Iiiiiii got you, tech team best bitches");
  delay(100);
  typeKey(KEY_RETURN);

  delay(500);

  typeKey('o');
  delay(20);
  typeKey('p');
  delay(20);
  typeKey('e');
  delay(20);
  typeKey('n');
  delay(20);
  typeKey(' ');
  delay(20);

  //YouTube link
  Keyboard.print("https://www.youtube.com/watch?v=d-diB65scQU");
  delay(100);
  typeKey(KEY_RETURN);
  
  delay(5000);

  Keyboard.releaseAll();
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('n');
  Keyboard.releaseAll();

  delay(1200);
  
  Keyboard.print("https://i.kym-cdn.com/entries/icons/original/000/021/807/4d7.png");
  typeKey(KEY_RETURN);

  delay(4000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('w');
  Keyboard.releaseAll();
  
  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
