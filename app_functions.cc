#include "entry_T.h"
#include "app_functions.h"

void createEntryList(Entry* head){
    std::cout << "Creating entry head.." << std::endl;

    std::cout << "Please insert tenant data: ";
    initialize_tenant(head->tenant);

    sleep(2); std::cout << std::endl;

    initialize_appartment(head->appartment);

    sleep(1);

    std::cout << "Entry head created!" << std::endl;


}

// TODO: create scheme first
void addEntry(Entry* head){
    Entry* tmp_head = head;

    while(tmp_head->next_entry != nullptr)
        tmp_head = tmp_head->next_entry;
    

}
