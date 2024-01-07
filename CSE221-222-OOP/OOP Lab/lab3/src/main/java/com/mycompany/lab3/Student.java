/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.lab3;

/**
 *
 * @author Borna Bhowmik
 */
public class Student {

    String name;
    int age;
    static String uv = "Metropolitan University";

    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void printInfo() {
        System.out.println(name);
        System.out.println(age);
        System.out.println(uv);
    }

    private void changeAge(int age) {
        this.age = age;
    }

    public int getAge(int age) {
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
