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
                    
                    PasswordAuthentication VAR11 = new FUN3("", VAR2.FUN4());
                    VAR3.writeLine(VAR11.FUN5());
                }
            }
            else
            {
    
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR12 = VAR13.FUN6("");
                        
                        SecretKeySpec VAR14 = new FUN7("".getBytes(""), "");
                        VAR12.FUN8(VAR13.VAR15, VAR14);
                        VAR2 = new String(VAR12.FUN9(VAR2.getBytes("")), "");
                    }
                    PasswordAuthentication VAR11 = new FUN3("", VAR2.FUN4());
                    VAR3.writeLine(VAR11.FUN5());
                }
    
            }
        }
};