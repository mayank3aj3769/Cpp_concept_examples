#include<iostream>
#include<vector>
#include<string>
#include<memory>

class Car{
    protected:
        std::string licensePlate;
        std::string brand;
    public:
        Car(const std::string& license,const std::string& brand) :licensePlate(license),brand(brand){}
        virtual ~Car()=default;

        virtual int getPassengerCapacity() const=0;

        std::string getLicensePlate() const { return licensePlate;}

        std::string getBrand() const { return brand; }
};

class SUV :public Car{
    private:
            bool hasThirdRowSeat;
    public:
        SUV(const std::string& license,const std::string& brand,bool hasThirdRowSeat) 
        :Car(license,brand) , hasThirdRowSeat(hasThirdRowSeat){}

        int getPassengerCapacity() const override{
            return hasThirdRowSeat ?8:5;
        }

};

class Sedan : public Car {
    private:
            bool hasSportPackage;
    public:
        Sedan(const std::string& license, const std::string& brand ,bool hasSportPackage)
            :Car(license,brand),hasSportPackage(hasSportPackage) {}

        int getPassengerCapacity() const override{
            return 5;
        } 
};

class CarRental {
    private:
            std::vector<std::unique_ptr<Car>>cars;
    public:
        void addCar(std::unique_ptr<Car> car){
            cars.push_back(std::move(car));
        }

        void listCars(){
            for(const auto& car:cars){
                std::cout<<"Brand "<<car->getBrand()
                         <<"License"<<car->getLicensePlate()
                         <<"Passenger Capacity: "<<car->getPassengerCapacity()
                         <<std::endl;
            }
        }
};
