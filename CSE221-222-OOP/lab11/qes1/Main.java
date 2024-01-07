package qes1;

public class Main {
    public static void main(String[] args) {
        Car carOBJ = new Car();
        Motorcycle motorcycleOBJ = new Motorcycle();

        carOBJ.startEngine();
        carOBJ.stopEngine();

        motorcycleOBJ.startEngine();
        motorcycleOBJ.stopEngine();
    }
}
