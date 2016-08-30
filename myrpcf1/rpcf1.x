struct echos {
char message[100];
};
program ECHO_PROG{
	version ECHO_VERS{
		struct echos get_echo(echos) = 1;
	} = 1;
} = 0x31111112;


struct sorts {
int sa[100];
int size;
};
program SORT_PROG{
	version SORT_VERS{
		struct sorts get_sort(sorts) = 1;
	} = 2;
} = 0x31111122;

struct dirs {
char filearr1[25];
char filearr2[25];
char filearr3[25];
char filearr4[25];
char filearr5[25];
char filearr6[25];
char filearr7[25];
char filearr8[25];
char filearr9[25];
char filearr10[25];
char filearr11[25];
char filearr12[25];
char filearr13[25];
char filearr14[25];
char filearr15[25];
char filearr16[25];
int count;
};
program readdirp_PROG{
	version readdirp_VERS{
		struct dirs get_readdirp(dirs) = 1;
	} = 3;
} = 0x31111222;


struct timeint {
int year;
int month;
int day;
int hour;
int min;
int sec;
};
program TIME_PROG{
	version TIME_VERS{
		struct timeint get_time(timeint) = 1;
	} = 4;
} = 0x31112222;


struct arrs {
int a1[2];
int a2[2];
int b1[2];
int b2[2];
int c1[2];
int c2[2];
};
program MATMUL_PROG{
	version MATMUL_VERS{
		struct arrs get_matmul(arrs) = 1;
	} = 5;
} = 0x31122222;