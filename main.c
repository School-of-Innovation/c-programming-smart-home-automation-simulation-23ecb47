/*
 * 🚨 WARNING: CHALLENGE MODE ACTIVATED 🚨
 * 
 * 1️⃣ Sit back, take a deep breath, and **THINK**.
 * 2️⃣ For the next **10 minutes**, avoid using **Gen AI, ChatGPT, or any shortcuts**.
 * 3️⃣ Trust your **brain**—you’re smarter than you think!
 * 4️⃣ Consider yourself a **LOSER** if you cheat. Seriously, promise yourself you won't. 😤
 * 5️⃣ If you solve it on your own, **you WIN** and level up as a true programmer and come and meet me ! 
 * 
 * 
 * 💡 Remember: The best coders aren’t the ones who copy-paste. They are the ones who **struggle, think, fail, and then succeed.** 
 *    
 * Now, write your code! You got this! 💪🔥
 */
#include <stdio.h>
#define MAX_ROOMS 5
int lights[MAX_ROOMS], temps[MAX_ROOMS], motions[MAX_ROOMS], locks[MAX_ROOMS];
void initializeSystem();
void displayMenu();
void controlLights();
void readTemperature();
void detectMotion();
void securitySystem();
void analyzeHouseStatus();
int main() {
    int choice;
    initializeSystem();
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                controlLights();
                break;
            case 2:
                readTemperature();
                break;
            case 3:
                detectMotion();
                break;
            case 4:
                securitySystem();
                break;
            case 5:
                analyzeHouseStatus();
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
void initializeSystem() {
    for (int i = 0; i < MAX_ROOMS; i++) {
        lights[i] = 0;  // Lights OFF
        temps[i] = 22 + (i % 5);  // Some default temperature values
        motions[i] = 0;  // No motion detected
        locks[i] = 1;  // Doors locked
    }
    printf("System initialized with %d rooms.\n", MAX_ROOMS);
}
void displayMenu() {
    printf("\n===== Smart Home Menu =====\n"
           "1. Toggle Light\n"
           "2. Read Temperature\n"
           "3. Check Motion Sensor\n"
           "4. Lock/Unlock Security System\n"
           "5. House Status Summary\n"
           "6. Exit\n");
}
void controlLights() {
    int room;
    printf("Enter room number (1-%d) to toggle light: ", MAX_ROOMS);
    scanf("%d", &room);
    switch (room) {
        case 1: case 2: case 3: case 4: case 5:
            lights[room - 1] = !lights[room - 1];
            printf("Light in Room %d is now %s.\n", room, lights[room - 1] ? "ON" : "OFF");
            break;
        default:
            printf("Invalid room number!\n");
    }
}
void readTemperature() {
    int room;
    printf("Enter room number (1-%d) to read temperature: ", MAX_ROOMS);
    scanf("%d", &room);
    switch (room) {
        case 1: case 2: case 3: case 4: case 5:
            printf("Room %d Temperature: %d°C\n", room, temps[room - 1]);
            break;
        default:
            printf("Invalid room number!\n");
    }
}
void detectMotion() {
    int room;
    printf("Enter room number (1-%d) to check motion: ", MAX_ROOMS);
    scanf("%d", &room);
    switch (room) {
        case 1: case 2: case 3: case 4: case 5:
            printf("Motion in Room %d: %s\n", room, motions[room - 1] ? "Detected" : "No Motion");
            break;
        default:
            printf("Invalid room number!\n");
    }
}
void securitySystem() {
    int room;
    printf("Enter room number (1-%d) to lock/unlock: ", MAX_ROOMS);
    scanf("%d", &room);
    switch (room) {
        case 1: case 2: case 3: case 4: case 5:
            locks[room - 1] = !locks[room - 1];
            printf("Room %d is now %s.\n", room, locks[room - 1] ? "Locked" : "Unlocked");
            break;
        default:
            printf("Invalid room number!\n");
    }
}
void analyzeHouseStatus() {
    printf("\nHouse Status Summary:\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        printf("Room %d: Light %s, Temp %d°C, Motion: %s, Security: %s\n",
               i + 1, lights[i] ? "ON" : "OFF", temps[i],
               motions[i] ? "Detected" : "No Motion",
               locks[i] ? "Locked" : "Unlocked");
    }
}

