#pragma once
#include <cstring>


class DMAabc{
    private:
        char * label;
        int rating;
    
    public:
        DMAabc(const char * l = "null", int r = 0) : rating(r){
            label = new char[strlen(l)+1];
            strcpy(label, l);
        };
        DMAabc(const DMAabc & dma){
            label = new char[std::strlen(dma.label) + 1];
            std::strcpy(label, dma.label);
            rating = dma.rating;
        }
        char* GetLabel() const {return label;};
        int GetRating() const {return rating;};
        virtual ~DMAabc(){
            delete[] label;
        };
        virtual void View() const = 0;
        DMAabc & operator=(const DMAabc & dma){
            if (this == &dma)
                return *this;
            delete [] label;
            label = new char[std::strlen(dma.label) + 1];
            std::strcpy(label, dma.label);
            rating = dma.rating;
            return *this;
        }
        // friend std::ostream & operator<<(std::ostream & os, const DMAabc & dma)
        // {
        //     os << "Label: " << dma.label << std::endl;
        //     os << "Rating: " << dma.rating << std::endl;
        //     return os;
        // }
};