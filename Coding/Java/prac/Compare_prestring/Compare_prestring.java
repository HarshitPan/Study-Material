class Compare_prestring
{
    String s[];
    Compare_prestring()
    {
        s=new String[3];
        s[0]="flawer";
        s[1]="flow";
        s[2]="flownht";
    }
    String search()
    {
        boolean first=true;
        int len=0;
        String search=new String();
        for(int i=1;i<3;i++)
        {
            boolean flag=false;
            search="";   
            int j=0;
            for(;j<s[i-1].length() && j<s[i].length();j++)
            {
                if(s[i-1].charAt(j)==s[i].charAt(j))
                {
                    search=search+s[i].charAt(j);
                    if(first)
                    {
                        flag=true;
                        len++;
                    }
                    else if(j==len-1) break;
                }
                else 
                    break;
                
            }
            if(flag)
            {
                flag=false;
                first=false;
            }
        }
        return search;
    }
    public static void main(String args[])
    {
        Compare_prestring c1=new Compare_prestring();
        System.out.println( c1.search());
    }
}