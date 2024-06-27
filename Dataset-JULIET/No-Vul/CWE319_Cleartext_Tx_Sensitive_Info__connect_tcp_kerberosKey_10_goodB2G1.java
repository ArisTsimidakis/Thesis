class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    try
                    {
                        
                        VAR5 = new Socket("", 39544);
                        
                        
                        VAR7 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR12)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    KerberosPrincipal VAR13 = new FUN2("");
                    
                    {
                        Cipher VAR14 = VAR15.FUN3("");
                        
                        SecretKeySpec VAR16 = new FUN4("".getBytes(""), "");
                        VAR14.FUN5(VAR15.VAR17, VAR16);
                        VAR2 = new String(VAR14.FUN6(VAR2.getBytes("")), "");
                    }
                    KerberosKey VAR18 = new FUN7(VAR13, VAR2.FUN8(), null);
                    VAR3.writeLine(VAR18.FUN9());
                }
    
            }
        }
};