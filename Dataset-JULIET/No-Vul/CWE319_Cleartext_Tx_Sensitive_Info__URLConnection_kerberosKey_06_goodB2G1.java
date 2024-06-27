class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                VAR2 = ""; 
                
                {
                    URLConnection VAR4 = (new FUN2("VAR5:
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    try
                    {
                        VAR7 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3!=5)
            {
                
                VAR9.writeLine("");
            }
            else
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
                    VAR9.writeLine(VAR18.FUN10());
                }
    
            }
        }
};