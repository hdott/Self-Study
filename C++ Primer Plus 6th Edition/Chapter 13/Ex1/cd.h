// base class
class Cd { // represents a CD disk
    private:
        char performers[50];
        char label[20];
        int selections;
        // number of selections
        double playtime; // playing time in minutes
    public:
        Cd(const char * s1, const char * s2, int n, double x);
        Cd(const Cd & d);
        Cd(){};
        virtual ~Cd();
        virtual void Report() const; // reports all CD data
        virtual Cd & operator=(const Cd & d);
};