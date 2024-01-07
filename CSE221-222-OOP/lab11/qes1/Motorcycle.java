package qes1;

public class Motorcycle extends Vehicle {
    @Override
    void startEngine() {
        System.out.println("Start MOTORCYCLE Engine!!");
    }

    @Override
    void stopEngine() {
        System.out.println("Stop MOTORCYCLE Engine!!");
    }
}