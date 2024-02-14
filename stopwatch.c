#include <stdio.h>
#include <unistd.h> 
//inbuilt delay function {usleep} in this header file that gives us the delay in microseconds

//microseconds = 10 to the power -6 seconds.


int main(){

	int hours =0 , minutes = 0, seconds =55, milliseconds=0 ;
	int timer = 0;

	while(1){
		
		printf("\r\t%.2d HOURS ::: %.2d MINUTES ::: %.2d seconds", hours, minutes, seconds);

		fflush(stdout);
		usleep(1000);

		++milliseconds;

		if (milliseconds == 1000){
			milliseconds =0;
			seconds++;
		}

		if(seconds == 60){
			milliseconds = 0;
			seconds = 0;
			++minutes;
			++timer;
		}

		if (minutes == 60){
			
			milliseconds = 0;
			seconds = 0;
			minutes=0;
			++hours;	
		}

		if (timer == 25){
			
			printf("\nPOMODORO COMPLETE");
			break;
		}

	}
}
