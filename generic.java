import java.lang.*;

class Arithematic <T>
{
   public T Addition (T No1, T No2)
   {
     T Ans;

     if(No1 instanceof Integer && No2 instanceof Integer)
     {
        return (T)(Integer)((Integer)No1 + (Integer)No2);
     }
     else if(No1 instanceof Float && No2 instanceof Float)
     {
        return (T)(Float)((Float)No1 + (Float)No2);
     }
     else if(No1 instanceof Double && No2 instanceof Double)
     {
        return (T)(Double)((Double)No1 + (Double)No2);
     }
     else
     {
        return null;
     }
   }
}

class Generic
{
   public static void main(String arg[])
   {
      Arithematic <Integer> obj = new Arithematic<Integer>();
      Integer ret = 0;
      ret = obj.Addition(10,11);
      System.out.println("Addition is :"+ret);
   }

}