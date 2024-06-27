class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                VAR2 = ""; 
                
                {
                    Socket VAR3 = null;
                    BufferedReader VAR4 = null;
                    InputStreamReader VAR5 = null;
                    try
                    {
                        
                        VAR3 = new Socket("", 39544);
                        
                        
                        VAR5 = new InputStreamReader(VAR3.getInputStream(), "");
                        VAR4 = new BufferedReader(VAR5);
                        VAR2 = VAR4.readLine();
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
    
                        
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN3())
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    KerberosPrincipal VAR11 = new FUN4("");
                    
                    {
                        Cipher VAR12 = VAR13.FUN5("");
                        
                        SecretKeySpec VAR14 = new FUN6("".getBytes(""), "");
                        VAR12.FUN7(VAR13.VAR15, VAR14);
                        VAR2 = new String(VAR12.FUN8(VAR2.getBytes("")), "");
                    }
                    KerberosKey VAR16 = new FUN9(VAR11, VAR2.FUN10(), null);
                    VAR7.writeLine(VAR16.FUN11());
                }
    
            }
        }
};