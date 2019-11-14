#pragma once


class Plorg{
    private:
        static const int LEN = 20;
        char plorg_name[LEN];
        int cont_index;

    public:
        Plorg(const char *name = "Plorga", int ci=50);

        void changeCI(int ci){this->cont_index = ci;};
        void printPlorg() const;
};