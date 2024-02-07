import java.util.Scanner;

public class ip_address_validation {
    public static boolean validate(String ip){
        
        String[] subs = ip.split("[.]");

        if(subs.length != 4){
            return false;
        }

        for(String sub:subs){
            
            for(int i=0;i<sub.length();i++){
                if(sub.charAt(i)>='a' && sub.charAt(i)<='z' || sub.charAt(i)>='A' && sub.charAt(i)<='Z'){
                    return false;
                }
            }
            
            try {
                int isub = Integer.parseUnsignedInt(sub);
                if(isub>=0 && isub<=255){
                    continue;
                }
                else {
                    return false;
                }
            } catch (NumberFormatException e) {
                e.printStackTrace();
            }
        }

        return true;
    }


    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        String ip = input.nextLine();
        input.close();

        System.out.println(validate(ip));
    }
}
