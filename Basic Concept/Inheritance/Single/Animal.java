package Inheritance.Single;

public class Animal {
    public String name;

    public Animal(){
        name = this.getClass().getSimpleName();
    }
}
