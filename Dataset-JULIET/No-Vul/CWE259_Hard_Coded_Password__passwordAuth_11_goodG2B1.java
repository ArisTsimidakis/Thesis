class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = null;
            }
            else
            {
    
                VAR2 = ""; 
    
                
                try
                {
                    InputStreamReader VAR4 = new InputStreamReader(System.in, "");
                    BufferedReader VAR5 = new BufferedReader(VAR4);
    
                    
                    VAR2 = VAR5.readLine();
                }
                catch (IOException VAR6)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                }
    
                
    
            }
    
            if (VAR2 != null)
            {
                
                PasswordAuthentication VAR10 = new FUN3("", VAR2.FUN4());
                VAR3.writeLine(VAR10.FUN5());
            }
    
        }
};