Very Simple Terminal StopWatch Program.

// This is a C file that uses the <stdio.h> and <unistd.h> header files.
// The code provided is in C, so don't forget to compile it.


---Explanations---

// the fflush(stdout) is used to remove the quick flickering of the cursor upon display.
// the usleep() function in the <unistd.h> header file is an inbuilt delay function, that accepts input in microseconds.
// the reason that we didn't directly increment seconds was that usleep() accepts an input of LESS than 1000000, hence making the millisecond term necessary.
// the time variable holds the value of minutes for which you want the pomodoro to run. You can set it to whatever you want (even hours or seconds), just don't forget to update the proper increment value places then.

:) hope the code helps you
