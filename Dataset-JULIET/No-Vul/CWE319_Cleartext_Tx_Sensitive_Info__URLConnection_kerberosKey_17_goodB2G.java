class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                URLConnection VAR3 = (new FUN2("VAR4:
                BufferedReader VAR5 = null;
                InputStreamReader VAR6 = null;
    
                try
                {
                    VAR6 = new InputStreamReader(VAR3.getInputStream(), "");
                    VAR5 = new BufferedReader(VAR6);
    
                    
                    
                    VAR2 = VAR5.readLine();
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
    
            for (int VAR12 = 0; VAR12 < 1; VAR12++)
            {
                if (VAR2 != null)
                {
                    KerberosPrincipal VAR13 = new FUN3("");
                    
                    {
                        Cipher VAR14 = VAR15.FUN4("");
                        
                        SecretKeySpec VAR16 = new FUN5("".getBytes(""), "");
                        VAR14.FUN6(VAR15.VAR17, VAR16);
                        VAR2 = new String(VAR14.FUN7(VAR2.getBytes("")), "");
                    }
                    KerberosKey VAR18 = new FUN8(VAR13, VAR2.FUN9(), null);
                    VAR8.writeLine(VAR18.FUN10());
                }
            }
        }
};