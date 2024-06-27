class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
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
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR2 != null)
            {
                KerberosPrincipal VAR11 = new FUN2("");
                
                KerberosKey VAR12 = new FUN3(VAR11, VAR2.FUN4(), null);
                VAR3.writeLine(VAR12.FUN5());
            }
    
        }
};