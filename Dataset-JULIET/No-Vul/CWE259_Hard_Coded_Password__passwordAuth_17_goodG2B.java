class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
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
    
            
    
            for (int VAR10 = 0; VAR10 < 1; VAR10++)
            {
                if (VAR2 != null)
                {
                    
                    PasswordAuthentication VAR11 = new FUN2("", VAR2.FUN3());
                    VAR6.writeLine(VAR11.FUN4());
                }
            }
        }
};