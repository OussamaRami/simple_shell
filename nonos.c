#include <stdio.h>
#include <stdlib.h>

typedef struct {
   int day;
   int month;
   int year;
} Date;

typedef struct {
   char *title;
   Date start_date;
   Date end_date;
} Event;

Event *create_event(char *title, int start_day, int start_month, int start_year, int end_day, int end_month, int end_year) {
   Event *new_event = (Event *) malloc(sizeof(Event));

   new_event->title = title;
   new_event->start_date.day = start_day;
   new_event->start_date.month = start_month;
   new_event->start_date.year = start_year;
   new_event->end_date.day = end_day;
   new_event->end_date.month = end_month;
   new_event->end_date.year = end_year;

   return new_event;
}

void print_event(Event *event) {
   printf("Event: %s\n", event->title);
   printf("Start Date: %d/%d/%d\n", event->start_date.day, event->start_date.month, event->start_date.year);
   printf("End Date: %d/%d/%d\n", event->end_date.day, event->end_date.month, event->end_date.year);
}

int main() {
   Event *event1 = create_event("My Birthday", 22, 7, 1990, 22, 7, 1990);
   print_event(event1);

   free(event1);

   return 0;
}
