class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    try
                    {
                        
                        VAR4 = new Socket("", 39544);
    
                        
    
                        
                        VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
    
                        VAR3 = VAR5.readLine();
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
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                if (VAR3 != null)
                {
                    KerberosPrincipal VAR12 = new FUN2("");
                    
                    {
                        Cipher VAR13 = VAR14.FUN3("");
                        
                        SecretKeySpec VAR15 = new FUN4("".getBytes(""), "");
                        VAR13.FUN5(VAR14.VAR16, VAR15);
                        VAR3 = new String(VAR13.FUN6(VAR3.getBytes("")), "");
                    }
                    KerberosKey VAR17 = new FUN7(VAR12, VAR3.FUN8(), null);
                    VAR8.writeLine(VAR17.FUN9());
                }
    
            }
        }
};