class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3 != 5)
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
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
    
                
    
            }
    
            if (VAR2 != null)
            {
                KerberosPrincipal VAR11 = new FUN2("");
                
                KerberosKey VAR12 = new FUN3(VAR11, VAR2.FUN4(), null);
                VAR7.writeLine(VAR12.FUN5());
            }
    
        }
};