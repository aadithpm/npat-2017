import java.util.*;
public class Printing{
 public static void main(String args[])
 {
  List<String> words = new ArrayList<>(); 
  Scanner inp = new Scanner(System.in);
   while(true){
   	String nextLine = inp.nextLine();
     if(nextLine.equals("")){
     	break;
     }
     words.add(nextLine);
   }
   int cut = words.size()/2;
   String word;
   for(int i = cut; i < words.size(); i++)
   {
     System.out.println(words.get(i));
   }
   for(int i = 0; i < cut; i++)
   {
     System.out.println(words.get(i));
   }
 }
}
