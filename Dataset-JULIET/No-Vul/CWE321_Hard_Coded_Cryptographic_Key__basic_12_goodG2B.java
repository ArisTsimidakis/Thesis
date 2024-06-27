class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
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
                String VAR10 = "";
                byte[] VAR11 = VAR10.getBytes("");
                
                SecretKeySpec VAR12 = new FUN3(VAR2.getBytes(""), "");
                Cipher VAR13 = VAR14.FUN4("");
                VAR13.FUN5(VAR14.VAR15, VAR12);
                byte[] VAR16 = VAR13.FUN6(VAR11);
                VAR3.writeLine(VAR3.FUN7(VAR16)); 
            }
    
        }
};