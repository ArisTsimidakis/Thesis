class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (5 != 5)
            {
                
                VAR2 = null;
            }
            else
            {
    
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
    
                
    
            }
    
            if (VAR2 != null)
            {
                KerberosPrincipal VAR10 = new FUN2("");
                
                KerberosKey VAR11 = new FUN3(VAR10, VAR2.FUN4(), null);
                VAR6.writeLine(VAR11.FUN5());
            }
    
        }
};