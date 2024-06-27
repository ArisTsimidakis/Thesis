class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    URLConnection VAR4 = (new FUN3("VAR5:
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
                    }
                }
            }
            else
            {
    
                VAR2 = ""; 
    
                
                {
                    URLConnection VAR4 = (new FUN3("VAR5:
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
                    }
                }
    
            }
    
            if(VAR3.FUN2())
            {
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR12 = VAR13.FUN4("");
                        
                        SecretKeySpec VAR14 = new FUN5("".getBytes(""), "");
                        VAR12.FUN6(VAR13.VAR15, VAR14);
                        VAR2 = new String(VAR12.FUN7(VAR2.getBytes("")), "");
                    }
                    PasswordAuthentication VAR16 = new FUN8("", VAR2.FUN9());
                    VAR3.writeLine(VAR16.FUN10());
                }
            }
            else
            {
    
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR12 = VAR13.FUN4("");
                        
                        SecretKeySpec VAR14 = new FUN5("".getBytes(""), "");
                        VAR12.FUN6(VAR13.VAR15, VAR14);
                        VAR2 = new String(VAR12.FUN7(VAR2.getBytes("")), "");
                    }
                    PasswordAuthentication VAR16 = new FUN8("", VAR2.FUN9());
                    VAR3.writeLine(VAR16.FUN10());
                }
    
            }
        }
};