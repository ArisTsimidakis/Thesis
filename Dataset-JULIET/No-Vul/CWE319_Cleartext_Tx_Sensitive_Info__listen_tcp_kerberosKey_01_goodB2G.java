class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                ServerSocket VAR3 = null;
                Socket VAR4 = null;
                BufferedReader VAR5 = null;
                InputStreamReader VAR6 = null;
    
                try
                {
                    
                    VAR3 = new FUN2(39543);
                    VAR4 = VAR3.accept();
    
                    VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
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
    
                    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
    
            if (VAR2 != null)
            {
                KerberosPrincipal VAR12 = new FUN3("");
                
                {
                    Cipher VAR13 = VAR14.FUN4("");
                    
                    SecretKeySpec VAR15 = new FUN5("".getBytes(""), "");
                    VAR13.FUN6(VAR14.VAR16, VAR15);
                    VAR2 = new String(VAR13.FUN7(VAR2.getBytes("")), "");
                }
                KerberosKey VAR17 = new FUN8(VAR12, VAR2.FUN9(), null);
                VAR8.writeLine(VAR17.FUN10());
            }
    
        }
};