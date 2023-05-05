#ifndef e_T
#define e_T

#include <iostream>
#include <unistd.h>

// TODO: add auto formatting to tenant number and date

// using global current_id, I can make it so that every entry/tenant/appt has a unique id, 
// and everytime a new entry/tenant/appt is added, the global current_id is increased.
extern int CURRENT_TNT_ID;
extern int CURRENT_APPT_ID;
extern int CURRENT_ENTRY_ID;


// Use YYYY/MM/DD format when changing to other data type (int to date)
const int DATE_MAX_CHARS = 10;

const int MAX_CHARACTERS = 150;

// By associating the 1st entry to 1, the next entries will be the previous one plus one
// Meaning that months will be counted from 1 to 12
enum Month {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

struct Tenant {
    int tnt_ID = CURRENT_TNT_ID;
    char full_name[MAX_CHARACTERS];
    char number_info[MAX_CHARACTERS];
};

struct Appartment {
    int appt_ID = CURRENT_APPT_ID;

    char address[MAX_CHARACTERS];
    int tenant_ID;
    double monthly_amount;
    double current_total_amount;
};

struct Entry {
    int entry_ID = CURRENT_ENTRY_ID
    ;
    double payment;
    char date[DATE_MAX_CHARS];
    Month month;
    Appartment appartment;
    Tenant tenant;

    Entry* next_entry;
    Entry* previous_entry;
};



// ---------------- ENTRY FUNCTIONS ---------------- 

void initialize_entry(Entry* e);
void initialize_appartment(Appartment);
void initialize_tenant(Tenant);

#endif