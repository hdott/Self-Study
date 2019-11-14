#pragma once
#include "cd.h"


class Classic : public Cd{
    private:
        char *primaryWork;

    public:
        Classic(const char *pw, const char *s1, const char *s2, int n, double x);
        Classic(const Classic & c);
        Classic() : Cd() { primaryWork = nullptr;};
        virtual ~Classic();
        virtual void Report() const;
        virtual Classic & operator=(const Classic & c);
};