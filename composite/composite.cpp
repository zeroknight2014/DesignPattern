//
// Created by zeroknight on 2016/12/9.
//

#include "composite.h"

int main()
{
    Company* com_root = new ConcreteCompany("ParentCompany");
    Company* leaf1 = new FinanceDepartment("ParentFinance");
    Company* leaf2 = new HRDepartment("ParentHR");
    com_root->Add(leaf1); com_root->Add(leaf2);

    Company* com_leaf = new ConcreteCompany("ChildCompanyA");
    Company* leaf3 = new FinanceDepartment("ChildFinanceA");
    Company* leaf4 = new HRDepartment("ChildHRA");
    com_leaf->Add(leaf3); com_leaf->Add(leaf4);

    com_root->Add(com_leaf);
    com_root->Show(1);
    return 0;
}