class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (5==5)
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
    
            if (5==5)
            {
                if (VAR2 != null)
                {
                    KerberosPrincipal VAR11 = new FUN2("");
                    
                    {
                        Cipher VAR12 = VAR13.FUN3("");
                        
                        SecretKeySpec VAR14 = new FUN4("".getBytes(""), "");
                        VAR12.FUN5(VAR13.VAR15, VAR14);
                        VAR2 = new String(VAR12.FUN6(VAR2.getBytes("")), "");
                    }
                    KerberosKey VAR16 = new FUN7(VAR11, VAR2.FUN8(), null);
                    VAR7.writeLine(VAR16.FUN9());
                }
            }
        }
};