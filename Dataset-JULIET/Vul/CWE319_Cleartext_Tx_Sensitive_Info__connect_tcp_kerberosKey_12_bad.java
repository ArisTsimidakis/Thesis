class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    try
                    {
                        
                        VAR4 = new Socket("", 39544);
                        
                        
                        VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
    
                
                
                VAR2 = "";
    
            }
    
            if(VAR3.FUN2())
            {
                if (VAR2 != null)
                {
                    KerberosPrincipal VAR11 = new FUN3("");
                    
                    KerberosKey VAR12 = new FUN4(VAR11, VAR2.FUN5(), null);
                    VAR3.writeLine(VAR12.FUN6());
                }
            }
            else
            {
    
                if (VAR2 != null)
                {
                    KerberosPrincipal VAR11 = new FUN3("");
                    
                    {
                        Cipher VAR13 = VAR14.FUN7("");
                        
                        SecretKeySpec VAR15 = new FUN8("".getBytes(""), "");
                        VAR13.FUN9(VAR14.VAR16, VAR15);
                        VAR2 = new String(VAR13.FUN10(VAR2.getBytes("")), "");
                    }
                    KerberosKey VAR12 = new FUN4(VAR11, VAR2.FUN5(), null);
                    VAR3.writeLine(VAR12.FUN6());
                }
    
            }
        }
};