package Abstraction;

public abstract class Shape {
    public abstract double getArea();

    public void printDetails() {
        System.out.println("Shape : " + this.getClass().getSimpleName());
        System.out.println("Area : " + getArea());
    }
}
