public class Main {
    public static void main(String[] args) {
        Float obj_int;
        String str;
        float primitive=10.345f;

        //float to Float
        obj_int=primitive;
        System.out.println(obj_int);

        //Float to String
        str=Float.toString(obj_int);
        System.out.println(str);

        //string to float
        primitive=Float.parseFloat(str);
        System.out.println(primitive);

        //float to String
        str=Float.toString(primitive);
        System.out.println(str);

        //String to Float
        obj_int=Float.parseFloat(str);
        System.out.println(primitive);

        //IFloat to float
        primitive=obj_int;
        System.out.println(primitive);
    }    
}
