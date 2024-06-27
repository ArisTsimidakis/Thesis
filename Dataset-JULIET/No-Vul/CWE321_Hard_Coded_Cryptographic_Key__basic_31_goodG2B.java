class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                try
                {
                    InputStreamReader VAR4 = new InputStreamReader(System.in, "");
                    BufferedReader VAR5 = new BufferedReader(VAR4);
    
                    
                    VAR3 = VAR5.readLine();
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
                
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                if (VAR3 != null)
                {
                    String VAR11 = "";
                    byte[] VAR12 = VAR11.getBytes("");
                    
                    SecretKeySpec VAR13 = new FUN2(VAR3.getBytes(""), "");
                    Cipher VAR14 = VAR15.FUN3("");
                    VAR14.FUN4(VAR15.VAR16, VAR13);
                    byte[] VAR17 = VAR14.FUN5(VAR12);
                    VAR7.writeLine(VAR7.FUN6(VAR17)); 
                }
    
            }
        }
};