class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                VAR2 = ""; 
                
                {
                    URLConnection VAR3 = (new FUN3("VAR4:
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
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN4())
            {
                
                VAR8.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    KerberosPrincipal VAR12 = new FUN5("");
                    
                    {
                        Cipher VAR13 = VAR14.FUN6("");
                        
                        SecretKeySpec VAR15 = new FUN7("".getBytes(""), "");
                        VAR13.FUN8(VAR14.VAR16, VAR15);
                        VAR2 = new String(VAR13.FUN9(VAR2.getBytes("")), "");
                    }
                    KerberosKey VAR17 = new FUN10(VAR12, VAR2.FUN11(), null);
                    VAR8.writeLine(VAR17.FUN12());
                }
    
            }
        }
};