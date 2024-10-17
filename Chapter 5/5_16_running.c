# include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int main(){
    double distk, distm;    // distance of run(km and mile)
    double rate;            // average velocity
    int min, sec;           // running time(min and sec)
    int time;               // running time(sec)
    double mtime;           // time of running for 1 mile(sec)
    int mmin, msec;         // time of running for 1 mile(min and sec)

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);

    time = S_PER_M*min + sec;       // time invert to sec
    distm = M_PER_K*distk;          // km invert to mile
    rate = distm/time * S_PER_H;    // mile/sec * sec/hour = mile/hour
    mtime = (double)time/distm;     // time/distance = time of running for 1 mile
    mmin = (int)mtime / S_PER_M;    // calculate min
    msec = (int)mtime % S_PER_M;    // calculate sec

    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n", distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, ", mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n", msec, rate);

    return 0;
}