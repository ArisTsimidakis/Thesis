class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    ServerSocket VAR5 = null;
                    Socket VAR6 = null;
                    BufferedReader VAR7 = null;
                    InputStreamReader VAR8 = null;
                    try
                    {
                        
                        VAR5 = new FUN2(39543);
                        VAR6 = VAR5.accept();
                        VAR8 = new InputStreamReader(VAR6.getInputStream(), "");
                        VAR7 = new BufferedReader(VAR8);
                        
                        VAR2 = VAR7.readLine();
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4)
            {
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR13 = VAR14.FUN3("");
                        
                        SecretKeySpec VAR15 = new FUN4("".getBytes(""), "");
                        VAR13.FUN5(VAR14.VAR16, VAR15);
                        VAR2 = new String(VAR13.FUN6(VAR2.getBytes("")), "");
                    }
                    PasswordAuthentication VAR17 = new FUN7("", VAR2.FUN8());
                    VAR3.writeLine(VAR17.FUN9());
                }
            }
        }
};