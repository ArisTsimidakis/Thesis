class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2 = null;
    
            switch (6)
            {
            case 6:
                VAR2 = ""; 
                
                try
                {
                    InputStreamReader VAR3 = new InputStreamReader(System.in, "");
                    BufferedReader VAR4 = new BufferedReader(VAR3);
                    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
                
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            if (VAR2 != null)
            {
                
                PasswordAuthentication VAR10 = new FUN2("", VAR2.FUN3());
                VAR6.writeLine(VAR10.FUN4());
            }
    
        }
};