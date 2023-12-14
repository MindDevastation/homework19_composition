#ifndef CAR_H
#define CAR_H

#include<QString>


class car
{
    QString type;
public:
    car();

    void setType(QString newType){type = newType;}
    QString getType(){return type;}

    void setParam(QString type, double power, QString color, int amount){
        setType(type);
        engine.setPower(power);
        body.setColor(color);
        wheel.setAmount(amount);
    }

    double getPower(){
        return engine.getPower();
    }

    QString getColor(){
        return body.getColor();
    }

    int getAmount(){
        return wheel.getAmount();
    }

    car(const car &other){
        this->type = other.type;
        this->body = other.body;
        this->engine = other.engine;
        this->wheel = other.wheel;
    }

private:
    class engine{
        double power;
    public:
        void setPower(double newPower){
            power = newPower;
        }

        double getPower(){
            return power;
        }
    };

    class body{
        QString color;
    public:
        void setColor(QString newColor){
            color = newColor;
        }

        QString getColor(){
            return color;
        }
    };

    class wheel{
        int amount;
    public:
        void setAmount(int newAmount){
            amount = newAmount;
        }

        int getAmount(){
            return amount;
        }

    };

    engine engine;
    body body;
    wheel wheel;
};

#endif // CAR_H
