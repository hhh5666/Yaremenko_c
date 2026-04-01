#include<stdio.h>

enum day
{
	SUN,
	MON,
	TUE,
	WED,
	THU,
	FRI,
	SAT
};

struct event
{
	char name[56];
	enum day date;
};

void num_day_out(enum day today)
{
	switch (today) {
		case SUN:
			printf("today: sunday");
			break;
		case MON:
			printf("today: monday");
			break;
		case TUE:
			printf("today: tuesday");
			break;
		case WED:
			printf("today: wednesday");
			break;
		case THU:
			printf("today: thursday");
			break;
		case FRI:
			printf("today: friday");
			break;
		case SAT:
			printf("today: saturday");
			break;
		default:
			printf("today: NULL");
	}
}

int main()
{
	//enum day my_day = WED;
	
	//num_day_out(my_day);

	struct event my_event = {"birthday", SUN};

	num_day_out(my_event.date);
	return 0;
}
