/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package task1;

/**
 *
 * @author Borna Bhowmik
 */
public class Main{
    public static void main(String[] args) {
        Car carOBJ = new Car();
        Motorcycle motorcycleOBJ = new Motorcycle();

        carOBJ.startEngine();
        carOBJ.stopEngine();

        motorcycleOBJ.startEngine();
        motorcycleOBJ.stopEngine();
    }
}
