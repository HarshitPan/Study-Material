public class Main {
    public static void main(String[] args) {
        Integer obj_int;
        String str;
        int primitive=10;

        //int to Integer
        obj_int=primitive;
        System.out.println(obj_int);

        //Integer to String
        str=Integer.toString(obj_int);
        System.out.println(str);

        //string to int
        primitive=Integer.parseInt(str);
        System.out.println(primitive);

        //int to String
        str=Integer.toString(primitive);
        System.out.println(str);

        //String to Integer
        obj_int=Integer.parseInt(str);
        System.out.println(primitive);

        //Integer to int
        primitive=obj_int;
        System.out.println(primitive);
    }    
}
