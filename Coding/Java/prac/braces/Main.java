class Braces
{
    int count[]=new int[3],check=-1,pos=0,counts=0,countc=0,countb=0;
    public boolean check(String s)
    {
        System.out.println(s);
        boolean exp=true;
        for(int i=0;i<s.length();i++)
        {
            counts=0;
            countc=0;
            countb=0;
            int j=0;
            if(s.charAt(i)=='(')
            {
                counts++;
                int l=0;
                for(j=i+1;j<s.length();j++) if(s.charAt(j)==')'){counts--;if(counts==0)break;} else if(s.charAt(j)=='(') counts++;
                if(j==s.length()) return false;
                if(j==i+1) exp=true;
                else 
                {
                    exp=true;
                    char[] temp=new char[j-i-1];
                    for(int k=i+1;k<=j-1;k++,l++)
                        temp[l]=s.charAt(k);
                if(l!=0)
                    if(s.length()!=2) exp=check(new String(temp));
                    
                    if(exp==false) return false;
                    
                }
            }
            else if(s.charAt(i)=='{')
            {
                countc++;
                int l=0;
                for(j=i+1;j<s.length();j++) if(s.charAt(j)=='}'){countc--;if(countc==0)break;} else if(s.charAt(j)=='{') countc++;
                if(j==s.length()) return false;
                if(j==i+1) exp=true;
                else 
                {
                    exp=true;
                    char[] temp=new char[j-i-1];
                    for(int k=i+1;k<=j-1;k++,l++)
                        temp[l]=s.charAt(k);
            
            if(s.length()!=2) exp=check(new String(temp));
                    if(exp==false) return false;
                }
            }
            else if(s.charAt(i)=='[')
            {int l=0;
            countb++;
                for(j=i+1;j<s.length();j++) if(s.charAt(j)==']'){countb--;if(countb==0)break;} else if(s.charAt(j)=='[') countb++;
                if(j==s.length()) return false;
                if(j==i+1) exp=true;
                else 
                {
                    exp=true;
                    char[] temp=new char[j-i-1];
                 
                    for(int k=i+1;k<=j-1;k++,l++)
                        temp[l]=s.charAt(k);
                    if(s.length()!=2)    exp=check(new String(temp));
                    if(exp==false) return false;
                }
            }
            else if((s.charAt(i)=='}' || s.charAt(i)==']' || s.charAt(i)==')')  ) { return false;}
            i=j;
        }
        
        return exp;
    }
}
class Main
{
    public static void main(String args[])
    {
        Braces obj=new Braces();
        System.out.println(obj.check("(([]){})"));
    }
}
