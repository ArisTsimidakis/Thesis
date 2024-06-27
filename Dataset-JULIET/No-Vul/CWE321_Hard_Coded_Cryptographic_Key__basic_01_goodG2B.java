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
            
    
            if (VAR2 != null)
            {
                String VAR10 = "";
                byte[] VAR11 = VAR10.getBytes("");
                
                SecretKeySpec VAR12 = new FUN2(VAR2.getBytes(""), "");
                Cipher VAR13 = VAR14.FUN3("");
                VAR13.FUN4(VAR14.VAR15, VAR12);
                byte[] VAR16 = VAR13.FUN5(VAR11);
                VAR6.writeLine(VAR6.FUN6(VAR16)); 
            }
    
        }
};