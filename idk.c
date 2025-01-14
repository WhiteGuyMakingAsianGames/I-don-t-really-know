#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ask_question() {
    printf("Hello! I'm not quite sure what I'm supposed to do here.\n");
    while (1) {
        printf("Can you help me figure out what to do?\n");
        printf("Should I:\n");
        printf("1. Organize files?\n");
        printf("2. Send emails?\n");
        printf("3. Make coffee?\n");
        printf("4. Schedule meetings?\n");
        printf("5. Exit?\n");

        int choice;
        printf("Please enter the number of your choice: ");
        scanf("%d", &choice);

        srand(time(NULL));
        int response_index = rand() % 4;

        switch (choice) {
            case 1:
                switch (response_index) {
                    case 0:
                        printf("Okay, organizing files... Wait, which files should I organize?\n");
                        break;
                    case 1:
                        printf("Sure, I'll organize the files. By the way, do you think pineapple belongs on pizza?\n");
                        break;
                    case 2:
                        printf("Organizing files... but first, did you know that the earth is not flat?\n");
                        break;
                    case 3:
                        printf("Files organized! Just kidding, I forgot what I was doing.\n");
                        break;
                }
                break;
            case 2:
                switch (response_index) {
                    case 0:
                        printf("Sending emails... Oh no, I don't have any email addresses. Could you provide them?\n");
                        break;
                    case 1:
                        printf("Emails are on the way! By the way, have you seen my stapler?\n");
                        break;
                    case 2:
                        printf("Sending emails... but what if we used carrier pigeons instead?\n");
                        break;
                    case 3:
                        printf("Emails sent! Wait, who was I supposed to email again?\n");
                        break;
                }
                break;
            case 3:
                switch (response_index) {
                    case 0:
                        printf("Making coffee... Do you prefer regular or decaf?\n");
                        break;
                    case 1:
                        printf("Coffee coming right up! Do you want some donuts with that?\n");
                        break;
                    case 2:
                        printf("Brewing coffee... but what if I spill it on my keyboard?\n");
                        break;
                    case 3:
                        printf("Coffee is ready! Or maybe it's just water with some color.\n");
                        break;
                }
                break;
            case 4:
                switch (response_index) {
                    case 0:
                        printf("Scheduling meetings... Who should I invite? What time works best for you?\n");
                        break;
                    case 1:
                        printf("Meetings scheduled! But wait, why do we have meetings again?\n");
                        break;
                    case 2:
                        printf("Setting up meetings... but did you know that cats have five toes on their front paws?\n");
                        break;
                    case 3:
                        printf("Meetings are all set! Or maybe I just booked a vacation.\n");
                        break;
                }
                break;
            case 5:
                printf("Alright, I'll exit now. Have a great day!\n");
                return;
            default:
                switch (response_index) {
                    case 0:
                        printf("I'm not sure what you mean. Could you clarify?\n");
                        break;
                    case 1:
                        printf("Huh? I'm a bit lost, can you explain that again?\n");
                        break;
                    case 2:
                        printf("What was that? I think I was daydreaming.\n");
                        break;
                    case 3:
                        printf("I don't understand. Maybe I need more coffee.\n");
                        break;
                }
                break;
        }
    }
}

int main() {
    ask_question();
    return 0;
}
