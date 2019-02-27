# makechange-wasm
This is an application that takes an amount of change as input and tells the user how many dimes, nickels and pennies it's equal to.  It was written in C++ and then ported to Web Assembly (WASM).  

There's a problem in the application where, as it takes input from a popup dialogue box, it'll continue asking for input until you get it to not produce any more messages.  This particular program requires input only once, so after that feel free to check the checkbox.  
