#pragma once

namespace SALES{
    class Sales{
        private:
            static const int QUARTERS = 4;
            double sales[QUARTERS]{0},
                    average{0},
                    max{0},
                    min{0};
        
        public:
            Sales(){};
            Sales(const double ar[], int n);

            void setSales();
            void showSales() const;
    };
}

