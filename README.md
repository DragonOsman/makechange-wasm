# makechange-wasm
This is an application that takes an amount of money within the range (0-100) as input and tells the user how much change is due in dimes and pennies.  It was written in C++ and then ported to Web Assembly (WASM).  

It takes input from a popup dialogue box in the JavaScript glue code generated by Emscripten and there's a problem in the app due to which it'll continue asking for input until you get it to not produce any more messages (click the checkbox in the dialogue box).  This particular program requires input only once, so after that feel free to check the checkbox.  
