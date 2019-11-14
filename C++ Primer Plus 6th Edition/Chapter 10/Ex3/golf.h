#pragma once


class Golf{
    private:
        static const int LEN = 40;
        char fullname[LEN];
        int handicap;

    public:
        Golf(const char* full_name = "init", int handicap = 1);

        int setgolf();
        void changehandicap(int hc);
        void showgolf() const;
};