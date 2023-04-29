#include "entry_T.h"
#include "app_functions.h"

void createEntryList(Entry* head){
    std::cout << "Creating entry list.." << std::endl;

    std::cout << "Please insert tenant data: ";
    initialize_tenant(head->tenant);

    // sleep(2);

    initialize_appartment(head->appartment);

}

