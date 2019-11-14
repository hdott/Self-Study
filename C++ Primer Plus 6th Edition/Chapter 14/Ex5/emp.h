#pragma once
#include <iostream>


// emp.h -- header file for abstr_emp class and children
#include <iostream>
#include <string>

class abstr_emp
{
    private:
        std::string fname;
        std::string lname;
        std::string job;
    public:
        abstr_emp();
        abstr_emp(const std::string & fn, const std::string & ln,
                    const std::string & j);
        virtual void ShowAll() const;
        // labels and shows all data
        virtual void SetAll();
        // prompts user for values
        friend std::ostream & operator<<(std::ostream & os, const abstr_emp & e);
        // just displays first and last name
        virtual ~abstr_emp() = 0;
        // virtual base class
};

abstr_emp::abstr_emp() : fname("fname"), lname("lname"), job("job"){};

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln,
                    const std::string & j) : fname(fn), lname(ln), job(j){};

void abstr_emp::ShowAll() const{
    std::cout << "First Name: " << fname <<  std::endl;
    std::cout << "Last Name: " << lname << std::endl;
    std::cout << "Job: " << job << std::endl;
}

void abstr_emp::SetAll(){
    std::cout << "Enter First Name: ";
    getline(std::cin, fname);
    std::cout << "Enter Last Name: ";
    getline(std::cin, lname);
    std::cout << "Enter Job: ";
    getline(std::cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e){
    os << e.lname << ", " << e.fname << " - " << e.job;

    return os;
}

abstr_emp::~abstr_emp(){};



class employee : public abstr_emp
{
    public:
        employee();
        employee(const std::string & fn, const std::string &, const std::string & j);
        virtual void ShowAll() const;
        virtual void SetAll();
};

employee::employee() : abstr_emp(){};

employee::employee(const std::string & fn, const std::string & ln, const std::string & j) :
                    abstr_emp(fn, ln, j){};
                    
void employee::ShowAll() const{
    abstr_emp::ShowAll();
}

void employee::SetAll(){
    abstr_emp::SetAll();
}



class manager: virtual public abstr_emp
{
    private:
        int inchargeof;
        // number of abstr_emps managed
    protected:
        int InChargeOf() const { return inchargeof; } // output
        int & InChargeOf(){ return inchargeof; }
        // input
    public:
        manager();
        manager(const std::string & fn, const std::string & ln,
                const std::string & j, int ico = 0);
        manager(const abstr_emp & e, int ico);
        manager(const manager & m);
        virtual void ShowAll() const;
        virtual void SetAll();
};

manager::manager() : abstr_emp(), inchargeof(0){};

manager::manager(const std::string & fn, const std::string & ln,
                const std::string & j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico){};

manager::manager(const manager & m) : abstr_emp(m), inchargeof(m.inchargeof){};

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico){};

void manager::ShowAll() const{
    abstr_emp::ShowAll();
    std::cout << "In Charge Of: " << inchargeof << std::endl;
}

void manager::SetAll(){
    abstr_emp::SetAll();
    std::cout << "Enter In Charge Of: ";
    std::cin >> inchargeof;
    std::cin.get();
}



class fink: virtual public abstr_emp
{
    private:
        std::string reportsto;
        // to whom fink reports
    protected:
        const std::string ReportsTo() const { return reportsto; }
        std::string & ReportsTo(){ return reportsto; }
    public:
        fink();
        fink(const std::string & fn, const std::string & ln,
            const std::string & j, const std::string & rpo);
        fink(const abstr_emp & e, const std::string & rpo);
        fink(const fink & e);
        virtual void ShowAll() const;
        virtual void SetAll();
};

fink::fink() : abstr_emp(){};

fink::fink(const std::string & fn, const std::string & ln,const std::string & j,
             const std::string & rpo) : abstr_emp(fn, ln, j), reportsto(rpo){};

fink::fink(const abstr_emp & e, const std::string & rpo) : abstr_emp(e), reportsto(rpo){};

fink::fink(const fink & e) : abstr_emp(e), reportsto(e.reportsto){};

void fink::ShowAll() const{
    abstr_emp::ShowAll();
    std::cout << "Reports To: " << reportsto << std::endl;
}

void fink::SetAll(){
    abstr_emp::SetAll();
    std::cout << "Enter Reports To: ";
    getline(std::cin, reportsto);
}



class highfink: public manager, public fink // management fink
{
    public:
        highfink();
        highfink(const std::string & fn, const std::string & ln,
                const std::string & j, const std::string & rpo,
                int ico);
        highfink(const abstr_emp & e, const std::string & rpo, int ico);
        highfink(const fink & f, int ico);
        highfink(const manager & m, const std::string & rpo);
        highfink(const highfink & h);
        virtual void ShowAll() const;
        virtual void SetAll();
};

highfink::highfink() : abstr_emp(), manager(), fink(){};

highfink::highfink(const std::string & fn, const std::string & ln,
                const std::string & j, const std::string & rpo,
                int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico),
                        fink(fn, ln, j, rpo){};

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico) : abstr_emp(e),
                    manager(e, ico), fink(e, rpo){};

highfink::highfink(const fink & f, int ico) : abstr_emp(f), manager(f, ico),
                                            fink(f){};

highfink::highfink(const manager & m, const std::string & rpo) : abstr_emp(m),
                                    manager(m), fink(m, rpo){};

highfink::highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h){};

void highfink::ShowAll() const{
    abstr_emp::ShowAll();
    std::cout << "In Charge Of: " << manager::InChargeOf() << std::endl;
    std::cout << "Reports To: " << fink::ReportsTo() << std::endl;
}

void highfink::SetAll(){
    abstr_emp::SetAll();
    std::cout << "Enter In Charge Of: ";
    std::cin >> manager::InChargeOf();
    std::cin.get();
    std::cout << "Enter Reports To: ";
    getline(std::cin, fink::ReportsTo());
}