package qes1;

public class Car extends Vehicle {
    @Override
    void startEngine() {
        System.out.println("Start CAR Engine!!");
    }
    @Override
    void stopEngine() {
        System.out.println("Stop CAR Engine!!");
    }
}
