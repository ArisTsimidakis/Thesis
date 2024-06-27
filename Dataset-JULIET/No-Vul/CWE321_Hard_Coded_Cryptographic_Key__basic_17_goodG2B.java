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
                    String VAR11 = "";
                    byte[] VAR12 = VAR11.getBytes("");
                    
                    SecretKeySpec VAR13 = new FUN2(VAR2.getBytes(""), "");
                    Cipher VAR14 = VAR15.FUN3("");
                    VAR14.FUN4(VAR15.VAR16, VAR13);
                    byte[] VAR17 = VAR14.FUN5(VAR12);
                    VAR6.writeLine(VAR6.FUN6(VAR17)); 
                }
            }
        }
};