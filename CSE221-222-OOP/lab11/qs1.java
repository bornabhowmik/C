abstract class Vehicle {
    abstract void startEngine();
    abstract void stopEngine();
}

class Car extends Vehicle {
    @Override
    void startEngine() {
        System.out.println("Start CAR Engine!!");
    }
    @Override
    void stopEngine() {
        System.out.println("Stop CAR Engine!!");
    }
}

class Motorcycle extends Vehicle {
    @Override
    void startEngine() {
        System.out.println("Start MOTORCYCLE Engine!!");
    }

    @Override
    void stopEngine() {
        System.out.println("Stop MOTORCYCLE Engine!!");
    }
}

public class qs1 {
    public static void main(String[] args) {
        Car carOBJ = new Car();
        Motorcycle motorcycleOBJ = new Motorcycle();

        carOBJ.startEngine();
        carOBJ.stopEngine();

        motorcycleOBJ.startEngine();
        motorcycleOBJ.stopEngine();
    }
}