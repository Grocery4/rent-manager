#include "entry_T.h"

int CURRENT_TNT_ID = 0;
int CURRENT_APPT_ID = 0;
int CURRENT_ENTRY_ID = 0;

void initialize_entry(Entry* e){
    e->next_entry = nullptr;
    e->previous_entry= nullptr;
}


void initialize_tenant(Tenant tenant){
    std::cout << "Creating new tenant.." << std::endl;

    tenant.tnt_ID = CURRENT_TNT_ID;
    CURRENT_TNT_ID++;

    std::cout << "Insert tenant info: " << std::endl;

    std::cout << "TENANT ID: " << tenant.tnt_ID << std::endl;
    std::cout << "FULL NAME: "; std::cin.getline(tenant.full_name, MAX_CHARACTERS);
    std::cout << "CONTACT NUMBER: "; std::cin.getline(tenant.number_info, MAX_CHARACTERS);
}

// Using tenant's unique ID as a way to link them to their appartment means that the user
// will have to have a list of tenants visible during the linking
void initialize_appartment(Appartment appartment){
    std::cout << "Creating new appartment.." << std::endl;

    appartment.appt_ID = CURRENT_APPT_ID;
    CURRENT_APPT_ID++;

    appartment.current_total_amount = 0;

    std::cout << "Insert appartment info: " << std::endl;
    std::cout << "ADDRESS: "; std::cin.getline(appartment.address, MAX_CHARACTERS);
    std::cout << "MONTHLY AMOUNT: "; std::cin >> appartment.monthly_amount;    
    std::cout << "CURRENT TENANT's ID: "; std::cin >> appartment.tenant_ID;    
    
}