class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                VAR2 = null;
            }
            else
            {
    
                VAR2 = ""; 
    
                
                try
                {
                    InputStreamReader VAR5 = new InputStreamReader(System.in, "");
                    BufferedReader VAR6 = new BufferedReader(VAR5);
    
                    
                    VAR2 = VAR6.readLine();
                }
                catch (IOException VAR7)
                {
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                }
    
                
    
            }
    
            if (VAR2 != null)
            {
                
                PasswordAuthentication VAR11 = new FUN2("", VAR2.FUN3());
                VAR3.writeLine(VAR11.FUN4());
            }
    
        }
};